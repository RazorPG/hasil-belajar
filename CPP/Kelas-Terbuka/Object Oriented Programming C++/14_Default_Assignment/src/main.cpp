#include <iostream>
#include <string>

using namespace std;

class Hero
{
private:
    string name;
    double health;
    double power;

public:
    Hero(const char *name = "Player", double health = 100, double power = 50)
    {
        this->name = name;
        this->health = health;
        this->power = power;
    }

    void display(){
        cout << "\nPlayer name = " << this->name << endl;
        cout << "Health = " << this->health << endl;
        cout << "Power = " << this->power << endl;
    }
};

int main(int argc, char const *argv[])
{
    Hero * hero1 = new Hero("Spiderman", 180, 80); // di heap
    hero1->display();

    Hero hero2 = Hero(); // di stack
    hero2.display();

    Hero * hero3 = new Hero("Venom", 300);
    hero3->display();

    Hero * hero4 = new Hero("Sandman");
    hero4->display();

    return 0;
}
