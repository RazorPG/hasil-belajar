var noAngkot = 1;
var angkotBeroperasi = 6;
var jmlAngkot = 10;

for(noAngkot ; noAngkot <= jmlAngkot; noAngkot++) {
  if(noAngkot <= angkotBeroperasi) {
    console.log("angkot No. " + noAngkot + " beroperasi dengan baik.")
  } else {
  console.log("angkot No. " + noAngkot + " sedang tidak beroperasi.");
  }
}
