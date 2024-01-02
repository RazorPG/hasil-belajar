#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "masukkan panjang pola : ";
    cin >> n;

    cout << "Pola 1\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "Pola 2\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "Pola 3\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "Pola 4\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k > i; k--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cin.get();
    return 0;
}