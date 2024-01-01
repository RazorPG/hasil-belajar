#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 8;

    bool hasil;

    // operator logika : not, and, or

    // not
    hasil = !(a == 3);
    cout << hasil << endl;

    // and : kedua nilai true untuk menghasilkan true

    cout << "untuk and" << endl;
    hasil = (a == 3) && (b == 8); // true and true
    cout << hasil << endl;
    hasil = (a == 7) && (b == 8); // false and true
    cout << hasil << endl;
    hasil = (a == 3) && (b == 10); // true and false
    cout << hasil << endl;
    hasil = (a == 2) && (b == 5); // false and false
    cout << hasil << endl;

    // or : salah satunya true akan menghasilkan true
    cout << "untuk or" << endl;
    hasil = (a == 3) || (b == 8); // true or true
    cout << hasil << endl;
    hasil = (a == 7) || (b == 8); // false or true
    cout << hasil << endl;
    hasil = (a == 3) || (b == 10); // true or false
    cout << hasil << endl;
    hasil = (a == 2) || (b == 5); // false ar false
    cout << hasil << endl;

    cin.get();
    return 0;
}