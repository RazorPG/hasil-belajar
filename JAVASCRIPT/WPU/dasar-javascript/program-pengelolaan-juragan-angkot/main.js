let penumpang = [];
let tambahPenumpang = function (namaPenumpang, penumpang) {
  if (penumpang.length == 0) {
    penumpang.push(namaPenumpang);
    return penumpang;
  } else {
    for (let i = 0; i < penumpang.length; i++) {
      if (penumpang[i] == undefined) {
        penumpang[i] = namaPenumpang;
        return penumpang;
      } else if (penumpang[i] == namaPenumpang) {
        console.log("penumpang dengan nama " + namaPenumpang + " sudah ada");
        return penumpang;
      } else if (i == penumpang.length - 1) {
        penumpang.push(namaPenumpang);
        return penumpang;
      }
    }
  }
};

console.log(tambahPenumpang("razor", penumpang));
console.log(tambahPenumpang("razor", penumpang));
console.log(tambahPenumpang("zoro", penumpang));
console.log(tambahPenumpang("ubi", penumpang));
// console.log(tambahPenumpang("dazan", penumpang));
// console.log(tambahPenumpang("jerry", penumpang));

let hapusPenumpang = function (namaPenumpang, penumpang) {
  if (penumpang.length == 0) {
    return penumpang;
  } else {
    for (let i = 0; i < penumpang.length; i++) {
      if (penumpang[i] == namaPenumpang) {
        penumpang[i] = undefined;
        return penumpang;
      } else if (i == penumpang.length - 1) {
        console.log(namaPenumpang + " tidak ada di dalam angkot");
        return penumpang;
      }
    }
  }
};

console.log(hapusPenumpang("razor", penumpang));
console.log(hapusPenumpang("zoro", penumpang));
console.log(hapusPenumpang("ubi", penumpang));
console.log(hapusPenumpang("rawr", penumpang));
console.log(tambahPenumpang("razor", penumpang));
