#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukkan angka : ";
    cin >> a;

    if (a == 5)
    {
        cout << "ini adalah 5" << endl;
    }
    else if (a == 3)
    {
        cout << "ini adalah 3" << endl;
    }
    else
    {
        cout << "ini bukan 5 maupun 3" << endl;
    }

    cout << "selesai" << endl;
    cin.get();
    return 0;
}