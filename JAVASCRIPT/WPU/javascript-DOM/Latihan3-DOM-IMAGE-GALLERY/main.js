// const thumb = document.querySelectorAll(".thumb");
// const jumbo = document.querySelector(".jumbo");

// thumb.forEach(function (el) {
//     el.addEventListener("click", function (e) {
//       const clickedTarget = e.target.src;
//       jumbo.src = clickedTarget;
//     });
//   });
const thumb = document.querySelectorAll(".thumb");

thumb.forEach(function (el) {
  el.addEventListener("click", function (e) {
    e.target.parentElement.parentElement.querySelector(".jumbo").src = el.src;
    e.target.parentElement.parentElement
      .querySelector(".jumbo")
      .classList.add("fade");

    thumb.forEach(function (thumbEl) {
      thumbEl.classList.remove("active");
    });
    el.classList.add("active");

    setTimeout(function () {
      e.target.parentElement.parentElement
        .querySelector(".jumbo")
        .classList.remove("fade");
    }, 500);
  });
});
