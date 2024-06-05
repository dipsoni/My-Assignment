// Select the toggle button and navbar links
const toggleButton = document.querySelector('.toggle-button');
const navbarLinks = document.querySelector('.navbar-links');

// Add an event listener to the toggle button to handle the click event
toggleButton.addEventListener('click', () => {
    // Toggle the 'active' class on the navbar links
    navbarLinks.classList.toggle('active');
});
