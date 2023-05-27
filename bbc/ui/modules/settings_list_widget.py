from functools import partial

from constants import CHECKBOX_STYLE, COLUMN_HEADER_LABELS, DEBUG_NAME, SETTINGS_LIST
from handlers.db_handler import SettingsDatabaseHandler
from PySide6.QtCore import Signal
from PySide6.QtWidgets import (
    QAbstractScrollArea,
    QCheckBox,
    QComboBox,
    QDoubleSpinBox,
    QHeaderView,
    QLayout,
    QLineEdit,
    QPushButton,
    QTableWidget,
    QTableWidgetItem,
    QVBoxLayout,
    QWidget,
)


class SettingsListWidget(QWidget):
    save_changes_signal = Signal(dict)
    discard_changes_signal = Signal()

    def __init__(self):
        """
        Initialize the SettingsListWidget.
        """
        super().__init__()
        self.db_handler = SettingsDatabaseHandler()

        self.init_settings_list_widget()

    def init_settings_list_widget(self):
        """
        Initialize the settings list widget.
        """
        self.layout: QLayout = QVBoxLayout(self)
        self.table_widget = QTableWidget()
        self.layout.addWidget(self.table_widget)

        self.table_widget.setSizeAdjustPolicy(
            QAbstractScrollArea.SizeAdjustPolicy.AdjustToContents
        )

        self.setting_widgets = {}

        self.setup_settings()
        self.set_column_width()
        self.set_row_height()

        print("Initializing settings list widget")

    def set_column_width(self):
        """
        Set the column widths.
        """
        total_width = self.get_total_columns_width()
        table_width = self.table_widget.viewport().width()
        if total_width < table_width:
            stretch_factor = table_width / total_width
        else:
            stretch_factor = 1.0

        for col in range(self.table_widget.columnCount()):
            content_width = self.table_widget.columnWidth(col)
            minimum_width = self.table_widget.sizeHintForColumn(col)
            desired_width = max(content_width, minimum_width * stretch_factor)
            self.table_widget.setColumnWidth(col, int(desired_width))

        self.table_widget.horizontalHeader().setSectionResizeMode(
            QHeaderView.ResizeMode.Stretch
        )

    def get_total_columns_width(self):
        """
        Get the total columns width.
        """
        total_width = 0
        for col in range(self.table_widget.columnCount()):
            total_width += self.table_widget.columnWidth(col)
        return total_width

    def set_row_height(self):
        """
        Set the row heights.
        """
        max_height = 0
        for row in range(self.table_widget.rowCount()):
            row_height = 0
            for col in range(self.table_widget.columnCount()):
                item = self.table_widget.item(row, col)
                if item is not None:
                    item_height = item.sizeHint().height()
                    row_height = max(row_height, item_height)

                widget = self.table_widget.cellWidget(row, col)
                if widget is not None:
                    widget_height = widget.sizeHint().height()
                    row_height = max(row_height, widget_height)

            max_height = max(max_height, row_height)

        for row in range(self.table_widget.rowCount()):
            self.table_widget.setRowHeight(row, max_height)

    def add_setting(self, *args):
        """
        Add a setting to the settings list widget.
        """
        row_count = self.table_widget.rowCount()
        self.table_widget.insertRow(row_count)

        setting_name = args[0]
        setting_type = args[1]
        options = args[2] if len(args) > 2 else []

        print("Adding setting:", setting_name)
        print("Setting type:", setting_type)

        setting_item = QTableWidgetItem(setting_name)
        self.table_widget.setItem(row_count, 0, setting_item)

        value_widget = None

        if setting_type == "dropdown":
            value_widget = QComboBox()
            value_widget.addItems(options)
            value_widget.setCurrentText(args[3] if len(args) > 3 else "")
            value_widget.currentTextChanged.connect(
                partial(self.save_setting_changes, setting_name)
            )
        elif setting_type == "input_text":
            value_widget = QLineEdit(args[3] if len(args) > 3 else "")
            value_widget.textChanged.connect(
                partial(self.save_setting_changes, setting_name)
            )
        elif setting_type == "input_int":
            value_widget = QDoubleSpinBox()
            value_widget.setValue(float(args[3] if len(args) > 3 else 0))
            value_widget.valueChanged.connect(
                partial(self.save_setting_changes, setting_name)
            )
        elif setting_type == "checkbox":
            value_widget = QCheckBox()
            value_widget.setChecked(args[3] if len(args) > 3 else False)
            value_widget.stateChanged.connect(
                partial(self.save_setting_changes, setting_name)
            )
            value_widget.setStyleSheet(CHECKBOX_STYLE)
        elif setting_type == "button":
            value_widget = QPushButton()
            value_widget.setChecked(args[3] if len(args) > 3 else False)
            value_widget.clicked.connect(
                partial(self.handle_button_click, setting_name)
            )

        if value_widget is not None:
            self.table_widget.setCellWidget(row_count, 1, value_widget)
            self.setting_widgets[setting_name] = value_widget

    def handle_button_click(self, setting_name, state):
        print(DEBUG_NAME + f"{setting_name} button clicked! State: {state}")

    def save_setting_changes(self, parameter, value):
        sender_button = self.sender()
        if isinstance(sender_button, QPushButton):
            settings = {parameter: value}
            self.db_handler.save_db_settings(settings)
            print(
                DEBUG_NAME
                + f"Save button clicked for parameter: {parameter}, value: {value}"
            )

    def discard_setting_changes(self):
        sender_button = self.sender()
        if isinstance(sender_button, QPushButton):
            self.db_handler.discard_db_settings()
            print(DEBUG_NAME + "Changes discarded!")

    def setup_settings(self):
        """
        Setup the settings list widget.
        """
        print(SETTINGS_LIST)
        self.table_widget.setColumnCount(len(COLUMN_HEADER_LABELS))

        header_items = [
            QTableWidgetItem(label) if label else QTableWidgetItem()
            for label in COLUMN_HEADER_LABELS
        ]
        self.table_widget.setHorizontalHeaderLabels(
            [label.text() for label in header_items]
        )

        for group in SETTINGS_LIST:
            group_name = group["group"]
            group_settings = group["settings"]

            for setting in group_settings:
                setting_name, setting_type, options = setting
                self.add_setting(group_name, setting_name, setting_type, options)

        for param, value in self.db_handler.get_db_settings():
            for setting in SETTINGS_LIST:
                group_settings = setting["settings"]
                for setting in group_settings:
                    setting_name, setting_type, _ = setting
                    if param == setting_name:
                        widget = self.setting_widgets.get(setting_name)
                        if widget is not None:
                            if setting_type == "dropdown":
                                combo_box = widget
                                combo_box.setCurrentText(value)
                            elif setting_type == "input_text":
                                line_edit = widget
                                line_edit.setText(value)
                            elif setting_type == "input_int":
                                spin_box = widget
                                spin_box.setValue(float(value))
                            elif setting_type == "checkbox":
                                check_box = widget
                                check_box.setChecked(bool(value))
                            elif setting_type == "button":
                                button = widget
                                button.setChecked(bool(value))
                        break

        self.table_widget.resizeRowsToContents()
