#include "Character.h"

using namespace std;

//Constructors
Character::Character(){
    m_life = 100;
    m_name = "jack";
}

Character::Character(string name): m_name(name), m_life(100){

}

//Methods
void Character::receiveDamage(int nbDamage){
    
    //Remove the number of damage received from the number of life of the character
    m_life -= nbDamage;

    //If life is negative -> life = 0
    if(m_life < 0){
        m_life = 0;
    }
}

void Character::attack(Character &target){
    //Reduce the life of the target
    target.receiveDamage(10);
}


void Character::toPresent() const{
    cout << "Hello, my name is " << m_name << "." << endl;
    cout << "I still have " << m_life << " points of life." << endl;
}