var noAngkot = 1;
var angkotBeroperasi = 6;
var jmlAngkot = 10;

for(noAngkot ; noAngkot <= jmlAngkot; noAngkot++) {
  if(noAngkot <= angkotBeroperasi && noAngkot !== 4) {
    console.log("angkot No. " + noAngkot + " beroperasi dengan baik.");
  } else if (noAngkot == 4 || noAngkot == 8 || noAngkot == 10) {
  console.log("angkot No. " + noAngkot + " sedang lembur.");
  } else {
    console.log("angkot No. " + noAngkot + " sedang tidak beroperasi.");
  }
}
