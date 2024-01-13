#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 12;
    int *b = &a;
    int *c = new int;
    *c = *b;

    cout << a << endl;
    cout << &a << endl;
    cout << b << endl;
    cout << &b << endl;
    cout << c << endl;
    cout << &c << endl
         << endl;

    int siswa[50];
    for (int i = 0; i < 50; i++)
    {
        siswa[i] = i + 1;
        cout << "siswa[" << i << "] = " << siswa[i] << endl;
    }

    cin.get();
    return 0;
}