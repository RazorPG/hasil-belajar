let tanya = true;
let hearth = 3;
let com;

function randomValue() {
  com = Math.random();
  if (com <= 0.1) {
    return (com = 1);
  } else if (com > 0.1 && com <= 0.2) {
    return (com = 2);
  } else if (com > 0.2 && com <= 0.3) {
    return (com = 3);
  } else if (com > 0.3 && com <= 0.4) {
    return (com = 4);
  } else if (com > 0.4 && com <= 0.5) {
    return (com = 5);
  } else if (com > 0.5 && com <= 0.6) {
    return (com = 6);
  } else if (com > 0.6 && com <= 0.7) {
    return (com = 7);
  } else if (com > 0.7 && com <= 0.8) {
    return (com = 8);
  } else if (com > 0.8 && com <= 0.9) {
    return (com = 9);
  } else {
    return (com = 10);
  }
}

randomValue();
while (tanya) {
  let player = prompt("tebak angka 1-10: ");
  let result = " ";
  console.log(`nilai angka acak dari random: ${com}`);
  console.log(`nilai angka setelah di logikakan: ${com}`);
  // rules
  if (player == com) {
    result = alert("JAWABAN ANDA BENAR");
  } else if (player > com && player - com > 1) {
    hearth--;
    result = alert(`ANGKA TERLALU BESAR \nHEARTH:${hearth}`);
  } else if (player < com && com - player > 1) {
    hearth--;
    result = alert(`ANGKA TERLALU KECIL \nHEARTH:${hearth}`);
  } else if (player - com == 1 || com - player == 1) {
    hearth--;
    result = alert(`SEDIKIT LAGI TEBAKAN ANDA BENAR \nHEARTH:${hearth}`);
  } else if (player == 0 || player > 10) {
    alert(`NILAI YANG ANDA INPUTKAN SALAH \nHEARTH:${hearth}`);
    continue;
  }

  if (hearth == 0 || player == com) {
    alert(`nilai angka tebakannya adalah ${com}`);
    tanya = confirm("lagi?");
    hearth = 3;
    randomValue();
  }
}
alert("terima kasih sudah bermain");
