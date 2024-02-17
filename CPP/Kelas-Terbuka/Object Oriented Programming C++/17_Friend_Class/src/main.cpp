#include <iostream>
#include <string>

using namespace std;

class PersegiPanjang; // Forward declaration

class Persegi
{
    friend class PersegiPanjang;

private:
    double sisi;

public:
    Persegi(double sisi)
    {
        this->sisi = sisi;
    }

    double luas()
    {
        return this->sisi * this->sisi;
    }

    bool moreLong(const PersegiPanjang &persegiPanjang);
};

class PersegiPanjang
{
    friend class Persegi;

private:
    double panjang;
    double lebar;

public:
    PersegiPanjang(double panjang, double lebar)
    {
        this->panjang = panjang;
        this->lebar = lebar;
    }

    double luas()
    {
        return this->panjang * this->lebar;
    }

    bool moreLong(const Persegi &persegi)
    {
        return this->panjang > persegi.sisi;
    }
};

int main()
{
    Persegi persegi(10);
    PersegiPanjang persegiPanjang(5, 10);

    cout << "Luas persegi = " << persegi.luas() << endl;
    cout << "Luas persegi panjang = " << persegiPanjang.luas() << endl;

    bool logika = persegiPanjang.moreLong(persegi);
    cout << "Apakah persegi panjang lebih panjang dari persegi = " << logika << endl;

    return 0;
}
