#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa
{
    int NIM;
    string nama;
    string jurusan;
};

Mahasiswa ambilData(int posisi, fstream &myFile)
{
    Mahasiswa bufferData;

    myFile.seekp((posisi - 1) * sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char *>(&bufferData), sizeof(Mahasiswa));

    return bufferData;
}

void menulisData(Mahasiswa &data, fstream &myFile)
{
    myFile.write(reinterpret_cast<char *>(&data), sizeof(Mahasiswa));
}

void menulisDatabyPos(int posisi, Mahasiswa &bufferData, fstream &myFile)
{
    myFile.seekg((posisi - 1) * sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char *>(&bufferData), sizeof(Mahasiswa));
}

int main()
{

    fstream myFile;
    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

    Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;

    mahasiswa1.NIM = 23346016;
    mahasiswa1.nama = "Rafid Hilmi";
    mahasiswa1.jurusan = "Teknik Informatika";

    mahasiswa2.NIM = 23346508;
    mahasiswa2.nama = "Jumaidil Ramadhan";
    mahasiswa2.jurusan = "Pendidikan Kimia";

    mahasiswa3.NIM = 23346703;
    mahasiswa3.nama = "Bunga Mutiara Angel";
    mahasiswa3.jurusan = "Keperawatan";

    menulisData(mahasiswa1, myFile);
    menulisData(mahasiswa2, myFile);
    menulisData(mahasiswa3, myFile);

    // mahasiswa3.nama = "razor";
    // menulisDatabyPos(3, mahasiswa3, myFile);

    output = ambilData(1, myFile);

    cout << output.NIM << endl;
    cout << output.nama << endl;
    cout << output.jurusan << endl;

    myFile.close();
    cin.get();
    return 0;
}