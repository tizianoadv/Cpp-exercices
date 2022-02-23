#include "Character.h"

using namespace std;

int Character::counter = 0;

Character::Character(string name){
    m_name = name;
    counter++;
}

Character::~Character(){
    if(counter > 0)
        counter--;
}

int Character::nbObjects(){
    return counter;
}