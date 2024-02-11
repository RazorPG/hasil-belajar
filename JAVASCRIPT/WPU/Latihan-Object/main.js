let Angkot = function (supir, trayek, penumpang, kas) {
  this.supir = supir;
  this.kas = kas;
  this.trayek = trayek;
  this.penumpang = penumpang;

  this.penumpangNaik = function (namaPenumpang) {
    if (penumpang.length == 0) {
      penumpang.push(namaPenumpang);
      return penumpang;
    } else {
      for (let i = 0; i < penumpang.length; i++) {
        if (this.penumpang[i] == undefined) {
          this.penumpang[i] = namaPenumpang;
          return this.penumpang;
        } else if (this.penumpang[i] == namaPenumpang) {
          console.log("penumpang dengan nama " + namaPenumpang + " sudah ada");
          return this.penumpang;
        } else if (i == penumpang.length - 1) {
          this.penumpang.push(namaPenumpang);
          return this.penumpang;
        }
      }
    }
  };

  this.penumpangTurun = function (namaPenumpang, bayar) {
    if (this.penumpang.length === 0) {
      console.log("angkot masih kosong");
      return 0;
    } else {
      for (let i = 0; i < this.penumpang.length; i++) {
        if (this.penumpang[i] == namaPenumpang) {
          this.penumpang[i] = undefined;
          this.kas += bayar;
          return this.penumpang;
        }
      }
    }
  };
};

var angkot1 = new Angkot("jamal", ["solok", "padang"], [], 0);
var angkot2 = new Angkot("simanjuntak", ["sawahlunto", "bukittinggi"], [], 0);

console.log(angkot1.penumpangTurun("ahmad", 10000));
console.log(angkot1.penumpangNaik("zidan"));
console.log(angkot1.penumpangNaik("zidan"));
console.log(angkot1.penumpangNaik("razor"));
console.log(angkot1.penumpangTurun("zidan", 12000));
console.log(angkot1.penumpangTurun("razor", 12000));
console.log(angkot1.kas);
