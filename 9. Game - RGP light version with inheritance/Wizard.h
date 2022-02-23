#ifndef WIZARD
#define WIZARD

#include <iostream>
#include <string>
#include "Character.h"

class Wizard : public Character{

    public: 
    
    Wizard();
    Wizard(std::string name);

    void fireball(Character const &character);
    void iceball() const;

    private:
    int m_mana;

};

#endif