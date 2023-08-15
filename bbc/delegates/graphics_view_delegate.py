from functools import partial
from typing import Optional

from delegates.graphics_scene_delegate import GraphicsSceneDelegate
from handlers.dialog_handler import DialogHandler
from PySide6.QtCore import QLineF, QPointF, QRectF, QSettings, Qt
from PySide6.QtGui import (
    QAction,
    QColor,
    QContextMenuEvent,
    QMouseEvent,
    QPainter,
    QPen,
    QResizeEvent,
    QWheelEvent,
)
from PySide6.QtWidgets import QGraphicsItem, QGraphicsView, QMenu, QSizePolicy, QWidget


class GraphicsViewDelegate(QGraphicsView):
    """A class to represent a 2D frame view."""

    def __init__(
        self, module_data: Optional[dict] = None, parent: Optional[QWidget] = None
    ):
        """Initialize the 2D frame view."""
        super().__init__(parent)
        self.module_data = module_data
        self._settings = QSettings()
        self._object_position = QPointF()
        self._custom_graphics_scene = GraphicsSceneDelegate()
        self._dialog_handler = DialogHandler(self._custom_graphics_scene._objects)

        self.setup_graphics_view()

    def setup_graphics_view(self):
        """Setup the frame 2D view."""
        self.setScene(self._custom_graphics_scene)

        self._custom_graphics_scene.setBackgroundBrush(QColor(0, 0, 0))

        self.setTransformationAnchor(QGraphicsView.ViewportAnchor.AnchorUnderMouse)
        self.setResizeAnchor(QGraphicsView.ViewportAnchor.AnchorUnderMouse)
        self.setMinimumSize(300, 300)
        self.setSizePolicy(QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Expanding)

        self._custom_graphics_scene.mousePressed = False
        self._custom_graphics_scene._signal_handler.objectDoubleClicked.connect(
            self.handle_object_double_clicked
        )

    def drawBackground(self, painter: QPainter, rect: QRectF):
        """Draw the background."""
        super().drawBackground(painter, rect)

        grid_color = QColor(200, 200, 200)
        grid_pen = QPen(grid_color, 0.5, Qt.PenStyle.SolidLine)

        grid_size = 50
        left = int(rect.left()) - (int(rect.left()) % grid_size)
        top = int(rect.top()) - (int(rect.top()) % grid_size)
        right = int(rect.right())
        bottom = int(rect.bottom())

        vertical_lines = [
            ((x, rect.top()), (x, rect.bottom())) for x in range(left, right, grid_size)
        ]
        horizontal_lines = [
            ((rect.left(), y), (rect.right(), y)) for y in range(top, bottom, grid_size)
        ]

        lines = vertical_lines + horizontal_lines

        painter.setPen(grid_pen)
        painter.drawLines([QLineF(*line[0], *line[1]) for line in lines])

    def fit_to_objects(self):
        """Fit the view to the items."""
        extra_space = 50
        objects = self._custom_graphics_scene.itemsBoundingRect()
        scene_object = objects.adjusted(
            -extra_space, -extra_space, extra_space, extra_space
        )
        self.fitInView(scene_object, Qt.AspectRatioMode.KeepAspectRatio)

    def show_object_properties_dialog(self, object_id: int):
        """Show the object properties dialog."""
        selected_object = self._custom_graphics_scene.selectedItems()
        if selected_object:
            object_id = self._custom_graphics_scene.items().index(selected_object[0])
            self._dialog_handler.object_properties_dialog(object_id)

    def context_menu(self, event_pos: QPointF):
        """Show the context menu."""
        context_menu = QMenu(self)

        context_menu.setStyleSheet(
            """
            QMenu {
                background-color: rgba(0, 0, 0, 0);
                border: 1px solid white;
                border-radius: 6px;
                color: white;
            }
            QMenu::item {
                padding: 8px 20px;
                font-weight: bold;
            }
            QMenu::item:selected {
                background-color: #f4c211;
                border-radius: 6px;
                color: black;
            }
            """
        )

        create_object_action = QAction("Create New Object", self)
        create_object_action.triggered.connect(
            partial(self._custom_graphics_scene.create_object, event_pos)
        )
        context_menu.addAction(create_object_action)

        context_menu.exec(self.mapToGlobal(event_pos.toPoint()))

    def resizeEvent(self, event: QResizeEvent):
        """Handle resize events."""
        super().resizeEvent(event)
        self.fit_to_objects()

    def wheelEvent(self, event: QWheelEvent):
        """Handle wheel events."""
        if event.modifiers() == Qt.KeyboardModifier.ControlModifier:
            zoom_factor = 1.15
            zoom = zoom_factor if event.angleDelta().y() > 0 else 1 / zoom_factor
            self.scale(zoom, zoom)

    def contextMenuEvent(self, event: QContextMenuEvent) -> None:
        """Handle context menu events."""
        event_pos = QPointF(event.pos())
        self.context_menu(event_pos)

    def handle_object_double_clicked(self, object_id: int):
        """Handle object double clicked event"""
        self.show_object_properties_dialog(object_id)

    def mousePressEvent(self, event: QMouseEvent):
        """Handle mouse press events."""
        super().mousePressEvent(event)
        if event.button() == Qt.MouseButton.RightButton:
            object = self.itemAt(event.pos())
            if isinstance(object, QGraphicsItem):
                object_id = object.data(Qt.ItemDataRole.UserRole)
                self.show_object_properties_dialog(object_id)

        if event.button() == Qt.MouseButton.MiddleButton:
            self.setDragMode(QGraphicsView.DragMode.ScrollHandDrag)
            self._last_pan_point = event.pos()

        if event.button() == Qt.MouseButton.LeftButton:
            self._custom_graphics_scene.mousePressed = True
            selected_object = self._custom_graphics_scene.selectedItems()
            if selected_object:
                self._object_position = selected_object[0].pos() - self.mapToScene(
                    event.pos()
                )

    def mouseMoveEvent(self, event: QMouseEvent):
        """Handle mouse move events."""
        super().mouseMoveEvent(event)
        if (
            self._custom_graphics_scene.mousePressed
            and self._custom_graphics_scene.selectedItems()
        ):
            object = self._custom_graphics_scene.selectedItems()[0]
            new_object_pos = self.mapToScene(event.pos()) + self._object_position
            object.setPos(new_object_pos)
