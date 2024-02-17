let getOptionComputer = () => {
  var comp = Math.round(Math.random() * 3 + 1);
  if (comp == 1) return "ROCK";
  if (comp == 2) return "SCISSOR";
  return "PAPER";
};

const getResult = (comp, player) => {
  if (player == comp) return "DRAW";
  if (player == "ROCK") return comp == "SCISSOR" ? "WIN" : "LOSE";
  if (player == "SCISSOR") return comp == "PAPER" ? "WIN" : "LOSE";
  if (player == "PAPER") return comp == "ROCK" ? "WIN" : "LOSE";
};

var tanya = true;
while (tanya) {
  let player = prompt("OPTION->('ROCK', 'SCISSOR', 'PAPER'): ").toUpperCase();

  console.log(comp);
  // rules

  alert(`YOU ARE : ${player} AND COMPUTER IS : ${comp}\n RESULT-> ${hasil} `);
  tanya = confirm("AGAIN?");
}
alert("THANK YOU FOR PLAYING");
