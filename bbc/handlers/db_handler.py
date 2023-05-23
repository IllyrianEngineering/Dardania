import os
import sqlite3

from constants import DEBUG_NAME
from PySide6.QtCore import QObject, Signal, Slot


class SettingsDatabaseHandler(QObject):
    save_changes_signal = Signal()
    discard_changes_signal = Signal()

    def __init__(self, database_path):
        """
        Initialize the SettingsDatabaseHandler.
        """
        super().__init__()
        self.database_path = database_path
        self.create_or_connect_db()
        self.create_db_table()
        self.save_changes_signal.connect(self.save_db_changes_slot)
        self.discard_changes_signal.connect(self.discard_db_changes_slot)

    def create_or_connect_db(self):
        """
        Create or connect to the database.
        """
        if not os.path.exists(self.database_path):
            self.conn = sqlite3.connect(self.database_path)
            print(DEBUG_NAME + f"New database created at: {self.database_path}")
        else:
            self.conn = sqlite3.connect(self.database_path)
            print(
                DEBUG_NAME + f"Connected to existing database at: {self.database_path}"
            )

    def create_db_table(self):
        """
        Create the database table.
        """
        query = """
            CREATE TABLE IF NOT EXISTS settings (
                
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                parameter TEXT UNIQUE,
                value TEXT
            )
        """
        self.conn.execute(query)

    def insert_db_setting(self, parameter, value):
        """
        Insert a new setting into the database.
        """
        query = """
            INSERT OR REPLACE INTO settings (parameter, value) VALUES (?, ?)
        """
        self.conn.execute(query, (parameter, value))
        self.save_changes_signal.emit()

    def delete_db_setting(self, parameter):
        """
        Delete a setting from the database.
        """
        query = """
            DELETE FROM settings WHERE parameter = ?
        """
        self.conn.execute(query, (parameter,))
        print(DEBUG_NAME + f"Discarded changes for parameter: {parameter}")

    def get_db_settings(self):
        """
        Get all settings from the database.
        """
        query = "SELECT parameter, value FROM settings"
        cursor = self.conn.execute(query)
        settings = cursor.fetchall()
        return settings

    def save_db_changes(self):
        """
        Save all changes to the database.
        """
        self.conn.commit()
        print(DEBUG_NAME + "Changes saved to the database.")

    def close(self):
        """
        Close the database connection.
        """
        self.conn.close()

    @Slot()
    def save_db_changes_slot(self):
        """
        Save all changes to the database.
        """
        self.save_db_changes()
        # Additional code for handling the save action, if needed

    @Slot()
    def discard_db_changes_slot(self):
        """
        Discard all changes to the database.
        """
        parameter_to_discard = (
            "example_parameter"  # Provide the parameter you want to discard
        )
        self.delete_db_setting(parameter_to_discard)
        print(DEBUG_NAME + f"Discarded changes for parameter: {parameter_to_discard}")
        # Additional code for handling the discard action, if needed
