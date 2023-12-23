// var again = true
// while(again) {
// var again = prompt('masukkan nama') 
// var kelas = prompt('masukkan kelas')
// var age = prompt('masukkan umur')
// alert("halo nama saya " + again);
// alert('saya kelas ' + kelas);
// alert('umur saya ' + age);
// }
// alert('thank you');


// alert('mulai');
// for(var i = 0; i < 5; i++) {
//   alert('hello world!');
// }
// alert('selesai');


// var angka = prompt('masukkan angka :');
//   alert('angka yang kamu masukkan adalah : ' + angka);
// if(angka % 2 === 0) {
//   alert(angka + ' adalah bilangan genap')
// } else  {
//   alert(angka + ' adalah bilangan ganjil')
// }


//pengulangan
// while(true) {
//   console.log("hello rafid");
// }


//for 
// for(var permulaan = 1; permulaan <= 10; permulaan++) {
//   console.log("hello world! " + permulaan +"x");
// }

// var angka = prompt("masukkan angka:");
// if(angka % 2 === 0) {
//   alert(angka + ' termasuk bilangan genap');
// } else if(angka % 2 === 1) {
//   alert(angka + ' termasuk bilangan ganjil');
// } else {
//   alert("yang anda masukkan bukan angka!")
// }


//var angka = parseInt(prompt("masukkan angka :"));

// if(angka === 1) {
//   alert("anda memasukkan angka 1")
// }
// else if(angka === 2) {
//   alert("anda memasukkan angka 2")
// }
// else if(angka === 3) {
//   alert("anda memasukkan angka 3")
// }
// else {
//   alert("angka yang anda masukkan salah!")
// }

//switch
// var angka = parseInt(prompt("masukkan angka :"));

// switch( angka ) {
//   case 1 :
//     alert('anda memasukkan angka 1');
//     break;
//   case 2 :
//     alert('anda memasukkan angka 2');
//     break;
//   case 3 :
//     alert('anda memasukkan angka 3');
//     break;
//     default :
//     alert("angka yang anda masukkan salah");
// }

// var item = prompt("masukkan nama makanan / minuman : \n (cth: nasi, daging, susu, hamburger, softdrink)");

// switch( item ) {
//   case 'nasi' :
//   case 'daging' :
//   case 'susu' :
//     alert("makanan / minuman SEHAT!");
//     break;
//   case 'hamburger' :
//   case 'softdrink' :
//     alert("makanan / minuman TIDAK SEHAT!");
//     break;
//     default :
//     alert('anda memasukkan makanan / minuman yang tidak ada di menu!');
//     break;
// }


// let item = prompt("masukkan nama makanan / minuman : \n (cth: nasi, daging, susu, hamburger, softdrink)");

//   if(item === 'nasi' || item === 'daging' || item === 'susu') {
//     alert('makanan / minuman SEHAT!');
//   } else if(item === 'hamburger' || item === 'softdrink') {
//     alert('makanan / minuman TIDAK SEHAT!');
//   } else {
//     alert('anda memasukkan makanan / minuman yang tidak ada di menu!');
//   }

//segitiga cermin ke bawah
// var s = '';
// for(var i = 0;i < 10; i++) {
//   for(var u = 0; u < i; u++) {
//     s +='\t*';
//   }
//   s += ' \n';
// }
// for(var i = 10;i > 0; i--) {
//   for(var u = 0; u < i; u++) {
//     s +='\t*';
//   }
//   s += ' \n';
// }
// console.log(s);

// segitiga1
var s = '';

for(i = 0;i < 10; i++) { 
  s += '\n';
  for(j = 0;j <= i; j++) { 
  s += '\t*';
  }
  s += "\n";
}
console.log(s);

// segitiga2
var r = "";

for(s = 10;s > 0; s--) {
  r += '\n';
  for(u = 0;u < s; u++) {
    r+="\t*";
  }
  r+="\n";
}
console.log(r);

// segitiga3
  let rawr = '';
  let jml = 10;
  
  for(let w = 1;w <= jml;w++) {
    rawr += '\n';
    for(let v = jml - 1;v >= w;v--) {
      rawr += '\t';
    }
    for(let x = 1;x <= w; x++) {
      rawr += '*';
      rawr += '\t';
    }
    rawr += '\n';
  }
console.log(rawr);

//segitiga4
let f = '';
let rt = 1;

for(let d = 9;d >= 0;d--) {
  f += '\n';
  for(let e = d + rt;e < 10;e++) {
    f += '\t';
  }
  for(let g = 0;g <= d;g++) {
    f += '*';
    f += '\t';
  }
  f += '\n';
}
console.log(f);

//segitiga5
function segitiga5(baris) {
  let lol = "";
  
  for(let m = 1;m <= baris;m++) {
    lol += '\n';
    for(let n = baris - 1; n >= m;n--) {
      lol += '\t';
    }
    for(let o = 1;o <= m;o++) {
      lol += '*';
      lol += '\t';
    }
    for(let cv = 1;cv <= m - 1;cv++) {
      lol += '*';
      lol += '\t';
    }
    lol += "\n";
  }
  return lol;
}
console.log(segitiga5(5));

//segitiga6 
function segitiga6(baris) {
  let ope = '';
  
  for(let ex = 4;ex >= baris;ex--) {
    ope += '\n';
    for(let ye =  ex + 1 ;ex < baris;ye++ ) { 
      ope += '\t';
    }
    for(let zet = 0; zet <= ex;zet++) {
      ope += '*';
      ope += '\t';
    }
    for(let aa = baris;aa > 5;aa--) {
      ope += '*';
    }
    ope += '\n';
  }
  return ope;
}
console.log(segitiga6(5));

