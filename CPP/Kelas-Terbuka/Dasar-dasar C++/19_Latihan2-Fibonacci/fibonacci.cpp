#include <iostream>

using namespace std;

int main()
{

    // f_n = f_n1 + f_n2
    int n;
    int f_n;
    int f_n1 = 1;
    int f_n2 = 0;

    cout << "ini adalah program deret Fibonnaci \n";
    cout << "masukkan nilai n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << f_n << " ";
        f_n = f_n1 + f_n2;
        f_n1 = f_n2;
        f_n2 = f_n;
    }

    cin.get();
    return 0;
}