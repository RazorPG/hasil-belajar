#include <iostream>
#include <string>

using namespace std;

// inheritance
class Hewan
{ // class induk
protected:
    int jumlah_kaki;
    std::string nama;
    std::string warna;

public:
    Hewan(const char *nama, const char *warna, int jumlah_kaki) : nama(this->nama), warna(this->warna), jumlah_kaki(this->jumlah_kaki) {}

    int getJumlahKaki()
    {
        return jumlah_kaki;
    }

    std::string getNama()
    {
        return nama;
    }

    std::string getWarna()
    {
        return warna;
    }
};

// class turunan
class Ayam : public Hewan
{
private:
    int paruh;

public:
    Ayam(const char *nama, const char *warna, int jumlah_kaki, int paruh) : Hewan(nama, warna, jumlah_kaki), paruh(this->paruh)
    {
        cout << "Hewan ini berkaki " << getJumlahKaki();
        cout << ", Warna hewan ini adalah " << getWarna();
        cout << ", Hewan ini mempunyai paruh sebanyak " << getParuh();
        cout << ", dan Hewannya adalah ayam yang bernama " << getNama() << endl;
    }
    int getParuh()
    {
        return paruh;
    }
};

class Kucing : public Hewan
{
private:
    int kumis;

public:
    Kucing(const char *nama, const char *warna, int jumlah_kaki, int kumis) : Hewan(nama, warna, jumlah_kaki), kumis(kumis)
    {
        cout << "Hewan ini berkaki " << getJumlahKaki();
        cout << ", Warna hewan ini adalah " << getWarna();
        cout << ", Hewan ini mempunyai kumis sebanyak " << getKumis();
        cout << ", dan Hewannya adalah kucing yang bernama " << getNama() << endl;
    }

    int getKumis()
    {
        return kumis;
    }
};

// public:public,protected
// protected:public, protected
// private:public->private, protected ->private

int main(int argc, char const *argv[])
{
    Kucing myCat = Kucing("Molla", "Hitam Putih", 4, 10);
    Ayam myChicken = Ayam("Wilson", "Pirang", 2, 3);

    cin.get();
    return 0;
}
