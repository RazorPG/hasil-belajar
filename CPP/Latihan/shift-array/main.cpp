#include <iostream>
#include <unistd.h>
#include <cstring>

using namespace std;

int main()
{
    char text[100];
    char blank;
    int sum = 0;
    int length;

    cout << "masukkan sebuah kalimat : ";
    cin.getline(text, 100);
    length = strlen(text);
    char temp[length];
    for (int i = 0; i < length; i++)
    {
        temp[i] = ' ';
    }
    while (true)
    {
        system("cls");
        for (int i = 0; i < length; i++)
        {
            cout << temp[i];
        }
        blank = text[sum++];
        temp[length - 1] = blank;
        for (int i = 0; i < length - 1; i++)
        {
            temp[i] = temp[i + 1];
        }
        sum++;
        if (sum == (length - 1))
        {
            sum = 0;
        }

        cout << endl;
        sleep(1);
    }

    cin.get();
    return 0;
}