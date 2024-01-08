#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat1("aku akan berusaha semaksimal mungkin untuk menjadi seseorang programmer");
    string kalimat2("aku harus mewujudkannya mulai dari sekarang agar masa depan bisa tercapai");

    cout << "1: " << kalimat1 << endl;
    cout << "2: " << kalimat2 << endl;

    // substring, mengambil string di tengah-tengah
    // substr(index , panjang)
    cout << kalimat1.substr(9, 8) << " ";
    cout << kalimat2.substr(10, 13) << endl;

    // mencari posisi dari substring
    cout << "posisi mungkin: " << kalimat1.find("mungkin") << endl;
    cout << "posisi agar: " << kalimat2.find("agar") << endl;

    int a = kalimat1.find("a");
    cout << a << endl;
    cout << kalimat1.find("a", a + 1) << endl;

    // mencari posisinya dari belakang
    cout << kalimat2.rfind("se") << endl;

    cin.get();
    return 0;
}