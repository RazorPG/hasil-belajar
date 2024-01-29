#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream myFile;
    string hasil;
    myFile.open("data.bin", ios::in | ios::binary);
    myFile.read(reinterpret_cast<char *>(&hasil), sizeof(hasil));
    cout << "besar integer = " << sizeof(hasil) << endl;
    cout << hasil << endl;

    cin.get();
    return 0;
}