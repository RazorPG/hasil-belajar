#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// ios::in
// ios::ate = mulai daari akhir file
// ios::binary =

int main()
{
    ifstream myFile;
    string output, buffer;
    bool isData = false;
    int no;
    string nama;

    myFile.open("data.txt");

    while (!isData)
    {
        getline(myFile, buffer);
        output.append(buffer + "\n");
        if (buffer == "data")
        {
            break;
        }
    }
    cout << output << endl;
    getline(myFile, buffer);
    int jumlah_data = 0;
    // posisiton (No  Nama)
    while (!myFile.eof())
    {
        // posisi awal(1. Adira Pratama)
        myFile >> no;          // data.txt -> No -> int no
        getline(myFile, nama); // data.txt -> Nama -> string nama
        cout << "no[" << no << "] "
             << "<-----> "
             << "nama = " << nama << endl;
        jumlah_data++;
    }
    cout << "jumlah mahasiswa adalah : " << jumlah_data << endl;

    cin.get();
    return 0;
}