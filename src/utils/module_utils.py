from typing import Optional, Tuple

from PySide6.QtWidgets import QSizePolicy, QStackedWidget, QWidget


class ModuleUtils(QStackedWidget, QWidget):
    """A class that contains core methods."""

    def margins(
        self, margins: Optional[Tuple[int, int, int, int]] = None
    ) -> Tuple[int, int, int, int]:
        """
        Initialize the margins with a specified margins.

        Args:
            margins (Tuple[int, int, int, int]): Margins for a layout.
                Default is parent's margins.

        Returns:
            Tuple[int, int, int, int]: A tuple of margins.
        """
        if (
            margins is not None
            and all(isinstance(i, int) for i in margins)
            and len(margins) == 4
        ):
            return margins

        pmargins = self.contentsMargins()
        return (pmargins.left(), pmargins.top(), pmargins.right(), pmargins.bottom())

    def size_policy(
        self, policy: Optional[Tuple[QSizePolicy.Policy, QSizePolicy.Policy]] = None
    ) -> Tuple[QSizePolicy.Policy, QSizePolicy.Policy]:
        """
        Initialize the size policy with a specified policy.

        Args:
            policy (Tuple[QSizePolicy.Policy, QSizePolicy.Policy]): Policy for a widget.
                Default is parent's policy.

        Returns:
            Tuple[QSizePolicy.Policy, QSizePolicy.Policy]: A tuple of policy.
        """
        if (
            policy is not None
            and all(isinstance(i, QSizePolicy.Policy) for i in policy)
            and len(policy) == 2
        ):
            return policy

        ppolicy = self.sizePolicy()
        return (ppolicy.horizontalPolicy(), ppolicy.verticalPolicy())

    def switch_modules(self) -> None:
        """Switches the current module in a QStackedWidget."""
        self.setCurrentIndex((self.currentIndex() + 1) % self.count())
