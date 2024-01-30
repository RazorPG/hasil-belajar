#include <iostream>
#include <string>

using namespace std;

class Hero
{
public:
    string name;

public:
    Hero(const char *name)
    {
        this->name = name;
    }

    // setter
    void setName(const char *name)
    {
        this->name = name;
    }

    // getter
    string getName() const
    {
        return this->name;
    }
    // member function ini tidak akan bisa , karena karena attributenya tidak const
    // void setName(const char *name)
    // {
    //     this->name = name;
    // }

    void display() const
    {
        cout << "Name : " << this->name << endl;
    }
};

int main(int argc, char const *argv[])
{
    Hero hero1 = Hero("Razor");
    const Hero hero2 = Hero("Boga"); // object konstan tidak bisa kita rubah
    hero1.display();
    hero1.name = "luffy";
    hero1.display();
    hero1.setName("kratos");
    hero1.display();

    hero2.display();
    // hero2.name = "zoro"; // tidak bisa dirubah data numbernya
    hero2.display();
    // hero2.setName("sukuna"); // tidak bisa
    hero2.display();
    cout << hero2.getName() << endl; // karena member function const dan tidak merubah apapun

    // kesimpulan
    // 1. jika  object nya tidak const, maka seluruh member bisa dipanggil
    // 2. jika object nya const, maka hanya function/method yang const
    // yang dapat dipanggil

    return 0;
}
