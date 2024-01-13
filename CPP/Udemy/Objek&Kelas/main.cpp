#include <iostream>

using namespace std;

class Mahasiswa
{
public:
    // variabel anggota
    string nama;
    int umur;

    // konstruktor
    Mahasiswa(string n, int u) : nama(n), umur(u) {}

    // fungsi anggota
    void perkenalan()
    {
        std::cout << "halo, nama saya " << nama << " dan saya berusia " << umur << " tahun." << endl;
    }
};

int main()
{

    // membuat objek dari kelas Mahasiswa
    Mahasiswa mahasiswa1("rafid hilmi", 18);

    // memanggil fungsi anggota
    mahasiswa1.perkenalan();

    cin.get();
    return 0;
}