#include <iostream>
#include <string>

using namespace std;

// belajar tentang friend class
// akses friend class hanya satu arah, tidak berlaku sebaliknya
// friend class akan memberikan akses dari class yang mendeklarasikan friend
class Persegi
{
    friend class PersegiPanjang; // memberikan akses seluruh atribut dan method kepada class PersegiPanjang

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

    bool moreLong(const PersegiPanjang *persegiPanjang)
    {
        bool isTrue = this->sisi > persegiPanjang->panjang;
        return isTrue;
    }
};

class PersegiPanjang
{
    friend class Persegi; // memberikan akses seluruh atribut dan method kepada class Persegi
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

    bool moreLong(const Persegi *persegi)
    {
        bool isTrue = this->panjang > persegi->sisi;
        return isTrue;
    }
};

int main(int argc, char const *argv[])
{
    Persegi *persegi = new Persegi(10);
    PersegiPanjang persegiPanjang = PersegiPanjang(5, 10);

    cout << "luas persegi = " << persegi->luas() << endl;
    cout << "luas persegi panjang = " << persegiPanjang.luas() << endl;
    bool logika = persegiPanjang.moreLong(persegi);
    cout << "apakah persegi panjang lebih panjang dari persegi = " << logika << endl;
    return 0;
}
