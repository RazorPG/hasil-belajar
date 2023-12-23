var s = '';
let n = 1;
for(i = 1;i <= 5;i++) {
  s+='\n';
  for(u = 1;u <= i;u++) {
  s+=n++;
  s+='\t';
  }
  s+='\n';
}
console.log(s);