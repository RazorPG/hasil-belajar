#include <iostream>
#include <string>

using namespace std;

// polymorphism = banyak bentuk
// true = overrading (virtual)
// trivial = overloading (jumlah argument, letak argument, dan tipe argument)

class Unggas
{
protected:
    int jumlahKaki;
    std::string warna;

public:
    Unggas()
    {
        cout << "constructor unggas" << endl;
    }

    void setJumlahKaki(int jumlahKaki)
    {
        this->jumlahKaki = jumlahKaki;
    }
    int getJumlahKaki()
    {
        return jumlahKaki;
    }

    void setWarna(const char *warna)
    {
        this->warna = warna;
    }

    string getWarna()
    {
        return warna;
    }

    void makan(int x)
    {
        cout << "hewan makan sebanyak " << x << " piring" << endl;
    }

    void makan(int x, const char *y)
    {
        cout << "Hewan makan " << y << " sebanyak " << x << " piring" << endl;
    }

    void makan(const char *y, int x)
    {
        cout << "Hewan makan " << y << "." << endl;
    }

    void makan(const char *x)
    {
        cout << "Hewan makan " << x << "!" << endl;
    }

    // overriding
    virtual void berjalan()
    {
        cout << "unggas sedang berjalan" << endl;
    }

    // pure virtual function =0
    virtual void tidur() = 0;
};

class Ayam : public Unggas
{
public:
    Ayam()
    {
        cout << "constructor ayam" << endl;
    }
    void berjalan()
    {
        cout << "ayam berjalan" << endl;
    }
    void tidur()
    {
        cout << "ayam tidur" << endl;
    }
};

class Burung : public Unggas
{
public:
    Burung()
    {
        cout << "constructor burung" << endl;
    }
    void berjalan()
    {
        cout << "Burung berjalan" << endl;
    }

    void tidur()
    {
        cout << "burung tidur" << endl;
    }
};

class Bebek : public Unggas
{
public:
    Bebek()
    {

        cout << "constructor bebek" << endl;
    }

    void tidur()
    {
        cout << "bebek tidur" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Ayam wilson;
    wilson.makan("jagung");
    wilson.makan("nasi", 10);
    wilson.makan(11);
    wilson.makan(2, "tulang");
    wilson.berjalan();

    Unggas *hewan = new Burung();
    hewan->berjalan();
    hewan = new Ayam();
    hewan->tidur();
}
