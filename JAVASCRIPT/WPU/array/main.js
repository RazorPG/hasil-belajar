var hari = ["senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"];

console.log(hari[1]);

var myArr3 = ["text", 2, false, hari, [4, 5, 6]];

console.log(myArr3[3][2]);

// manipulasi array

// 1. memambah isi array

var arr = ["a", 2, true];
arr[3] = "rafid";
console.log(arr);

// 2. menghapus isi array

var cuy = ["razor", "ganu", "asep"];
cuy[1] = undefined;
console.log(cuy);

// menampilkan isi array
var kel = ["rafid", "gilang", "fauzan"];

for (var i = 0; i < kel.length; i++) {
  console.log(`mahasiswa ke-${i + 1}: ${kel[i]}`);
}

// method pada array
// 1. join

var coeg = ["gan", "an", "wo"];
console.log(coeg.join("-"));

// 2 . push & pop

coeg.push("brando");
console.log(coeg);
coeg.pop();
console.log(coeg);

// 3. ushift & shift
coeg.unshift("gelo");
console.log(coeg);
coeg.shift();
console.log(coeg);

// 4. splice
// splice(indexAwal,mauDihapusBerapa, ElementBaru1, ElementBaru2, ...)

coeg.splice(1, 1, "dege");
console.log(coeg);

// 5. slice
var apalah = coeg.slice(1, 2);
console.log(apalah);

// foreach
var angka = [1, 2, 3, 4, 5, 6, 7, 8, 9];
angka.forEach(function (e) {
  console.log(e);
});

// map
var angka1 = [32, 1, 23, 98, 45];
angka1.sort();
console.log(angka1);
