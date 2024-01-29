#include <iostream>
#include <string>

using namespace std;

// deklarasi union
union data
{
    int int_value;
    char char_value[5];
};

int main()
{

    union data nama;
    nama.int_value = 143;

    cout << " data int_value: " << nama.int_value << endl;
    cout << " data char_value: " << nama.char_value << endl;

    nama.char_value[0] = 'a';
    nama.char_value[1] = 'b';
    nama.char_value[2] = 'c';
    nama.char_value[3] = 'd';

    cout << " data int_value: " << nama.int_value << endl;
    cout << " data char_value: " << nama.char_value << endl;
    cin.get();
    return 0;
}