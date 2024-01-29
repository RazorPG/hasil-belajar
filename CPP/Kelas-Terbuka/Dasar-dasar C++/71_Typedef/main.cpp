#include <iostream>

using namespace std;

int main()
{
    // tydef adalah memberikan alias untuk tipedata
    typedef int I;
    typedef int iVector2D[2];
    typedef unsigned long Ulong;
    typedef double vector[2];

    using numbers = double;

    I a = 10;
    iVector2D b = {1, 2};
    Ulong c = 123819349;
    vector d = {12.5, 35.80};
    numbers e = 192.019238;

    cout << "nilai a : " << a << endl;
    cout << "nilai b[0] : " << b[0] << endl;
    cout << "nilai b[1] : " << b[1] << endl;
    cout << "nilai c : " << c << endl;
    cout << "nilai d[0] : " << d[0] << endl;
    cout << "nilai d[1] : " << d[1] << endl;
    cout << "nilai e : " << e << endl;

    cin.get();
    return 0;
}