$(document).ready(function () {
  $("#contactForm").submit(function (event) {
    event.preventDefault();

    $("#result").text("Form Submitted Successfully!");
  });
});
