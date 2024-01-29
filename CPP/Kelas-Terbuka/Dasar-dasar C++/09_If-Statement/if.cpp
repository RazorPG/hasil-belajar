#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukkan angka : ";
    cin >> a;

    // if statement
    // kondisi dalam bentuk boolean
    if (a)
    {
        cout << "anda berhasil menjalankan if" << endl;
    }
    cout << "selesai" << endl;

    cin.get();
    return 0;
}