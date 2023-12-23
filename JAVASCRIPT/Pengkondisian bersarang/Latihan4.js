const o = 5;

for(let i = 0;i < o;i++) {
  let n = i + 1;
  let s = n + " ";
  for(let j = 1;j <= i;j++) {
    n += o - j;
    s += n++ + " ";
  }
  console.log(s);
}

var angkaKeSatu = 50;
var angkaKeDua = 15;
console.log(angkaKeSatu - angkaKeDua);

//Array
var onePiece = ['luffy','zoro','nami','sanji','usoop','chopper','nico robin','franky','brook','jinbei'];

for(i = 0;i < onePiece.length;i++) {
  console.log(onePiece[i]);
}
var sue = document.getElementById('')
let murid = {
  nama: 'Muhammad Saleh Solahudin',
  jurusan: 'Rekayasa Perangkat Lunak',
  kelas: 'XII',
  sosmed: {
    facebook: 'https://fb.com/ZihxS',
    instagram: 'https://instagram.com/msalehsolahudin'
  },
  riwayatPendidikan: {
    sd: 'SDN Suka Maju 1',
    smp: 'SMPN Maju Terus 2'
  },
  angkatan: 13
};

let {nama, jurusan, kelas, sosmed: {facebook, instagram}, riwayatPendidikan: {sd, smp}, angkatan}
 = murid;

console.log(`saya ${nama} kelas ${kelas} jurusan ${jurusan}.`);
console.log(`facebook ${nama}: (${facebook}).`);
console.log(`instagram ${nama}: (${instagram}).`);
console.log(`${nama} sekolah dasarnya di: ${sd}.`);
console.log(`${nama} sekolah menengah pertamanya di: ${smp}.`);
console.log(`${nama} angkatan ke ${angkatan}.`);