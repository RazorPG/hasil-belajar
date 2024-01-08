#include <iostream>
#include <string>

using namespace std;

int main()
{

    // char kata[6] = {'a', 'n', 't', 'o', 'n'};
    // array char tidak bisa tambah, fiks karena array

    // string kata = "mobil";
    string kata;
    cout << "masukkan kata: ";
    cin >> kata;
    cout << "kata yang dimasukkan adalah: " << kata << endl;

    string kalimat;
    cout << "masukkan kalimat : ";
    getline(cin >> ws, kalimat);
    cout << "kalimat yang dimasukkan adalah: " << kalimat << endl;

    cin.get();
    return 0;
}