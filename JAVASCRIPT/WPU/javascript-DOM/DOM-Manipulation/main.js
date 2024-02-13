// MANIPULASI ELEMENT
// const judul = document.getElementById("judul");
// judul.innerHTML = "<i>RAZORsan</i>";

// const sectionA = document.querySelector("#a");
// sectionA.innerHTML = "hello world";

// const li2 = document.querySelector("#b ul li:nth-child(2)");
// li2.style.color = "lightblue";
// li2.style.backgroundColor = "salmon";

// const judul = document.querySelector("#judul");
// judul.setAttribute("name", "rafid hilmi");

// const a = document.querySelector("a");
// a.setAttribute("id", "link");
// a.getAttribute("href");
// a.removeAttribute("href");

// const p2 = document.querySelector(".p2");
// p2.classList.add("label");
// // p2.classList.toggle('label'); // akan menghasil kan true jika tidak ada dan jika sudah ada maka akan false

// p2.classList.item(1);
// p2.classList.contains("label"); // menanyakan apakah ada class bernama label
// p2.classList.replace("p2", "paragraf"); // mengganti class yang lama menjadi class baru
// p2.classList.remove("paragraf"); // menghapus nama class

// MANIPULASI NODE
// buat element baru
const pBaru = document.createElement("p");
const textPbaru = document.createTextNode("paragraf baru");
// simpan tulisan ke dalam paragraf
pBaru.appendChild(textPbaru);
// simpan pBaru di akhir section A

const sectionA = document.querySelector("#a ");
sectionA.appendChild(pBaru);

const lBaru = document.createElement("li");
const newText = document.createTextNode("item baru");

lBaru.appendChild(newText);

// const sectionB = document.querySelector("#b ul li");
// sectionB.appendChild(newText);

const ul = document.querySelector("#b ul");
const li2 = ul.querySelector("li:nth-child(2)");

ul.insertBefore(lBaru, li2);

const link = document.getElementsByTagName("a")[0];

sectionA.removeChild(link);

const newJudul = document.querySelector("#b");
const p4 = newJudul.querySelector("p");

const h2 = document.createElement("h2");
const textP4 = document.createTextNode("judul baru");

h2.appendChild(textP4);

newJudul.replaceChild(h2, p4);

h2.style.backgroundColor = "red";
lBaru.style.backgroundColor = "yellow";
pBaru.style.backgroundColor = "lightgreen";
