#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    int nim;

    // getline(cin, variabel)
    cout << "masukkan nama anda : ";
    getline(cin >> ws, nama);
    cout << "masukkan Nim anda : ";
    cin >> nim;

    cout << "nama anda adalah : " << nama << endl;
    cout << "nim anda adalah : " << nim << endl;

    // jumlah kata dari input
    int posisi = 0;
    int jumlah = 0;
    while (true)
    {
        posisi = nama.find(" ", posisi + 1);
        jumlah++;
        cout << "posisi: " << posisi << " jumlah: " << jumlah << endl;
        if (posisi < 0)
        {
            break;
        }
    }
    cout << "jumlah kata : " << jumlah << endl;
    cin.get();
    return 0;
}