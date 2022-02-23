#include "Warrior.h"

using namespace std;

Warrior::Warrior(): Character(){

}

void Warrior::hitWithHammer() const{

}

void Warrior::toPresent() const{
    
    Character::toPresent();
    /*cout << "Hello, my name is " << m_name << "." << endl;
    cout << "I still have " << m_life << " points of life." << endl;*/

    cout << "I am a strong warrior" << endl;
}