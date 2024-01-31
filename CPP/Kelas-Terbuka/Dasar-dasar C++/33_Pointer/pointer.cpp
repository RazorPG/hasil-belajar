#include <iostream>

using namespace std;

int main()
{

    int a = 5;

    // pointer;
    int *aPtr = nullptr;
    aPtr = &a;

    // int a mempunyai nilai dan address (alamat)

    cout << "nilai dari a   : " << a << endl;
    cout << "nilai dari ptr : " << aPtr << endl;
    cout << "alamat dari a  : " << &a << endl;
    cout << "alamat dari ptr: " << &aPtr << endl;

    // dereferencing, mengambil data dari sebuah pointer
    a = 10;
    cout << "mengambil nilai dari pointer aPtr : " << *aPtr << endl;
    *aPtr = 12;
    cout << "nilai dari a   : " << a << endl;

    cin.get();
    return 0;
}