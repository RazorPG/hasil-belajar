#include <iostream>
#include <string>

using namespace std;

// ternary operator = ?
// kondisi ? hasil1 : hasil2

int main()
{
    int a, b;
    string hasil1, hasil2, output;
    hasil1 = "razor";
    hasil2 = "rafid";

    cout << "masukkan angka a : ";
    cin >> a;
    cout << "masukkan angka b : ";
    cin >> b;

    // output = (a < b) ? hasil1 : hasil2;

    // if (a < b)
    // {
    //     output = hasil1;
    // }
    // else
    // {
    //     output = hasil2;
    // }

    cout << "nilai a < b ? " << (a < b ? "ya" : "tidak") << endl;

    cin.get();
    return 0;
}