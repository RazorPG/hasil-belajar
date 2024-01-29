#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    string NIM;
    string jurusan;

    // constructor
    Mahasiswa(string nama, string NIM, string jurusan)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::NIM = NIM;
        Mahasiswa::jurusan = jurusan;
    }

    string stringify()
    {
        return nama + " " + NIM + " " + jurusan;
    }
};

class dBase
{
public:
    ifstream in;
    ofstream out;
    string fileName;

    dBase(const char *fileName)
    {
        dBase::fileName = fileName;
    }

    void save(Mahasiswa data)
    {
        cout << data.nama << endl;
        cout << data.NIM << endl;
        cout << data.jurusan << endl;

        dBase::out.open(dBase::fileName, ios::app);
        dBase::out << data.stringify() << endl;
        dBase::out.close();
    }

    void showAll()
    {
        dBase::in.open(dBase::fileName, ios::in);
        string nama, NIM, jurusan;
        int index = 1;
        while (!dBase::in.eof())
        {
            dBase::in >> nama;
            dBase::in >> NIM;
            dBase::in >> jurusan;
            cout << index++ << "\t";
            cout << nama << "\t";
            cout << NIM << "\t";
            cout << jurusan << endl;
        }
        dBase::in.close();
    }
};

int main(int argc, char const *argv[])
{
    dBase database = dBase("data.txt"); 
    // tampilkan seluruh data di database
    database.showAll();
    string nama, NIM, jurusan;
    cout << "MASUKKAN DATA MAHASISWA" << endl;
    cout << "Nama : ";
    getline(cin, nama);
    cout << "NIM : ";
    getline(cin, NIM);
    cout << "jurusan : ";
    getline(cin, jurusan);

    Mahasiswa dataMahasiswa = Mahasiswa(nama, NIM, jurusan);

    // dave data ke database
    database.save(dataMahasiswa);

    return 0;
}
