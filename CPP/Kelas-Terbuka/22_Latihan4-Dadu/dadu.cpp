#include <iostream>
#include <cstdlib> // mengandung fungsi random

using namespace std;

int main()
{
    char lanjut;
    while (true)
    {
        cout << "Lempar Dadu? (y/n) : ";
        cin >> lanjut;
        if (lanjut == 'y')
        {
            cout << 1 + (rand() % 6) << "\n"
                 << endl;
        }
        else if (lanjut == 'n')
        {
            break;
        }
        else
            (
                cout << "Warning Ketik y atau n dong kakak!!\n");
    }
    cin.get();
    return 0;
}