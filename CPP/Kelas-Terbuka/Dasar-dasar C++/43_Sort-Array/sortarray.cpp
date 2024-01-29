#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 10;

void printArray(array<int, arraySize> &angka)
{
    cout << "array: ";
    for (int &a : angka)
    {
        cout << a << " ";
    }
    cout << std ::endl;
}
void printArray(array<char, arraySize> &angka)
{
    cout << "array: ";
    for (char &a : angka)
    {
        cout << a << " ";
    }
    cout << std ::endl;
}

int main()
{
    array<int, arraySize> angka = {9, 10, 22, 28, 18, 16, 26, 37, 24, 11};
    array<char, arraySize> huruf = {'a', 'b', 'e', 'q', 'o', 'h', 'x', 'l', 'm', 'n'};

    printArray(angka);
    printArray(huruf);

    sort(angka.begin(), angka.end());
    printArray(angka);

    sort(huruf.begin(), huruf.end());
    printArray(huruf);

    cin.get();
    return 0;
}