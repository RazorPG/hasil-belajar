#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(const char *name, double power)
{
    this->name = name;
    this->power = power;
}

double Weapon::GetPower()
{
    return this->power;
}

std::string Weapon::getName()
{
    return this->name;
}