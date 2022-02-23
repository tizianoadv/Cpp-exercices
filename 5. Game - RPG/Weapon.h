#ifndef WEAPON 
#define WEAPON 

#include <iostream>
#include <string>

class Weapon{

    public:

    //Constructors
    Weapon();
    Weapon(std::string name, int damage);

    //Methods
    void change(std::string name, int damage);
    void show() const;
    int getDamage() const;

    
    private:
    
    //Attributes members
    std::string m_name;
    int m_damage;
    
};

#endif