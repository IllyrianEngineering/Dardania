from PySide6.QtWidgets import QGraphicsScene

from data.frame_obj_data import FrameObjInitData
from data.obj_data import ObjInitData
from interfaces.configs.graphics_object_configs import GraphicsObjectConfig
from interfaces.modules.graphics_object_module import GraphicsObjectModule


# TODO
class GraphicsSceneDelegate(QGraphicsScene):
    """A class to represent a graphics scene delegate."""

    def __init__(self) -> None:
        """Initialize the graphics scene delegate."""
        super().__init__()
        self.properties(self)

    @staticmethod
    def calculate_frame_coordinates(frame_size: int, spacing: int) -> list:
        """Calculate frame coordinates with given size and spacing."""
        return [i for i in range(frame_size) if i % spacing == 0]

    @staticmethod
    def properties(scene: QGraphicsScene) -> None:
        """Setup the framework."""
        stud_spacing_x = FrameObjInitData.StudSpacingX
        stud_spacing_y = FrameObjInitData.StudSpacingY
        stud_size_x = ObjInitData.DimX
        frame_x = FrameObjInitData.FrameX
        frame_y = FrameObjInitData.FrameY

        _add_studs = GraphicsSceneDelegate.setup_studs
        _calc = GraphicsSceneDelegate.calculate_frame_coordinates

        for x_coord in _calc(frame_x, stud_spacing_x):
            _add_studs(
                scene, x_coord, stud_size_x, stud_size_x, frame_y - stud_size_x, 0
            )
        _add_studs(
            scene,
            frame_x - stud_size_x,
            stud_size_x,
            stud_size_x,
            frame_y - stud_size_x,
            0,
        )

        for y_coord in _calc(frame_y, stud_spacing_y):
            _add_studs(scene, 0, y_coord + stud_size_x, stud_size_x, frame_x, -90)
        _add_studs(scene, 0, frame_y + stud_size_x, stud_size_x, frame_x, -90)

    @staticmethod
    def setup_studs(
        scene: QGraphicsScene, posx: int, posy: int, dimx: int, dimy: int, rad: int
    ) -> None:
        """Add a stud to the scene."""
        stud = GraphicsObjectModule(GraphicsObjectConfig(), posx, posy, dimx, dimy, rad)

        scene.addItem(stud)