#include <iostream>
#include <string>

using namespace std;

// class tanpa constructor
class Polos
{
public:
    string dataString;
    int dataInteger;
};

// class dengan constructor
class Mahasiswa
{
public:
    string nama;
    string NIM;
    string jurusan;
    double IPK;
    // ini adalah constructor
    Mahasiswa()
    {
        cout << "ini adalah constructor" << endl;
    }
    // constructor dengan parameter
    Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK)
    {
        Mahasiswa::nama = inputNama;
        Mahasiswa::NIM = inputNIM;
        Mahasiswa::jurusan = inputJurusan;
        Mahasiswa::IPK = inputIPK;

        cout << Mahasiswa::nama << endl;
        cout << Mahasiswa::NIM << endl;
        cout << Mahasiswa::jurusan << endl;
        cout << Mahasiswa::IPK << endl;
        cout << endl;
    }

    // constructor copy object
    Mahasiswa(const Mahasiswa &obj)
    {
        this->nama = obj.nama;
        this->IPK = obj.IPK;
        this->jurusan = obj.jurusan;
        this->NIM = obj.NIM;
        cout << "ini adalah copy constructur Mahasiswa" << endl;
    }
};

int main()
{
    Mahasiswa mahasiswa1 = Mahasiswa("Rafid Hilmi", "23346016", "Teknik Informatika", 3.57);
    Mahasiswa mahasiswa2 = Mahasiswa("Muhammad Gilang Ramadhan", "23346013", "Teknik Informatika", 3.66);
    Mahasiswa mahasiswa3;
    Mahasiswa mahasiswa4 = mahasiswa1;
    cout << mahasiswa4.IPK << endl;
    cout << mahasiswa4.jurusan << endl;
    cout << mahasiswa4.nama << endl;
    cout << mahasiswa4.NIM << endl;
    // Polos objectPolos;
    // objectPolos.dataString = "polos";
    // objectPolos.dataInteger = 12;

    // cout << objectPolos.dataInteger << endl;
    // cout << objectPolos.dataString << endl;

    return 0;
}
