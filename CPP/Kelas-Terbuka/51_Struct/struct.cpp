#include <iostream>
#include <string>

using namespace std;

//  struct : data yang dibentuk oleh beberapa data

struct buah
{
    string nama;
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main()
{
    buah buah1;

    // jeruk.warna = "orange";
    // jeruk.berat = 200.50;
    // jeruk.harga = 15000;
    // jeruk.rasa = "asam manis";

    // apel.warna = "merah";
    // apel.berat = 300.50;
    // apel.harga = 18000;
    // apel.rasa = "manis kesat";

    // cout << "jeruk" << endl;
    // cout << "-" << jeruk.warna << endl;
    // cout << "-" << jeruk.berat << endl;
    // cout << "-" << jeruk.harga << endl;
    // cout << "-" << jeruk.rasa << endl;

    // cout << "apel" << endl;
    // cout << "-" << apel.warna << endl;
    // cout << "-" << apel.berat << endl;
    // cout << "-" << apel.harga << endl;
    // cout << "-" << apel.rasa << endl;

    cout << "selamat datang di bonty buah\n";
    cout << "silahkan masukkan data belanjaanmu\n";
    cout << "nama  : ";
    getline(cin >> ws, buah1.nama);
    cout << "warna : ";
    getline(cin >> ws, buah1.warna);
    cout << "berat : ";
    cin >> buah1.berat;
    cout << "harga : ";
    cin >> buah1.harga;
    cout << "rasa  : ";
    cin >> buah1.rasa;

    cout << "=========================================\n";
    cout << "======== daftar belanjaan anda ==========\n";
    cout << "=========================================\n";
    cout << "=> nama buah  : " << buah1.nama << endl;
    cout << "=> warna buah : " << buah1.warna << endl;
    cout << "=> berat buah : " << buah1.berat << " gram" << endl;
    cout << "=> harga buah : "
         << "Rp." << buah1.harga << ",00" << endl;
    cout << "rasa buah     : " << buah1.rasa << endl;
    cout << "=========================================\n";
    cout << "==========   Program selesai   ==========\n";
    cout << "=========================================\n";

    cin.get();
    return 0;
}