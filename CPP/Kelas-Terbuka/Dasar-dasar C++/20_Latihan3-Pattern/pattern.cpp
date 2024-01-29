#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "masukkan panjang pola : ";
    cin >> n;

    cout << "\nPola 1\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\nPola 2\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\nPola 3\n";
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

    cout << "\nPola 4\n";
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

    cout << "\nPola 5\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < (i * 2); k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\nPola 6\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = (n * 2 - i); k >= i; k--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\nPola 7\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < (i * 2); k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = (n * 2 - i); k >= i; k--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cin.get();
    return 0;
}