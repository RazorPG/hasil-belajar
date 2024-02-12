function tambah(a, b) {
  return a + b;
}

function sumVolumeKubus(a = 10, b = 20) {
  return a * a * a + b * b * b;
}

function pengurangan() {
  var hasil = 1000;
  for (let i = 0; i < arguments.length; i++) {
    hasil -= arguments[i];
  }
  return hasil;
}

tambah(12, 5);
tambah(100, 29);

console.log(sumVolumeKubus());
console.log(sumVolumeKubus(13));
console.log(sumVolumeKubus(12, 5));
console.log(sumVolumeKubus(tambah(1, 2), pengurangan(12, 100, 200, 300, 389)));

var tes = tambah(13, 10);
console.log(tes);

//let a = parseInt(prompt("masukkan nilai 1: "));
//let b = parseInt(prompt("masukkan nilai 2: "));

//alert(tambah(a, b));

let hasil = tambah(14, 5, 20, "rafid", false);
console.log(hasil);

var argument = pengurangan(100, 20, 5, 13);
console.log(argument);

// refactoring
// sebuah proses mengubah kode agar menjadi lebih baik tanpa mengubah fungsionalitasnya

// variabel scope
var a = 1;
function baka(a) {
  console.log(a);
}
baka(2);

//rekursif fungsi yang memanggil dirinya sendiri
// function coding(){
//     return "cowok" + coding();
// }
// coding();

function tampilkan(n) {
  console.log(n);
  if (n > 0) {
    tampilkan(n - 1);
  }
}

tampilkan(10);

function faktorial(n) {
  if (n === 0) {
    return 1;
  }
  return n * faktorial(n - 1);
}

console.log(faktorial(6));

// function declaration && function expression

// expression
// tidak bisa mendeklarasi fungsi diatas fungsi yang di buat dengan expression
var nama = function (nama) {
  console.log(`hallo ${nama}`);
};
console.log(nama("rafid"));

// declaration
// boleh deklarasi fungsi di mana saja
console.log(namo("rafid"));
function namo(nama) {
  console.log(`hallo ${nama}`);
}
