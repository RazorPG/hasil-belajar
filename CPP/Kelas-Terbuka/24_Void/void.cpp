#include <iostream>

using namespace std;

// reporter
int kuadrat(int x) // fungsi kembalian
{
    return x * x;
}

// worker
void tampilkan(int input)
{
    cout << "menampilkan dengan void\n";
    cout << input << endl;
}

int main()
{
    int input, hasil, a, b;
    cout << "nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);

    cin.get();
    return 0;
}