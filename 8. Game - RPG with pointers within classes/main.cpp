#include <iostream>

#include "Character.h"

using namespace std;

int main(){
    //Creation of 2 characters
    Character david, goliath("sharpened sword", 20);
    Character ayrton, charles;

    //Use of the CONSTRUCTOR of copy 
    //Michel has the same attributes as Ayrton 
    //But their pointer m_weapon don't point on the same m_weapon object
    Character michel(ayrton); 

    //Use of the OPERATOR of copy 
    //Charles has the same attributes as michel 
    //But their pointer m_weapon don't point on the same m_weapon object
    charles = michel;

    //*** Scenario ***
    
    //*** Combat ***
    goliath.attack(david);              //0. Goliath attacks david
    david.drinkPotion(20);              //1. David gathers 20 of life by drinking a potion
    goliath.attack(david);              //2. Goliath attacks david again
    david.attack(goliath);              //3. David attacks goliath
    goliath.changeWeapon("ak74-u", 40); //4. Goliath change his weapon
    goliath.attack(david);              //5. Goliath attacks david once again

    //*** Time break ***
    cout << "David" << endl;
    david.printState();
    cout << endl << "Goliath" << endl;
    goliath.printState();

    return 0;
}
