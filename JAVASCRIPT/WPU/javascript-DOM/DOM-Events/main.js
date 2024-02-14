// const p3 = document.querySelector("#a p:nth-child(4)");

// let changeColor = function (element) {
//   element.style.backgroundColor = "lightblue";
// };

// const p2 = document.querySelector(".p2");
// p2.onclick = function () {
//   changeColor(p2);
// };

// const p4 = document.querySelector("#b p");
// p4.addEventListener("click", function () {
//   const sectionB = document.querySelector("#b ul");
//   const itemNew = document.createElement("li");
//   const liText = document.createTextNode("item 4");
//   itemNew.appendChild(liText);
//   sectionB.appendChild(itemNew);
// });

const p3 = document.querySelector(".p3");
// p3.onclick = function () {
//   p3.style.backgroundColor = "lightblue";
// };
// p3.onclick = function () {
//   p3.style.color = "salmon";
// };

p3.addEventListener("mouseenter", function () {
  p3.style.backgroundColor = "lightblue";
  p3.style.color = "#f3f";
});
p3.addEventListener("mouseleave", function () {
  p3.style.backgroundColor = "white";
});
