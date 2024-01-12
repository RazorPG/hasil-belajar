#include <iostream>

#define ID 1

#if ID == 1
#define LANG "Indonesia"
#else
#define LANG "English"
#endif

using namespace std;

int main()
{
    cout << "bahasa dipilih: " << LANG << endl;

    cin.get();
    return 0;
}