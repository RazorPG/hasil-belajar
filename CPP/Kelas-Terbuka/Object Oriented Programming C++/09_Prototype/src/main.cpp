#include <iostream>
#include <string>

using namespace std;

// deklarasi class

class Player
{
public:
    string name;

    // Constructor
    Player(const char *); // dalam bentuk prototype
    void display();
    string getName();
    void setName(const char *);
};

int main(int argc, char const *argv[])
{
    Player *playerObject = new Player("Razor");
    playerObject->display();

    cout << "get name: " << playerObject->getName() << endl;
    playerObject->setName("rafid hilmi");
    playerObject->display();
    return 0;
}

// penjabaran method
Player::Player(const char *name)
{
    this->name = name;
}

void Player::display()
{
    cout << "Nama Player: " << this->name << endl;
}

string Player::getName()
{
    return this->name;
}

void Player::setName(const char *name)
{
    this->name = name;
}