#include <iostream>
#include <fstream> // ofstream, ifstream, fstream

using namespace std;

int main()
{
    ofstream myFile;

    // ios::out =  default, operasi output;
    // ios::app = menuliskan pada akhir baris;
    // ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan di hapus;

    myFile.open("data3.txt", ios::app); // append
    myFile << "\nmenuliskan baris baru pada data3";
    myFile.close();

    int a = 101238;
    myFile.open("Data1.txt", ios::out);
    myFile << "menuliskan baris baru pada data1";
    myFile << a;
    myFile.close();

    myFile.open("Data2.txt", ios::trunc);
    myFile << "\nmenuliskan baris baru pada data2";
    myFile.close();

    myFile.open("data.cpp", ios::app);
    myFile << "\n\nint main(){\n\n\n\n}";
    myFile.close();

    cin.get();
    return 0;
}