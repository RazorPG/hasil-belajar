// preprocessing directive
#include <iostream>

// macro merubah nilai dengan nama
#define PI 3.14159265359
#define BAHASA "Indonesia"
// macro untuk fungsi
#define KUADRAT(x) (x * x)
#define MAX(A, B) ((A > B) ? A : B)
#define SUM(A, B) (A + B)
// akhir dari preprocessing direrctive

using namespace std;

int main()
{
    cout << "Nilai PI: " << PI << endl;
    cout << "bahasa : " << BAHASA << endl;

    cout << "kuadrat :" << KUADRAT(3) << endl;
    cout << "Max : " << MAX(5, 10) << endl;
    cout << "Jumlah : " << 0.1 + 0.2 << endl;

#undef BAHASA
#define BAHASA "inggris"
    cout << BAHASA << endl;

    cin.get();
    return 0;
}