import winreg

from constants import (
    DARK_THEME_FILE,
    DEBUG_ERROR_DETECTING_SYSTEM_THEME,
    DEBUG_NAME,
    KEY_THEME,
    KEY_THEME_DARK,
    KEY_THEME_LIGHT,
    LIGHT_THEME_FILE,
    MS_VALUE_NAME,
    SETTINGS_APPLICATION,
    SETTINGS_ORGANIZATION,
    WINREG_THEME_KEY,
)
from PySide6.QtCore import QSettings
from PySide6.QtWidgets import QApplication


class ThemeHandler:
    THEME_MAP = {KEY_THEME_LIGHT: LIGHT_THEME_FILE, KEY_THEME_DARK: DARK_THEME_FILE}

    def __init__(self):
        self.settings = QSettings(SETTINGS_ORGANIZATION, SETTINGS_APPLICATION)
        self.app = QApplication([])
        self.current_stylesheet = ""
        self.load_theme_handler()

    def load_stylesheet_handler(self, filename):
        with open(filename, "r") as file:
            return file.read()

    def detect_system_theme_handler(self):
        try:
            key = winreg.OpenKey(winreg.HKEY_CURRENT_USER, WINREG_THEME_KEY)
            value_name = MS_VALUE_NAME
            value = winreg.QueryValueEx(key, value_name)[0]
            if value == 0:
                return KEY_THEME_DARK
            else:
                return KEY_THEME_LIGHT
        except Exception as e:
            print(DEBUG_ERROR_DETECTING_SYSTEM_THEME, e)
            return KEY_THEME_LIGHT

    def load_theme_handler(self):
        theme_state = self.settings.value(KEY_THEME)
        if theme_state not in (KEY_THEME_LIGHT, KEY_THEME_DARK):
            theme_state = self.detect_system_theme_handler()
        self.set_theme_handler(theme_state)

    def set_theme_handler(self, theme_state):
        if theme_state in (KEY_THEME_LIGHT, KEY_THEME_DARK):
            stylesheet = self.load_stylesheet_handler(self.THEME_MAP[theme_state])
            self.app.setStyleSheet(stylesheet)
            self.settings.setValue(KEY_THEME, theme_state)
        else:
            print(DEBUG_NAME + "Invalid theme state:", theme_state)
