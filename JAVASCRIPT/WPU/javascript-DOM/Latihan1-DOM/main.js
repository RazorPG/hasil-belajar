const changeColor = document.querySelector("#changeColor");
changeColor.addEventListener("click", function () {
  //   document.body.style.backgroundColor = "lightgreen";
  document.body.classList.toggle("biru-muda");
});

const randomColor = document.createElement("button");
const textRandomColor = document.createTextNode("Random Color");
randomColor.appendChild(textRandomColor);
randomColor.setAttribute("type", "button");

changeColor.after(randomColor);

randomColor.addEventListener("click", function () {
  const rgb = [];
  for (let i = 0; i < 3; i++) {
    rgb[i] = Math.round(Math.random() * 255 + 1);
  }
  //   const r = Math.round(Math.random() * 255 + 1);
  console.log(rgb);
  document.body.style.backgroundColor = `rgb(${rgb[0]},${rgb[1]},${rgb[2]})`;
});

const sliderRed = document.querySelector("input[name=sliderRed]");
const sliderGreen = document.querySelector("input[name=sliderGreen]");
const sliderBlue = document.querySelector("input[name=sliderBlue]");

function rgb() {
  sliderRed.value;
  sliderGreen.value;
  sliderBlue.value;
  document.body.style.backgroundColor = `rgb(${sliderRed.value},${sliderGreen.value},${sliderBlue.value}`;
}

sliderRed.addEventListener("input", rgb);
sliderGreen.addEventListener("input", rgb);
sliderBlue.addEventListener("input", rgb);

// event mousemove
const modeCursor = document.querySelector("input[type=checkbox]");
modeCursor.addEventListener("click", function () {
  modeCursor.classList.toggle("on");
  if (modeCursor.classList.contains("on")) {
    document.body.addEventListener("mousemove", handleMouseMove);
  } else {
    document.body.removeEventListener("mousemove", handleMouseMove);
  }
});

function handleMouseMove(event) {
  // posisi mouse
  //console.log(event.clientX);
  // ukuran brawser
  // console.log(window.innerWidth);
  const xPos = Math.round((event.clientX / window.innerWidth) * 255);
  const yPos = Math.round((event.clientY / window.innerHeight) * 255);
  document.body.style.backgroundColor = `rgb(${xPos},${yPos},0)`;
}

const colorPicker = document.querySelector("input[type=color]");
colorPicker.addEventListener("change", function () {
  document.body.style.backgroundColor = colorPicker.value;
});
