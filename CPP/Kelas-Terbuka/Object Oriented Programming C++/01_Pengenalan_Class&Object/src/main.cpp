#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    string NIM;
    string jurusan;
    double IPK;
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1;
    data1.nama = "rafid hilmi";
    data1.NIM = "23346016";
    data1.jurusan = "Teknik Informatika";
    data1.IPK = 3.57;
    Mahasiswa data2;
    data2.nama = "muhammad gilang ramadhan";
    data2.NIM = "23346013";
    data2.jurusan = "Teknik Informatika";
    data2.IPK = 3.66;

    cout << "nama dari data1    : " << data1.nama << endl;
    cout << "NIM dari data1     : " << data1.NIM << endl;
    cout << "jurusan dari data1 : " << data1.jurusan << endl;
    cout << "IPK dari data1     : " << data1.IPK << endl;
    cout << endl;
    cout << "nama dari data2    : " << data2.nama << endl;
    cout << "NIM dari data2     : " << data2.NIM << endl;
    cout << "jurusan dari data2 : " << data2.jurusan << endl;
    cout << "IPK dari data2     : " << data2.IPK << endl;

    return 0;
}
