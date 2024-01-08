#include <iostream>
#include <string>

using namespace std;

int main()
{
    // perbandingan string
    string input;
    string kata_rahasia("ucup");
    while (true)
    {
        cout << "tebak nama : ";
        getline(cin >> ws, input);

        if (input == kata_rahasia)
        {
            cout << "anda berhasil menemukan nama rahasia!!" << endl;
            break;
        }
        else
        {
            cout << "tebakan nama anda salah!!" << endl;
        }
    }
    cout << "program selesai" << endl;

    cin.get();
    return 0;
}