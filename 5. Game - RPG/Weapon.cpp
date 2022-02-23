#include "Weapon.h"

using namespace std;

//Constructors
Weapon::Weapon(){
    m_name = "rusty sword";
    m_damage = 10;
}

Weapon::Weapon(string name, int damage){
    m_name = name;
    m_damage = damage;
}

//Methods
void Weapon::change(string name, int damage){
    m_name = name;
    m_damage = damage;
}

void Weapon::show() const{
    cout << "Weapon: " << m_name << " (Damage: " << m_damage << ")" << endl;
}

int Weapon::getDamage() const{
    return m_damage;
}