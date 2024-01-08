#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kalimat1("aku tidak tahu seberapa aku bisa");
    string kalimat2("teruslah mencoba walau gagal berkali-kali");

    cout << "1: " << kalimat1 << endl;
    cout << "2: " << kalimat2 << endl;

    // swap string
    cout << "swap string" << endl;
    kalimat2.swap(kalimat1);
    cout << "1: " << kalimat1 << endl;
    cout << "2: " << kalimat2 << endl;

    // replace, mengganti string
    // replace(index, panjang, pengganti)
    cout << "replace string" << endl;
    kalimat1.replace(23, 18, "tidak tahu kapan akan sukses");

    kalimat2.replace(
        kalimat2.find("seberapa"),
        8,
        "apakah");
    cout << "1: " << kalimat1 << endl;
    cout << "2: " << kalimat2 << endl;

    // insert string
    cout << "insert string" << endl;
    kalimat1.insert(28, " harus dan");
    cout << "1: " << kalimat1 << endl;
    cout << "2: " << kalimat2 << endl;

    cin.get();
    return 0;
}