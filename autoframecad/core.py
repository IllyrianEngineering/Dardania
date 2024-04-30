"""This module contains the core functionality."""

from collections.abc import Callable
from tkinter import Tk as tkTk
from typing import Any

import sv_ttk

from autoframecad.database import Database, PreferencesTable


class CoreUI(tkTk):
    """A class used to represent a extension of the TKinter ui module."""

    @staticmethod
    def _theme(db: Database, table: PreferencesTable, theme: str) -> None:
        """Set the theme of the UI.

        Args:
            db: The database to use.
            table: The table to use.
            theme: The theme to use.
        """
        sv_ttk.set_theme(theme)
        db.add_data(table, [{"key": "usr_theme", "value": f"{theme}"}])

    theme = _theme

    @staticmethod
    def _toggle_theme() -> None:
        """Toggle the theme of the UI."""
        sv_ttk.toggle_theme()

    toggle_theme = _toggle_theme

    def _visible(self: "CoreUI", state: bool | int) -> None:
        """Set the visibility of the UI.

        Args:
            state: The state to use.
        """
        if state:
            self.deiconify()
        else:
            self.withdraw()

    visible = _visible

    def _events(
        self: "CoreUI",
        events: dict[str, Callable[[Any], None]],
    ) -> None:
        """Set the events of the UI.

        Args:
            events: The events to use.
        """
        for key, value in events.items():
            self.bind(key, value)

    events = _events