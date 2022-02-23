#include <iostream>
#include "Character.h"
using namespace std;

int main(){

    cout << "Currently there are " << Character::nbObjects() << " character in the game." << endl;

    Character goliath("Goliath the great");
    Character david("David the powerful");

    cout << "Currently there are " << Character::nbObjects() << " character in the game." << endl;

    return 0;
}