#include <iostream>
#include <string>

using namespace std;

class Kendaraan
{
public:
    string merk = "afanza";

public:
    void ambilMerk()
    {
        cout << "properti dari kelas kendaraan : " << merk << endl;
    }
};

class Mobil : public Kendaraan
{
public:
    void ambilMerk()
    {
        cout << merk << endl;
    }
};

int main()
{
    Kendaraan kendaraan;
    Mobil mobil;

    kendaraan.ambilMerk();
    mobil.ambilMerk();

    cin.get();
    return 0;
}