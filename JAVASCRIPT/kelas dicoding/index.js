let myScore = 50;
let ComputerScore = 90;

if (myScore > ComputerScore) {
    console.log("selamat , anda menang");
} else {
    console.log("anda kalah");
}

const score = 83;

if (score > 89) {
    console.log("anda mendapatkan peringkat A");
} else if (score > 79) {
    console.log("anda mendapatkan peringkat B");
} else {
    console.log("anda mendapatkan peringkat C");
}

let totalBelanja = 125000;
let jenisMember = "bronze";

if (totalBelanja > 100000 || jenisMember == "silver"){
    console.log("selamat, anda mendapatkan diskon sebesar 10%");
} else {
    console.log("Maaf, saat ini Anda belum mendapatkan diskon");
}

let r = 0;

for(r; r < 99; r++){
    console.log("hello world");
}
console.log("sudah berada diluar perulangan");

let counter = 0 ;

while(counter < 5) {
    console.log("hello world");
    counter++;
}