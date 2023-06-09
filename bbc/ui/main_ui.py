from constants import UI_ICON_PATH, UI_TITLE
from handlers.events_handler import EventsHandler
from handlers.ui_handler import UIHandler
from PySide6.QtCore import QSettings
from PySide6.QtGui import QIcon
from PySide6.QtWidgets import QGridLayout, QMainWindow, QWidget
from ui.modules.button_module import ButtonModule
from ui.modules.checkbox_module import CheckBoxModule
from ui.modules.container_module import ContainerModule
from ui.modules.label_module import LabelModule
from ui.modules.settings_list_module import TableModule


class MainUI(QMainWindow):
    def __init__(self):
        """
        Initialize the MainUI.
        """
        super().__init__()

        self.setup_settings()
        self.setup_main_ui()

    def setup_settings(self):
        """
        Setup the settings.
        """
        self._settings = QSettings()

        self.main_ui_page_visibility_state = self._settings.value(
            "main_ui_page_visibility_state", defaultValue=True, type=bool
        )
        self.viewer_page_visibility_state = self._settings.value(
            "viewer_page_visibility_state", defaultValue=0, type=int
        )
        self.theme_state = self._settings.value("theme_state", defaultValue=0, type=int)

        self.toggle_visibility_state()

    def setup_main_ui(self):
        """
        Setup the MainUI.
        """
        self.setCentralWidget(QWidget())
        self.setWindowTitle(UI_TITLE)
        self.setWindowIcon(QIcon(UI_ICON_PATH))
        self.setContentsMargins(0, 0, 0, 0)

        self._ui_handler = UIHandler(self)
        self._ui_handler.ui_size_handler(self, 600, 400)
        self._ui_handler.center_ui_on_screen_handler(self)

        self._events_handler = EventsHandler()
        EventsHandler.quit_on_key_press_event(self)

        # Setup checkboxes:
        self.checkbox_0 = CheckBoxModule(0)
        self.checkbox_0.on_checkbox_clicked.connect(
            self._events_handler.on_checkbox_clicked
        )

        # Setup buttons:
        self.button_0 = ButtonModule(0)
        self.button_0.on_button_clicked.connect(self._events_handler.on_button_clicked)

        self.button_1 = ButtonModule(1)
        self.button_1.on_button_clicked.connect(self._events_handler.on_button_clicked)

        self.button_2 = ButtonModule(2)
        self.button_2.on_button_clicked.connect(self._events_handler.on_button_clicked)

        self.button_3 = ButtonModule(3)
        self.button_3.on_button_clicked.connect(self._events_handler.on_button_clicked)

        # Setup containers:
        self.button_container_0 = ContainerModule("HBox", [0, 0, 0, 0])
        self.button_container_0.add_widget(self.button_0)
        self.button_container_0.add_spacer()
        self.button_container_0.add_widget(self.button_1)

        self.button_container_1 = ContainerModule("HBox", [0, 0, 0, 0])
        self.button_container_1.add_spacer()
        self.button_container_1.add_widget(self.button_2)
        self.button_container_1.add_widget(self.button_3)

        self.main_page_layout = QGridLayout()
        self.startup_page_layout = QGridLayout()

        self.central_widget = QWidget()

    def toggle_visibility_state(self):
        """
        Toggle the visibility state.
        """
        # Startup Page Visibility State 0:
        if self.main_ui_page_visibility_state == 0:
            self.startup_page_layout.addWidget(LabelModule(1), 1, 0)
            self.startup_page_layout.addWidget(self.checkbox_0, 2, 0)
            self.startup_page_layout.addWidget(LabelModule(0), 3, 0)

            self.central_widget.setLayout(self.startup_page_layout)

        # Startup Page Visibility State 1:
        elif self.main_ui_page_visibility_state == 1:
            self.main_page_layout.addWidget(self.button_container_0, 0, 0)
            self.main_page_layout.addWidget(TableModule(0), 1, 0)
            self.main_page_layout.addWidget(self.button_container_1, 2, 0)
            self.main_page_layout.addWidget(self.checkbox_0, 3, 0)
            self.main_page_layout.addWidget(LabelModule(0), 4, 0)

            # Viewer Visibility State 0:
            if self.viewer_page_visibility_state == 0:
                self.main_page_layout.addWidget(LabelModule(2), 0, 1)

            self.central_widget.setLayout(self.main_page_layout)

        self.setCentralWidget(self.central_widget)
