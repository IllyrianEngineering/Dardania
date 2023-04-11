import os

from PyQt6.QtCore import Qt
from PyQt6.QtGui import QFont, QValidator
from PyQt6.QtWidgets import (
    QFileDialog,
    QGridLayout,
    QGroupBox,
    QHBoxLayout,
    QLabel,
    QLineEdit,
    QMessageBox,
    QPushButton,
    QSizePolicy,
    QVBoxLayout,
    QWidget,
)

from constants import (
    BACK_BUTTON,
    DATA_DIR,
    ON_BACK_BUTTON_PRESSED_DESC,
    ON_BACK_BUTTON_PRESSED_FILE_PATH,
    SAVE_BUTTON,
    TFCC_UI_GROUPBOX_INPUT_FIELDS_DESC0,
    TFCC_UI_GROUPBOX_INPUT_FIELDS_DESC1,
    TFCC_UI_GROUPBOX_INPUT_FIELDS_DESC2,
    TFCC_UI_GROUPBOX_TITLE,
    UI_CONTENTS_MARGINS,
    UI_GROUPBOX_FONT_SIZE,
    UI_GROUPBOX_FONT_TYPE,
    UI_GROUPBOX_STYLESHEET,
)
from events.on_press_events import OnPressEvents
from ui.ui_setup import UiSetup


# The TFCCUI class is a QWidget used for creating a UI in a GUI application.
class TFCCUi(UiSetup, OnPressEvents, QWidget):
    def __init__(self):
        """
        This function initializes a layout and adds various widgets to it.
        """
        super().__init__()

        self.main_layout = QVBoxLayout(self)
        self.main_layout.setAlignment(Qt.AlignmentFlag.AlignCenter)

        self.setup_ui()

        self.create_group_box()

        self.main_layout.addWidget(self.group_box)
        self.main_layout.addWidget(self.crlabel)
        self.main_layout.addWidget(self.group_box)
        self.create_button_layout()
        self.main_layout.addLayout(self.button_layout)
        self.main_layout.addWidget(self.crlabel)

    def create_group_box(self):
        """
        This function creates a group box with input fields and applies styling to it.
        """
        self.group_box = QGroupBox(self)
        self.group_box_layout = QHBoxLayout(self.group_box)
        self.group_box.setStyleSheet(UI_GROUPBOX_STYLESHEET)
        self.group_box.setTitle(TFCC_UI_GROUPBOX_TITLE)
        self.group_box.setFont(
            QFont(UI_GROUPBOX_FONT_TYPE, UI_GROUPBOX_FONT_SIZE, QFont.Weight.Bold)
        )
        self.group_box.setAlignment(Qt.AlignmentFlag.AlignHCenter)
        self.group_box.setFlat(True)

        self.group_box.setSizePolicy(
            QSizePolicy.Policy.Maximum, QSizePolicy.Policy.Maximum
        )
        self.group_box_layout.setContentsMargins(*UI_CONTENTS_MARGINS)

        self.create_input_fields()
        self.group_box_layout.addLayout(self.input_fields_layout)

    def create_input_fields(self):
        """
        This function creates input fields with labels and placeholders in a QGridLayout.
        """
        self.labels = []
        self.inputs = []
        self.input_fields_layout = QGridLayout()
        #input_validator = QValidator(self.input_validator)

        for i, (desc0, desc1) in enumerate(
            zip(
                TFCC_UI_GROUPBOX_INPUT_FIELDS_DESC0, TFCC_UI_GROUPBOX_INPUT_FIELDS_DESC2
            )
        ):
            label0 = QLabel(desc0, self)
            input = QLineEdit(self)
            label1 = QLabel(desc1, self)
            self.labels.extend([label0, label1])
            self.inputs.append(input)
            #input.setValidator(input_validator)
            self.input_fields_layout.addWidget(label0, i, 0)
            self.input_fields_layout.addWidget(input, i, 1)
            self.input_fields_layout.addWidget(label1, i, 2)

            input.setPlaceholderText(TFCC_UI_GROUPBOX_INPUT_FIELDS_DESC1[i])

    def input_validator(self, input_text, pos):
        # Check if input is empty or a non-negative integer
        if input_text.isEmpty():
            return (QValidator.State.Intermediate, input_text, pos)
        elif self.inputs.index(self.sender()) in [0, 1, 3, 4, 6]:
            # check if input is a non-negative integer
            if input_text.isdigit() and int(input_text) >= 0:
                return (QValidator.State.Acceptable, input_text, pos)
            else:
                return (QValidator.State.Invalid, input_text, pos)
        else:
            # accept any text input
            return (QValidator.State.Acceptable, input_text, pos)

    def create_button_layout(self):
        """
        This function creates a horizontal layout with a "Back" button and a "Save" button, each with
        their own respective click event handlers.
        """
        self.button_layout = QHBoxLayout()
        self.button_layout.setAlignment(Qt.AlignmentFlag.AlignCenter)

        self.back_button = QPushButton(BACK_BUTTON, self)
        self.back_button.clicked.connect(self.on_back_button_pressed)
        self.button_layout.addWidget(self.back_button)

        self.save_button = QPushButton(SAVE_BUTTON, self)
        self.save_button.clicked.connect(self.on_save_button_pressed)
        self.button_layout.addWidget(self.save_button)

    def on_save_button_pressed(self):
        """
        This function prompts the user to select a file path to save input values.
        """
        file_path, _ = QFileDialog.getSaveFileName(
            self, *ON_BACK_BUTTON_PRESSED_FILE_PATH
        )

        if file_path:
            self.save_input_values()

    def on_back_button_pressed(self):
        """
        This function handles the action of pressing the back button in a UI and prompts the user to
        save changes before returning to the main UI.
        """
        from ui.main_ui import MainUi

        reply = QMessageBox.question(
            self,
            *ON_BACK_BUTTON_PRESSED_DESC,
            QMessageBox.StandardButton.Yes
            | QMessageBox.StandardButton.No
            | QMessageBox.StandardButton.Cancel,
        )

        if reply == QMessageBox.StandardButton.Yes:
            self.on_save_button_pressed()
            main_ui = MainUi()
            main_ui.show()
            self.close()
        elif reply == QMessageBox.StandardButton.No:
            main_ui = MainUi()
            main_ui.show()
            self.close()

    def save_input_values(self):
        """
        This function saves input values from input widgets to a text file.
        """
        input_values = {}
        for i, input_widget in enumerate(self.inputs):
            input_text = input_widget.text()
            input_values[i] = input_text

        data_dir = DATA_DIR
        if not os.path.exists(data_dir):
            os.makedirs(data_dir)
        file_path = os.path.join(data_dir, "input_values.txt")

        with open(file_path, "w") as f:
            for key, value in input_values.items():
                f.write(f"{key}: {value}\n")

    def keyPressEvent(self, event):
        """
        This function handles key press events and checks if the escape key or the combination of
        control key and Q key is pressed to call a specific function.

        :param event: The event parameter is an object that represents a key press event. It contains
        information about the key that was pressed, such as the key code and any modifiers (e.g. Ctrl,
        Shift) that were held down at the time of the press
        """
        if event.key() == Qt.Key.Key_Escape:
            self.on_back_button_pressed()
        elif (
            event.key() == Qt.Key.Key_Q
            and event.modifiers() == Qt.KeyboardModifier.ControlModifier
        ):
            self.on_back_button_pressed()

    """ add when clicking on window red X button that it gives the message on_back_button_pressed() """
