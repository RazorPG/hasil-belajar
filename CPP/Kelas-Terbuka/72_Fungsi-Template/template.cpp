#include <iostream>
#include <string>

using namespace std;

template <typename T>
void print(T data)
{
    cout << data << endl;
}

template <typename T>
int toInt(T data)
{
    return int(data);
}

template <typename S, typename T, typename U>
S max(T data1, U data2)
{
    return (data1 > data2) ? data1 : data2;
}

int main()
{
    print(6);
    print(12.32);
    print('r');
    print(toInt(36.34214));
    print(max(3, 5));
    print<int>('d');
    print(max<double, double, int>(10.23, 10));

    cin.get();
    return 0;
}