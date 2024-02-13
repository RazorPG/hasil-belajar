// // dom Selection
// // document.getElementById() -> element

// const judul = document.getElementById("judul");
// judul.style.color = "red";
// judul.style.backgroundColor = "lightblue";
// judul.innerHTML = "Rafid Hilmi";

// // ducument.getElementsByTagName() -> HTMLCollections

// const p = document.getElementsByTagName("p");
// for (let i = 0; i < p.length; i++) {
//   p[i].style.backgroundColor = "green";
// }

// const h1 = document.getElementsByTagName("h1")[0];
// h1.style.fontSize = "50px";

// // document.getElementByClassName() -> HTMLCollection
// const p1 = document.getElementsByClassName("p1")[0];
// p1.innerHTML = "ini diubah oleh javascript";

// // document.querySelector() -> element
// const p4 = document.querySelector("#b p");
// p4.innerHTML = "mengubah paragraf ke 4";
// p4.style.fontSize = "15px";

// const li2 = document.querySelector("#b ul li:nth-child(2)");
// li2.innerHTML = "mengubah li ke 2 dengan querySelector";

// // const p12 = document.querySelector("p");
// // p12.innerHTML = "telah di ubah";

// // document.querySelectorAll() -> nodelist
// const pa = document.querySelectorAll("p");
// for (let i = 0; i < p.length; i++) {
//   p[i].style.backgroundColor = "pink";
// }

const sectionB = document.querySelectorAll("#b ul li:nth-child(2), #a .p3");
sectionB[0].style.backgroundColor = "cream";
// Mengiterasi melalui elemen-elemen yang dipilih
// sectionB.forEach(function (element) {
//   // Melakukan apa pun yang Anda inginkan dengan elemen yang dipilih di sini
//   console.log(element);
//   // Contoh: Mengubah warna teks elemen menjadi merah
//   element.style.color = "red";
// });
// const p4 = sectionB.getElementsByTagName("p")[0];
// p4.style.backgroundColor = "red";
// const p4 = sectionB.querySelector('p');
// p4.style.backgroundColor = 'red';
