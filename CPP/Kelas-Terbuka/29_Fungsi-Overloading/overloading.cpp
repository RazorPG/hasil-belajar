#include <iostream>

using namespace std;

// overlaoding = menimpa

// basic function
int luasKotak(int p, int l)
{
    int luas = p * l;
    return luas;
}

// overloading function
int luasKotak(int s)
{
    int luas = s * s;
    return luas;
}

double luasKotak(double s)
{
    double luas = s * s;
    return luas;
}

int main()
{
    cout << "luas kotak 2x3 : " << luasKotak(2, 3) << endl;
    cout << "luas kotak 2x2 : " << luasKotak(2) << endl;
    cout << "luas kotak 2.5x2.5 : " << luasKotak(2.5) << endl;
    cin.get();
    return 0;
}