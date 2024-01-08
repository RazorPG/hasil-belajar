#include <iostream>

using namespace std;

enum warna
{
    merah,
    putih,
    hitam,
    kuning,
    biru = 8,
    hijau
};

int main()
{
    warna kain;
    kain = hitam;

    if (kain == hitam)
    {
        cout << "warna kain hitam" << endl;
    }
    cout << kain << endl;

    cin.get();
    return 0;
}