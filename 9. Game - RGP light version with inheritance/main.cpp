#include <iostream>

#include "Character.h"
#include "Warrior.h"
#include "Wizard.h"

using namespace std;

int main(){
    //Creation of 2 characters
    Character myCharacter;
    Warrior myWarrior;
    Character michel("michel");

    //Build steps:
    //Call constructor of Wizzard
    //Call constructor of Character
    //Return to constructor of Wizzard
    Wizard myWizard("john");

    //*** Scenario ***
    myCharacter.attack(myWarrior);
    myCharacter.attack(myCharacter);
    

    //Prototype :  void fireball(Character const &character);
    //Works because a warrior is a character
    myWizard.fireball(myWarrior);


    michel.toPresent();
    myWarrior.toPresent();
    
    return 0;
}
