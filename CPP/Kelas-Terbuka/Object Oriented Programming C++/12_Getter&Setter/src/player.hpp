#ifndef _PLAYER
#define _PLAYER

#include <string>
#include <iostream>

class Player
{
private:
    std::string name;
    double attackPower;
    int level;
    int exp;

public:
    Player(const char *);
    // getter, ini artinya kita akan membuat attribute menjadi read only
    std::string getName();

    // setter, ini adalah write data ke class
    void addExp(int);
    void display();
};

#endif