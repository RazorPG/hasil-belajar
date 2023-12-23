
const o = 10;
let n = 15;
  let s ='';
for(let i = 0;i < o;i++) {
  s+='\n';
  for(let u = 0;u < o - i;u++) {
    s+=(i + u + 1);
    s+='\t';
  }
  s+='\n';
}
console.log(s);