#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream myFile;
    int number = 1234;
    myFile.open("data.bin", ios::out | ios::binary);

    myFile.write(reinterpret_cast<char *>(&number), sizeof(number));

    myFile.close();

    cin.get();
    return 0;
}