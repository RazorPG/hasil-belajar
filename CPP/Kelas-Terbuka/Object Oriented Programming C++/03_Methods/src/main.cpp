#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    double IPK;

    // constructor
    Mahasiswa(string nama, double IPK)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::IPK = IPK;
    }

    void tampilkanData()
    {
        // method tanpa parameter dan tanpa return
        cout << "nama saya " << Mahasiswa::nama;
        cout << " IPK saya " << Mahasiswa::IPK << endl;
    }

    // method dengan parameter dan tanpa return
    void ubahNama(const char *namaBaru)
    {
        Mahasiswa::nama = namaBaru;
    }

    // method tanpa parameter dan dengan return
    string getNama()
    {
        return Mahasiswa::nama;
    }

    double getIPK()
    {
        return IPK;
    }

    // method dengan parameter dan dengan return
    double katrolIPK(const double &tambahanNilai)
    {
        return Mahasiswa::IPK + tambahanNilai;
    }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup", 2.5);
    Mahasiswa mahasiswa2 = Mahasiswa("otong", 3.5);

    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();

    mahasiswa1.ubahNama("rafid hilmi");
    mahasiswa1.tampilkanData();

    cout << "dataNama = " << mahasiswa1.getNama() << endl;
    cout << "dataIPK = " << mahasiswa1.getIPK() << endl;
    cout << "nilai katrol = " << mahasiswa2.katrolIPK(-1.3) << endl;
    return 0;
}
