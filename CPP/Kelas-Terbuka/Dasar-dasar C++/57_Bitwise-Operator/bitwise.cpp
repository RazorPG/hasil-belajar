#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBinary(unsigned short val, string nama)
{
    cout << nama << " = " << bitset<8>(val) << endl;
}

int main()
{
    unsigned short a = 5, b = 12, c;

    cout << "\n& = Bitwise AND" << endl;
    c = a & b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    cout << "\n| = Bitwise OR" << endl;
    c = a | b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    cout << "\n^ = Bitwise XOR" << endl;
    c = a ^ b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    cout << "\n~ = Bitwise NOT" << endl;
    c = ~a;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    cout << "\n<< = Bitwise SHL" << endl;
    c = a << 2;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    cout << "\n>> = Bitwise SHR" << endl;
    c = a >> 2;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    cin.get();
    return 0;
}

// bitwise operator
// &     AND Bitwise AND
// |     OR Bitwise inclusive OR
// ^     XOR Bitwise execlusive OR
// ~     NOT
// <<    SHL shift bits left
// >>    SHR shift bits rigt
