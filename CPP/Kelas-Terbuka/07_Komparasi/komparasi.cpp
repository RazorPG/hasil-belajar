#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 7;

    bool hasil1, hasil2;

    // komparasi, relasion expression

    // sebanding ==
    hasil1 = (a == b);
    cout << hasil1 << endl;

    // tidak sebanding !=
    hasil2 = (a != b);
    cout << hasil2 << endl;

    // kurang dari <
    hasil1 = (a < b);
    cout << hasil1 << endl;

    // lebih dari >
    hasil2 = (a > b);
    cout << hasil2 << endl;

    // kurang dari sama dengan <=
    hasil1 = (a <= b);
    cout << hasil1 << endl;

    // lebih dari sama dengan >=
    hasil2 = (a >= b);
    cout << hasil2 << endl;

    cin.get();
    return 0;
}