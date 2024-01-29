#include <iostream>

using namespace std;

int main()
{
    // membuat array
    int nilai[5];
    nilai[0] = 10;
    nilai[1] = 11;
    nilai[2] = 12;
    nilai[3] = 13;
    nilai[4] = 14;

    cout << &nilai[0] << " nilainya adalah " << nilai[0] << endl;
    cout << &nilai[1] << " nilainya adalah " << nilai[1] << endl;
    cout << &nilai[2] << " nilainya adalah " << nilai[2] << endl;
    cout << &nilai[3] << " nilainya adalah " << nilai[3] << endl;
    cout << &nilai[4] << " nilainya adalah " << nilai[4] << endl;

    int *ptr = nilai;
    *(ptr + 4) = 6;

    cout << endl;
    cout << &nilai[0] << " nilainya adalah " << nilai[0] << endl;
    cout << &nilai[1] << " nilainya adalah " << nilai[1] << endl;
    cout << &nilai[2] << " nilainya adalah " << nilai[2] << endl;
    cout << &nilai[3] << " nilainya adalah " << nilai[3] << endl;
    cout << &nilai[4] << " nilainya adalah " << nilai[4] << endl;

    cout << endl;
    cout << "ukuran array = " << sizeof(nilai) << " byte" << endl;
    cout << "jumlah memmber array = " << sizeof(nilai) / sizeof(int) << endl;

    cin.get();
    return 0;
}