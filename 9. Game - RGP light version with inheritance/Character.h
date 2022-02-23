#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include <string>

class Character{

    public:

    //Constructors
    Character();
    Character(std::string name);

    //Methods
    void receiveDamage(int nbDamage);
    void attack(Character &target);

    //Mask
    void toPresent() const;

    
    protected: //Accessible from child classes only
    //Attributes members
    int m_life;
    std::string m_name;

};

#endif