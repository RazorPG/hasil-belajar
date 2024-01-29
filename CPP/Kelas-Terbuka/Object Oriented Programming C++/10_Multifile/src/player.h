#ifndef _PLAYER
#define _PLAYER
#include <string>
// deklarasi class

class Player
{
public:
    std::string name;

    // Constructor
    Player(const char *); // dalam bentuk prototype
    void display();
    std::string getName();
    void setName(const char *);
};

#endif