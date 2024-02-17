#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 8;

    bool hasil;

    // operator logika : not, and, or, nand , nor , xor, xnor

    // not
    cout << "untuk not" << endl;
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

    // nand : kebalikan dari output and
    cout << "untuk nand" << endl;
    hasil = !((a == 3) && (b == 8)); // true and true = true dibalik = false
    cout << hasil << endl;
    hasil = !((a == 7) && (b == 8)); // false and true = false dibalik = true
    cout << hasil << endl;
    hasil = !((a == 3) && (b == 10)); // true and false = false dibalik = true
    cout << hasil << endl;
    hasil = !((a == 2) && (b == 5)); // false and false = false dibalik = true
    cout << hasil << endl;

    // nor : kebalikan dari output or
    cout << "untuk nor" << endl;
    hasil = !((a == 3) || (b == 8)); // true or true = true dibalik = false
    cout << hasil << endl;
    hasil = !((a == 7) || (b == 8)); // false or true = true dibalik = false
    cout << hasil << endl;
    hasil = !((a == 3) || (b == 10)); // true or false = true dibalik = false
    cout << hasil << endl;
    hasil = !((a == 2) || (b == 5)); // false ar false = false dibalik = true
    cout << hasil << endl;

    // xor : outputnya akan true jika kedua inputnya berbeda
    cout << "untuk xor" << endl;
    hasil = (a == 3) != (b == 8); // true tidak sama dengan true maka akan false
    cout << hasil << endl;
    hasil = (a == 7) != (b == 8); // false tidak sama dengan true maka akan true
    cout << hasil << endl;
    hasil = (a == 3) != (b == 10); // true tidak sama dengan false maka akan true
    cout << hasil << endl;
    hasil = (a == 2) != (b == 5); // false tidak sama dengan false maka akan false
    cout << hasil << endl;

    // xnor : outputnya akan true jika kedua inputnya sama
    cout << "untuk xnor" << endl;
    hasil = (a == 3) == (b == 8); // true sama dengan true maka akan true
    cout << hasil << endl;
    hasil = (a == 7) == (b == 8); // false sama dengan true maka akan false
    cout << hasil << endl;
    hasil = (a == 3) == (b == 10); // true sama dengan false maka akan false
    cout << hasil << endl;
    hasil = (a == 2) == (b == 5); // false sama dengan false maka akan true
    cout << hasil << endl;
    cin.get();
    return 0;
}