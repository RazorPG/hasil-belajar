#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    string kalimat1("cobalah untuk berubah kedepannya buat diriku yang sekarang ini");
    cout << kalimat1 << endl;
    cout << "cari kata dari kalimat diatas: ";
    getline(cin >> ws, nama);
    int ps = kalimat1.find(nama);
    if (ps != string::npos)
    {
        cout << kalimat1.substr(ps, nama.length());
    }
    else
    {
        cout << "kalimat tidak ditemukan";
    }
    cin.get();
    return 0;
}