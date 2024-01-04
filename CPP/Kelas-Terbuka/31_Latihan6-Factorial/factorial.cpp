#include <iostream>

using namespace std;

// prototype
long long factorial(long long a);

int main()
{
    long long a, hasil;
    cout << "menghitung faktorial dari : ";
    cin >> a;
    hasil = factorial(a);
    cout << " nilai faktorialnya adalah : " << hasil << endl;
    cin.get();
    return 0;
}

long long factorial(long long a)
{
    if (a > 1)
    {
        cout << a << "*";
        return a * factorial(a - 1);
    }
    else if ((a == 0) || (a == 1))
    {
        cout << a;
        return 1;
    }
    else
    {
        cout << "tak terdefenisi" << endl;
        return 0;
    }
}