// let close = document.querySelector(".close");
// let card = document.querySelector(".card");
// close.addEventListener("click", function () {
//   card.remove();
//   // card.style.display = "none";
// });

// DOM traversal

// const close = document.querySelectorAll(".close");
// for (let i = 0; i < close.length; i++) {
//   close[i].addEventListener("click", function (e) {
//     // close[i].parentElement.style.display = "none";
//     e.target.parentElement.style.display = "none";
//     // console.log(e.target);
//   });
// }

// close.forEach(function (el) {
//   el.addEventListener("click", function (e) {
//     e.target.parentElement.style.display = "none";
//     e.preventDefault();
//     e.stopPropagation();
//   });
// });

// const cards = document.querySelectorAll(".card");
// cards.forEach(function (card) {
//   card.addEventListener("click", function (e) {
//     alert("ok");
//   });
// });

const container = document.querySelector(".container");

container.addEventListener("click", function (e) {
  if (e.target.className == "close") {
    e.target.parentElement.style.display = "none";
  }
});

// close.forEach(function (el) {
//   el.addEventListener("click", function (e) {
//     if (e.target.className == "close") {
//       e.target.parentElement.style.display = none;
//       e.preventDefault();
//     }
//   });
// });
