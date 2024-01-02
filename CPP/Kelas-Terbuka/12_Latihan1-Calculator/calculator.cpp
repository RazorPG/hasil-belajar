#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "selamat datang di program calculator \n \n";

    // masukkan input dari user
    cout << "masukkan nilai pertama: ";
    cin >> a;
    cout << "masukkan operator +, -, *, /: ";
    cin >> aritmatika;
    cout << "masukkan nilai kedua : ";
    cin >> b;

    // ini adalah contoh
    // if (aritmatika == '+')
    // {
    //     hasil = a + b;
    // }
    // else if (aritmatika == '-')
    // {
    //     hasil = a - b;
    // }
    // else if (aritmatika == '*')
    // {
    //     hasil = a * b;
    // }
    // else if (aritmatika == '/')
    // {
    //     hasil = a / b;
    // }
    // else
    // {
    //     cout << "maaf pengoperasian ada kesalahan!!";
    // }

    //  latihan calculator menggunakan switch
    switch (aritmatika)
    {
    case '+':
        hasil = a + b;
        break;
    case '-':
        hasil = a - b;
        break;
    case '*':
        hasil = a * b;
        break;
    case '/':
        hasil = a / b;
        break;
    default:
        cout << "maaf pengoperasian ada kesalahan!!" << endl;
    }

    cout << "hasil dari perhitungan " << a << aritmatika << b << " = " << hasil << endl;

    cin.get();
    return 0;
}