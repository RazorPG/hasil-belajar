#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 10; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    while (i < 10)
    {
        cout << "nilai dari i adalah " << i << endl;
        i++;
    }

    do
    {
        cout << "ini adalah perulangan do while ke-" << i << endl;
    } while (i > 10);

    cin.get();
    return 0;
}