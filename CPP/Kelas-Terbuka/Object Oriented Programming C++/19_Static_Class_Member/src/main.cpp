#include <iostream>
#include <string>

using namespace std;

class Hero
{
private:
    string name;
    double health;

public:
    static int count;
    Hero(const char *name, double health)
    {
        this->name = name;
        this->health = health;

        count++;
    }

    // destructor
    ~Hero()
    {
        count--;
        cout << this->name << " sudah di hapus guys" << endl;
    }

    void display()
    {
        cout << "Name\t: " << this->name << endl;
        cout << "Health\t: " << this->health << endl;
    }
};

int Hero::count = 0;

int main(int argc, char const *argv[])
{
    Hero hero1 = Hero("razor", 100);
    hero1.display();
    cout << "jumlah object hero adalah : " << hero1.count << endl;
    cout << "jumlah object hero dari class :" << Hero::count << endl;

    Hero hero2 = Hero("rgb", 100);
    hero2.display();
    cout << "jumlah object hero adalah : " << hero2.count << endl;
    cout << "jumlah object hero dari class :" << Hero::count << endl;
    cout << Hero::count << endl;

    Hero *hero3 = new Hero("xebec", 105);
    hero3->display();
    cout << "jumlah object hero adalah : " << hero3->count << endl;
    cout << "jumlah object hero dari class :" << Hero::count << endl;

    Hero *hero4 = new Hero("trafalgar", 95);
    hero3->display();
    cout << "jumlah object hero adalah : " << hero4->count << endl;
    cout << "jumlah object hero dari class :" << Hero::count << endl;

    cout << "delete object" << endl;
    delete hero3;
    cout << "jumlah object hero dari class :" << Hero::count << endl;

    return 0;
}
