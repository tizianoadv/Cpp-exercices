#ifndef WARRIOR
#define WARRIOR

#include <iostream>
#include <string>
#include "Character.h"

class Warrior : public Character{

    public:
    Warrior();
    void hitWithHammer() const;

    void toPresent() const;
};

#endif