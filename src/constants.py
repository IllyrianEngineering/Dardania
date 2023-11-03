import os

# Pip
# ====================================================================================================
PIP_PACKAGES: list[str] = [
    "pyside6",
    "pyqtdarktheme==2.1.0",
    "setuptools",
    "types-setuptools",
    "mypy",
    "StenLib",
]
# ====================================================================================================

# General
# ====================================================================================================
ICONS_FOLDER_PATH: str = os.path.join("src/interfaces/icons/")
# ====================================================================================================

# UI
# ====================================================================================================
UI_ICON_PATH: str = os.path.join(ICONS_FOLDER_PATH, "ui_icon.png")
# ====================================================================================================
