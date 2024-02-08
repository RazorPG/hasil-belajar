var tanya = true;
while (tanya) {
  let player = prompt("pilih('gajah', 'semut', 'manusia'): ");

  var comp = Math.random();
  var hasil = " ";

  if (comp < 0.34) {
    comp = "gajah";
  } else if (comp >= 0.34 && comp < 0.67) {
    comp = "semut";
  } else {
    comp = "manusia;";
  }
  console.log(comp);
  // rules
  if (player == comp) {
    hasil = "SERI";
  } else if (player == "gajah") {
    hasil = comp == "manusia" ? "MENANG" : "KALAH";
  } else if (player == "manusia") {
    hasil = comp == "semut" ? "MENANG" : "KALAH";
  } else if (player == "semut") {
    hasil = comp == "gajah" ? "MENANG" : "KALAH";
  } else {
    alert("nilai yang anda inputkan salah!");
    continue;
  }
  alert(
    `kamu memilih : ${player} dan computer memilih : ${comp}\n hasilnya adalah kamu ${hasil} `
  );
  tanya = confirm("lagi?");
}
alert("terima kasih sudah bermain");
