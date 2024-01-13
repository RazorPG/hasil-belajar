#include <iostream>
#include "bersama.h"
#include "foo.h"
//   #define FOO "ini adalah foo dalam foo.h"
#include "bar.h"
//  #ifdef FOO
//  #else
//  #define FOO "ini adalah foo dalam bar.h"
//  #endif

using namespace std;
// // ifdef
// #ifdef KUADRAT
// #define ADA "KUADRAT ADA"
// #else
// #define ADA "KUADRAT TIDAK ADA"
// #endif

// // ifndef
// #ifndef BAKA
// #define AHA "FILE BARU"
// #else
// #define AHA "FILE LAMA"
// #endif

int main()
{
    mahasiswa mahasiswa1;
    mahasiswa1.NIM = 10;
    cout << mahasiswa1.NIM << endl;
    // cout << ADA << endl;
    // cout << AHA << endl;
    // cout << FOO << endl;
    cin.get();
    return 0;
}