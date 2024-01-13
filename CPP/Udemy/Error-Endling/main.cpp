#include <iostream>
#include <string>

using namespace std;

int main()
{
    double x, y;

    cout << "masukkan 2 angka: ";
    cin >> x >> y;

    try
    {
        if (y != 0)
        {
            double hasil = x / y;
            cout << "hasil pembagian : " << hasil << endl;
        }
        else
        {
            throw 0;
        }
    }
    catch (int eks)
    {
        cout << "terjadi eksepsi" << endl;
    }
    cin.get();
    return 0;
}