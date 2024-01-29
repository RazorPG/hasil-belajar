#include <iostream>

using namespace std;

// prototitpe
int fibonacci(int a);

int main()
{
    int n;
    cout << "menghitung fibonacci ke : ";
    cin >> n;
    int hasil = fibonacci(n);
    cout << "nilainya adalah : " << hasil << endl;

    cin.get();
    return 0;
}

int fibonacci(int a)
{
    if ((a == 0) || (a == 1))
    {
        return a;
    }
    else
    {
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}