"""This module contains configuration settings."""

from pathlib import Path

from dalmatia import Utils

# General
# =============================================================================
BASE_DIR: Path = Path(__file__).resolve().parent
# =============================================================================

# Icons
# =============================================================================
ICON_DIR: Path = Utils.forge.dir(BASE_DIR / "icons")
UI_ICON_FILE: Path = ICON_DIR / "illyrion.svg"
DARK_MODE_ICON_FILE: Path = ICON_DIR / "dark_mode_icon.svg"
LIGHT_MODE_ICON_FILE: Path = ICON_DIR / "light_mode_icon.svg"
# =============================================================================

# .so Lib files
# =============================================================================
LIB_DIR: Path = Utils.forge.dir(BASE_DIR / "build")
UTILS_LIB_FILE: Path = LIB_DIR / "test.so"
# =============================================================================

# Database
# =============================================================================
DATABASE_DIR: Path = Utils.forge.dir(BASE_DIR / "database")
DATABASE_FILE: Path = Utils.forge.file(DATABASE_DIR / "dardania.db")
# =============================================================================

# Preferences
# =============================================================================
PREFERENCES_DATA: dict[str, None | int | float | str | bytes] = {
    "usr_theme": "dark",
}
