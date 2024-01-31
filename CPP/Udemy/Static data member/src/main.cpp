#include <iostream>
using namespace std;

class Book
{
private:
    int quantity;

public:
    Book()
    {
        quantity = 0;
    }

    int getQuantity()
    {
        return this->quantity;
    }

    void addQuantity(int quantity)
    {
        this->quantity += quantity;
    }
    static int globalVar; // static attribute
    int biasa;

    static void printGlobalVar()
    {
        cout << "Global Var     : " << globalVar << endl;
        // cout << "Non-Static Var : " << quantity << endl;
    }
};
int Book::globalVar = 10;

int main(int argc, char const *argv[])
{
    Book::printGlobalVar(); // static bisa di akses hanya dengan menyebut classnya saja tetapi kalau fungsi bisa harus membuat object terlbih dahulu, digunakan untuk membuat program tanpa menciptakan objectnya
    return 0;
}
