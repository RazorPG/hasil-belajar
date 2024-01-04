#include <iostream>

using namespace std;

// global scope
int x = 10; // variabel global

int ambilGlobal()
{
    return x; // mengambil variabel global
}

int xLocal()
{
    int x = 5; // variabel local scope xLocal()
    return x;
}

int main()
{
    cout << "1. variabel global : " << x << endl;
    int x = 8; // variabel local untuk main
    cout << "2. variabel local main : " << x << endl;
    cout << "3. varibel ambilGlobal : " << ambilGlobal() << endl;
    cout << "4. variabel local main : " << x << endl;
    cout << "5. variabel xLocal : " << xLocal() << endl;
    cout << "6. variabel local main : " << x << endl;

    cout << "7. variabel local main : " << x << endl;
    {
        cout << "8. variabel local main : " << x << endl;
        // block scope
        int x = 1;
        cout << "9. variabel local block : " << x << endl;
        cout << "10. variabel global : " << ::x << endl;
    }
    cout << "11. variabel local main : " << x << endl;

    cin.get();
    return 0;
}