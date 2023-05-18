from constants import UI_ICON_PATH, UI_MINIMUM_SIZE, UI_TITLE
from handlers.events_handler import EventsHandler
from handlers.theme_handler import ThemeHandler
from handlers.ui_handler import UIHandler
from PySide6.QtGui import QIcon
from PySide6.QtWidgets import QGridLayout, QMainWindow, QWidget
from ui.modules.button_widget import ButtonWidget
from ui.modules.settings_list_widget import SettingsListWidget
from ui.object_viewer_ui import ObjectViewerUI


class MainUI(QMainWindow, ObjectViewerUI, UIHandler, ThemeHandler, EventsHandler):
    def __init__(self):
        super().__init__()

        # Call functions here.
        self.initMainUI()
        self.quit_on_key_press_event()

        # self.set_theme_handler(KEY_THEME_LIGHT) # FIXME: AttributeError

    def initMainUI(self):
        # Set up the main window
        self.setWindowTitle(UI_TITLE)
        self.setWindowIcon(QIcon(UI_ICON_PATH))

        settings_widget = SettingsListWidget(self)
        total_columns_width = settings_widget.get_total_columns_width()

        # Calculate the desired width of the main window
        total_columns_width += self.centralWidget().layout().spacing() * (
            settings_widget.table_widget.columnCount() - 1
        )
        window_width = (
            total_columns_width
            + self.centralWidget().layout().contentsMargins().left()
            + self.centralWidget().layout().contentsMargins().right()
        )

        # Set the width of the main window
        self.setFixedWidth(window_width)

        # Create a new layout for the central widget
        layout = QGridLayout(self.centralWidget())

        # Add Modules to the layout
        layout.addWidget(ButtonWidget(self), 0, 0)
        layout.addWidget(settings_widget, 1, 0)

        # Center the window on the primary screen
        self.center_ui_on_screen_handler(self)
