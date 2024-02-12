// membuat object
// object literal

var Mahasiswa = {
  nama: "Rafid Hilmi",
  jurusan: "Teknik Informatika",
  NIM: 23346016,
  hobi: ["nonton windah", "anime", "ngoding"],
  sapa: function () {
    return `Hi nama saya ${this.nama} jurusan saya adalah ${this.jurusan} dengan NIM ${this.NIM} dan hobi saya adalah ${this.hobi}`;
  },
};

console.log(Mahasiswa.sapa());

var siswa = {
  Nama: "Budi",
  NilaiUjian: [100, 100, 100],
  Average: function () {
    var totalNilai = 0;
    for (var i = 0; i < this.NilaiUjian.length; i++) {
      totalNilai += this.NilaiUjian[i];
    }
    return totalNilai / this.NilaiUjian.length;
  },
};

console.log(siswa.Average());

// function declarasi

function buatObjectMahasiswa(nama, jurusan, NIM, hobi) {
  var mhs = {};
  mhs.nama = nama;
  mhs.jurusan = jurusan;
  mhs.NIM = NIM;
  mhs.hobi = hobi;
  return mhs;
}

var mhs2 = buatObjectMahasiswa(
  "gilang ramadhan",
  "Teknik Informatika",
  23346016,
  ["menggambar", "nonton film"]
);

console.log(mhs2.NIM);

// constructor

function Siswa(nama, nim, email, jurusan) {
  this.nama = nama;
  this.nim = nim;
  this.email = email;
  this.jurusan = jurusan;
}

var sw = new Siswa("luffy", 1242142234, "kaizokoni@gmail.com", "bajak laut");

console.log(sw);

// this
console.log(this);

// function declaration
function halo() {
  console.log(this);
  console.log("hello");
}
// literal
var obj = { a: 10, nama: "rafid" };

// this mengembalikan object yang baru dibuat
