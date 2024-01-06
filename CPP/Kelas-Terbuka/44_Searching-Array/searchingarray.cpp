#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArray(std::array<int, arraySize> &angka)
{
    std::cout << "array: ";
    for (int &a : angka)
    {
        std::cout << a << " ";
    }
    std::cout << std ::endl;
}

int main()
{

    std::array<int, arraySize> angka = {1, 8, 6, 9, 10, 2, 4, 12, 18, 19};
    printArray(angka);
    int angkaCari;
    bool ketemu;
    // sort dulu
    // search -> binary_search
    std::cout << "masukkan angka searching : ";
    std::cin >> angkaCari;
    std::sort(angka.begin(), angka.end());
    ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);

    if (ketemu)
    {
        std::cout << "ketemu" << std::endl;
    }
    else
    {
        std::cout << "tidak ketemu" << std::endl;
    }
    std::cin.get();
    return 0;
}