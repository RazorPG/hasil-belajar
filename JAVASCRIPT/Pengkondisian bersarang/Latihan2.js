var s ='';
let n = 15;
for(i = 5;i >= 0;i--) {
  s+='\n';
  for(u = 0;u < i;u++) {
    s+=n--;
    s+='\t';
  }
  s+='\n';
}
console.log(s);
var username = 'ZihxSiwwe';
var password = 'KataSandiRahasia125';

if (username.length >= 8) {
  if (password.length >= 20) {
    console.log('Jumlah atau panjang karakter username dan password memenuhi kriteria...');
  } else {
    console.log('Jumlah karakter untuk password minimal 20 karakter!');
  }
} else {
  console.log('Jumlah karakter untuk username minimal 8 karakter!');
}