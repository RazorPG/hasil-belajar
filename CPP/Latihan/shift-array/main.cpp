#include <iostream>
#include <windows.h>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    char text[100];
    int length;
    char arah;

kembali:
    system("cls");
    fflush(stdin);
    cout << "masukkan sebuah kalimat : ";
    if (!cin.getline(text, 100))
    {
        cin.clear();
        cout << "tidak sesuai syarat!!" << endl;
        Sleep(1);
        goto kembali;
    }

    length = strlen(text);
    char temp[50];
    for (int i = 0; i < 50; i++)
    {
        if (i == 0 || i == 50 - 1)
        {
            temp[i] = '|';
        }
        else
        {
            temp[i] = ' ';
        }
    }

    if (length != 100)
    {
        for (int i = length; i < 100; i++)
        {
            text[i] = ' ';
        }
    }
kembali2:
    cout << "pilih arah[L/R] : ";
    cin >> arah;
    fflush(stdin);
    if (arah == 'L' || arah == 'l')
    {
        while (true)
        {
            system("cls");
            cout << setfill('=') << setw(50) << "=" << setfill(' ') << endl;

            for (int i = 0; i < 50; i++)
            {
                cout << temp[i];
            }

            for (int i = 1; i < 50 - 2; i++)
            {
                temp[i] = temp[i + 1];
            }
            temp[50 - 2] = text[0];

            for (int i = 0; i < 100 - 1; i++)
            {
                text[i] = text[i + 1];
            }
            text[100 - 1] = temp[1];
            cout << endl;
            cout << setfill('=') << setw(50) << "=" << setfill(' ') << endl;

            Sleep(100);
        }
    }
    else if (arah == 'R' || arah == 'r')
    {
        while (true)
        {
            system("cls");
            cout << setfill('=') << setw(length) << "=" << setfill(' ') << endl;

            for (int i = 0; i < length; i++)
            {
                cout << temp[i];
            }

            for (int i = length - 2; i > 1; i--)
            {
                temp[i] = temp[i - 1];
            }

            temp[1] = text[length - 1];

            for (int i = length - 1; i > 0; i--)
            {
                text[i] = text[i - 1];
            }
            text[0] = temp[length - 2];
            cout << endl;
            cout << setfill('=') << setw(length) << "=" << setfill(' ') << endl;

            Sleep(100);
        }
    }
    else
    {
        cin.clear();
        cout << "tidak sesuai syarat!!" << endl;
        Sleep(100);
        system("cls");
        goto kembali2;
    }

    cin.get();
    return 0;
}
