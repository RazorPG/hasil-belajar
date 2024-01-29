#include <iostream>
#include <string>

using namespace std;

template <typename T, typename U>
auto MAX(T a, U b)
{
    return (a > b) ? T(a) : U(b);
}

int main()
{
    int a = 10;
    string b = "test";
    double c = 15.2983;
    float d = 17.43f;
    auto e = MAX(c, a);

    cout << a << " tipe: " << typeid(a).name() << endl;
    cout << b << " tipe: " << typeid(b).name() << endl;
    cout << c << " tipe: " << typeid(c).name() << endl;
    cout << d << " tipe: " << typeid(d).name() << endl;
    cout << e << " tipe: " << typeid(e).name() << endl;

    cin.get();
    return 0;
}