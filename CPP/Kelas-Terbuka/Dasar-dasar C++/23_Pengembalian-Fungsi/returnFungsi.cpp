#include <iostream>

using namespace std;

int kuadrat(int x)
{
    return x * x;
}

int tambah(int a, int b)
{
    return a + b;
}

int main()
{
    int input, hasil, a, b;
    cout << "nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);

    cout << hasil << endl;

    cout << "masukkan nilai a: ";
    cin >> a;
    cout << "masukkan nilai b: ";
    cin >> b;

    hasil = tambah(a, b);
    cout << hasil << endl;

    cin.get();
    return 0;
}