#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // bilangan bulat
    unsigned int a = 10; // 32-bit = 4 byte
    long long b = 6;     // 64-bit = 8 byte
    short c = 5;         // 16-bit = 2 byte

    // bilangan decimal
    float d = 3.5;
    double e = 10.51;

    // character
    char f = 'a';

    // boolean
    bool g = false; // 1/0 // false

    cout << g << endl;
    cout << sizeof(g) << " byte" << endl;
    cout << "Maximum value : " << numeric_limits<bool>::max() << endl;
    cout << "Minimum value : " << numeric_limits<bool>::min() << endl;

    cin.get();
    return 0;
}
