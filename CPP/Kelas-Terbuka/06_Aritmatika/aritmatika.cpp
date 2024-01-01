#include <iostream>

using namespace std;

int main()
{
    int a = 9;
    int b = 2;

    int hasil;
    // operator + - * / %

    // penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    // modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    // urutan eksekusi
    hasil = (a + b * a / b);
    cout << hasil << endl;

    cin.get();
    return 0;
}