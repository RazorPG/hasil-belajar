#ifndef __WEAPON
#define __WEAPON

#include <string>

class Weapon
{
private:
    std::string name;
    double power;

public:
    Weapon(const char *, double);
    double GetPower();
    // getter read only
    std::string getName();
};

#endif