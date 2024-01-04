#include <iostream>

using namespace std;

// fungsi rekursif terbatas
int pangkatIterasi(int a, int b)
{
    int hasil = a;
    for (int i = 1; i < b; i++)
    {
        hasil = hasil * a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b)
{
    if (b > 1)
    {
        cout << "rekursif\n";
        return a * pangkatRekursif(a, (b - 1));
    }
    else
    {
        cout << "ini adalah akhir dari rekursif\n";
        return a;
    }
}

// Pemanggilan pertama: pangkatRekursif(2, 3)
// Pemanggilan kedua: 2 * pangkatRekursif(2, 2)
// Pemanggilan ketiga: 2 * 2 * pangkatRekursif(2, 1)
// Kondisi dasar terpenuhi (b <= 1), maka fungsi mengembalikan nilai a (2).
// Sehingga, hasil akhir adalah 2 * 2 * 2 = 8.

int main()
{
    int a, b;
    cout << "angka : ";
    cin >> a;
    cout << "pangkat : ";
    cin >> b;
    cout << "hasil iterasi = " << pangkatIterasi(a, b) << endl;
    cout << "hasil rekursif = " << pangkatRekursif(a, b) << endl;

    cin.get();
    return 0;
}