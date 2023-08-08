class RegistrationPopupManager {
  constructor(clientId) {
    this.clientId = clientId;

    this.githubOAuthButton = document.getElementById("githubOAuthButton");
    this.loginLink = document.getElementById("loginLink");
    this.loginPopup = document.getElementById("loginPopup");
    this.closeLoginPopup = document.getElementById("closeLoginPopup");
    this.carousel = document.querySelector(".carousel");
    this.carouselSlides = document.querySelectorAll(".slide");

    this.setupEventListeners();
  }

  setupEventListeners() {
    this.githubOAuthButton.addEventListener("click", this.performGitHubOAuth.bind(this));
    this.loginLink.addEventListener("click", this.showLoginPopup.bind(this));
    this.closeLoginPopup.addEventListener("click", this.closeLoginPopupHandler.bind(this));
  }

  showPopup(popup) {
    popup.style.display = "flex";
    const exitButton = document.createElement("button");
    exitButton.className = "popup-exit-button overlay-exit-button";
    exitButton.innerText = "X";
    popup.appendChild(exitButton);

    exitButton.addEventListener("click", () => {
      this.closePopup(popup);
    });
  }

  closePopup(popup) {
    popup.style.display = "none";
    const exitButton = popup.querySelector(".overlay-exit-button");
    if (exitButton) {
      exitButton.remove();
    }
  }

  pauseCarousel() {
    this.carousel.removeAttribute("data-carousel");
    this.carouselSlides.forEach((slide) => {
      slide.style.animationPlayState = "paused";
    });
  }

  resumeCarousel() {
    this.carousel.setAttribute("data-carousel", "");
    this.carouselSlides.forEach((slide) => {
      slide.style.animationPlayState = "running";
    });
  }

  performGitHubOAuth() {
    const redirectUri = "https://illyrius.me/AutoFrameCAD/auth/github/callback";
    const oauthUrl = `https://github.com/login/oauth/authorize?client_id=${this.clientId}&redirect_uri=${redirectUri}`;
    window.location.href = oauthUrl;
  }

  closeLoginPopupHandler() {
    this.closePopup(this.loginPopup);
    this.resumeCarousel();
  }
}

const clientId = "Iv1.c014788a30bf9f06";
new RegistrationPopupManager(clientId);
