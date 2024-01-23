#include <iostream>
#include <windows.h>
#include <gdiplusgraphics.h>

#define maxHour 24
#define maxMinute 60
#define maxSecond 60
unsigned int hour;
unsigned int minute;
unsigned int second;

int option;

void invalid();

using namespace std;

int main()
{
    // Kode untuk menggambar lingkaran dengan GDI+
    Graphics graphics(hdc); // hdc adalah handle ke konteks gambar (misalnya, dari fungsi Paint)

    graphics.FillEllipse(&SolidBrush(Color(255, 0, 0)), 10, 10, 100, 100);

kembali:
    system("cls");
    cout << "pilih [1] untuk jam digital" << endl;
    cout << "pilih [2] untuk alarm" << endl;
    cout << "jawaban anda : ";
    cin >> option;
    fflush(stdin);
    if (!(option == 1 || option == 2))
    {
        invalid();
        goto kembali;
    }

    system("cls");
    cout << "masukkan jam : ";
    cin >> hour;
    cout << "masukkan menit : ";
    cin >> minute;
    cout << "masukkan detik : ";
    cin >> second;

    if (!(hour >= maxHour || minute >= maxMinute || second >= maxSecond))
    {
        while (true)
        {
            system("cls");
            if (option == 1)
            {
                while (hour <= maxHour)
                {
                    while (minute <= maxMinute)
                    {
                        while (second <= maxSecond)
                        {
                            if (second == 60)
                            {
                                second = 0;
                                minute++;
                                if (minute == 60)
                                {
                                    minute = 0;
                                    hour++;
                                    if (hour == 24)
                                    {
                                        hour = 0;
                                    }
                                }
                            }
                            cout << hour << ":" << minute << ":" << second << endl;
                            second++;
                            Sleep(1000);
                            system("cls");
                        }
                    }
                }
            }
            else if (option == 2)
            {
                while (hour >= 0)
                {
                    while (minute >= 0)
                    {
                        while (second >= 0)
                        {
                            cout << hour << ":" << minute << ":" << second << endl;
                            if (hour == 0 && minute == 0 && second == 0)
                            {
                                cout << "alarm sudah time out!!!" << endl;
                                Sleep(1000);
                                exit(0);
                            }
                            else if (second == 0 && minute >= 1)
                            {
                                second = 60;
                                minute--;
                                if (minute == 0 && hour >= 1)
                                {
                                    minute = 60;
                                    hour--;
                                }
                            }

                            second--;
                            Sleep(1000);
                            system("cls");
                        }
                    }
                }
            }
        }
    }
    else
    {
        invalid();
        goto kembali;
    }

    cin.get();
    return 0;
}

void invalid()
{
    cin.clear();
    system("cls");
    cout << "nilai tidak valid!!" << endl;
    Sleep(1000);
}