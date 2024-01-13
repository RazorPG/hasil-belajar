#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "nilai x : ";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "nilai x adalah 1" << endl;
        break;
    case 2:
        cout << "nilai x adalah 2" << endl;
        break;
    case 3:
        cout << "nilai x adalah 3" << endl;
    default:
        cout << "nilai yang dimasukkan salah" << endl;
    }

    cin.get();
    return 0;
}