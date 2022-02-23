#include "Motorcycle.h"

using namespace std;

Motorcycle::Motorcycle(int price, double speedMax): Vehicle(price, 2), m_speed(speedMax)
{}

void Motorcycle::show() const{
    cout << "This is a motorcycle with a maximum of speed of " << m_speed << \
            ", cost "<< m_price << \
            " and composed of " << m_nb_wheel << " wheels." << endl;
}

int Motorcycle::getNbWheels() const{
    return 2;
}

Motorcycle::~Motorcycle(){
    //Destructor does nothing.
}