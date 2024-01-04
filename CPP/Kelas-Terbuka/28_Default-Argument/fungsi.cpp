#include <iostream>

using namespace std;

// fungsi prototipe
double volumeKubus(double p = 1, double l = 4, double t = 2);

int main()
{

    cout << "volume kubus : " << volumeKubus(3, 5, 7) << endl;
    cout << "volume kubus : " << volumeKubus(3, 5) << endl;
    cout << "volume kubus : " << volumeKubus(3) << endl;
    cout << "volume kubus : " << volumeKubus() << endl;
    return 0;
}

// default argument atau nilai standarnya
double volumeKubus(double p, double l, double t)
{
    return p * l * t;
}