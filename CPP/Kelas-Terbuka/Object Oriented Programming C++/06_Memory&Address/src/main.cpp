#include <iostream>
#include <string>
#include <chrono>

using namespace std;

using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

class Kosong
{
public:
    int data()
    {
        return 1;
    }
};

class Isi
{
public:
    int dataInt1;      // 4 byte
    int dataInt2;      // 4 byte
    double dataDouble; // 8 byte
    string dataStr;    // 32 byte
};

class Mahasiswa
{
public:
    string nama;

    Mahasiswa(const char *nama)
    {
        Mahasiswa::nama = nama;
    }
};

int main(int argc, char const *argv[])
{
    // besaran memory untuk sebuah object
    // kita akan menampilkan besar dar class kosong
    cout << "Alokasi class kosong adalah : " << sizeof(Kosong) << " byte" << endl;
    cout << "Alokasi class isi adalah    : " << sizeof(Isi) << " byte" << endl;

    // Address
    string a;
    string b;
    Mahasiswa object1 = Mahasiswa("ucup");
    Mahasiswa *object2 = new Mahasiswa("rafid");
    string c;
    string d;
    cout << "\nAddress stack" << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << &object1 << endl;
    cout << &object2 << endl;
    cout << object2 << endl;
    cout << &c << endl;
    cout << &d << endl;

    // seberapa cepat kita membuat memory
    TimePoint *tStackStart = new TimePoint();
    TimePoint *tStackEnd = new TimePoint();
    TimePoint *tHeapStart = new TimePoint();
    TimePoint *tHeapEnd = new TimePoint();

    cin.get();
    *tStackStart = Clock::now();
    Mahasiswa object3 = Mahasiswa("ucup");
    *tStackEnd = Clock::now();

    cin.get();
    *tHeapStart = Clock::now();
    Mahasiswa *object4 = new Mahasiswa("rafid");
    *tHeapEnd = Clock::now();

    chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    cout << "waktu pembuatan object di stack adalah : " << durasi.count() << endl;
    durasi = *tHeapEnd - *tHeapStart;
    cout << "waktu pembuatan object di heap adalah : " << durasi.count() << endl;
    return 0;
}
