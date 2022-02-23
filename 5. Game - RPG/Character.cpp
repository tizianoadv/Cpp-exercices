#include "Character.h"

using namespace std;

//Constructors
Character::Character(){
    m_life = 100;
    m_mana = 100;
}

Character::Character(string nameWeapon, int damageWeapon): m_life(100), m_mana(100), m_weapon(nameWeapon, damageWeapon){
    
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
    target.receiveDamage(m_weapon.getDamage());
}

void Character::drinkPotion(int quantityPotion){
    //Increase the life number
    m_life += quantityPotion;
    if(m_life > 100){
        m_life = 100;
    }
}

void Character::changeWeapon(string nameNewWeapon, int damageNewWeapon){
    m_weapon.change(nameNewWeapon, damageNewWeapon);
}

bool Character::isAlive() const{
    if(m_life > 0){
        return true;
    }else{
        return false;
    }
}

void Character::printState() const{
    cout << "Life: " << m_life << endl;
    cout << "Mana: " << m_mana << endl;
    m_weapon.show();
}