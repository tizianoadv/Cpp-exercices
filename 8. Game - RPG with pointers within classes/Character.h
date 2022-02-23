#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include <string>

#include "Weapon.h"

class Character{

    public:

    //Constructors
    Character();
    Character(std::string nameWeapon, int damageWeapon);

    //Constructor of copy
    Character(Character const &characterToCopy);

    //Destructors
    ~Character();

    //Methods
    void receiveDamage(int nbDamage);
    void attack(Character &target);
    void drinkPotion(int quantityPotion);
    void changeWeapon(std::string nameNewWeapon, int damageNewWeapon);
    bool isAlive() const;
    void printState() const;

    //Operator of copy
    Character& operator=(Character const &CharacterToCopy);


    private:

    //Attributes members
    int m_life;
    int m_mana;
    Weapon *m_weapon;
};

#endif