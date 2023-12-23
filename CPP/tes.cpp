#include <iostream>
#include <chrono>
using namespace std;

void log(int result)
{
    cout << "usia anda sekarang adalah " << result << endl;
}

int main()
{

    auto date = chrono::system_clock::now();
    string year = format("{:%Y}", date);

    int tahun_lahir{};
    int tahun_sekarang = stoi(year);

    cout << "masukan tahun kelahiran : ";
    cin >> tahun_lahir;

    int usia = tahun_sekarang - tahun_lahir;

    log(usia);
    return 0;
}