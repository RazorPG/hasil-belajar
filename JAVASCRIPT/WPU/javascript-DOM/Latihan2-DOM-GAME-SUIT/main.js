let getOptionComputer = () => {
  var comp = Math.round(Math.random() * 3 + 1);
  if (comp == 1) return "rock";
  if (comp == 2) return "scissor";
  return "paper";
};

const getResult = (comp, player) => {
  if (player == comp) return "DRAW";
  if (player == "rock") return comp == "scissor" ? "WIN" : "LOSE";
  if (player == "scissor") return comp == "paper" ? "WIN" : "LOSE";
  if (player == "paper") return comp == "rock" ? "WIN" : "LOSE";
};

function randomImg() {
  const imgComputer = document.querySelector(".img-computer");
  const img = ["rock", "scissor", "paper"];
  let i = 0;
  const startTime = new Date().getTime();
  setInterval(function () {
    if (new Date().getTime() - startTime > 1000) {
      clearInterval;
      return;
    }
    imgComputer.setAttribute("src", `img/${img[i++]}.png`);
    if (i == img.length) i = 0;
  }, 100);
}

const options = document.querySelectorAll("li img");
options.forEach(function (option) {
  option.addEventListener("click", function () {
    const optionComputer = getOptionComputer();
    const optionPlayer = option.className;
    const result = getResult(optionComputer, optionPlayer);
    randomImg();
    const imgPlayer = document.querySelector(".img-player");
    imgPlayer.setAttribute("src", `img/${optionPlayer}.png`);
    setTimeout(function () {
      const imgComputer = document.querySelector(".img-computer");
      imgComputer.setAttribute("src", `img/${optionComputer}.png`);
      const info = document.querySelector(".info");
      info.innerHTML = result;
    }, 1000);
  });
});

// const oRock = document.querySelector(".rock");
// const oScissor = document.querySelector(".scissor");
// const oPaper = document.querySelector(".paper");

// oRock.addEventListener("click", function () {
//   logicGame(this);
// });
// oScissor.addEventListener("click", function () {
//   logicGame(this);
// });
// oPaper.addEventListener("click", function () {
//   logicGame(this);
// });

// function logicGame(option) {
//   const optionComputer = getOptionComputer();
//   const optionPlayer = option.className;
//   const result = getResult(optionComputer, optionPlayer);
//   const imgComputer = document.querySelector(".img-computer");
//   imgComputer.setAttribute("src", `img/${optionComputer}.png`);
//   const imgPlayer = document.querySelector(".img-player");
//   imgPlayer.setAttribute("src", `img/${optionPlayer}.png`);
//   const info = document.querySelector(".info");
//   info.innerHTML = result;
// }
