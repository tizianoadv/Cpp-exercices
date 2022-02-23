#include "Car.h"

using namespace std;

Car::Car(int price, int doors): Vehicle(price, 4), m_doors(doors)
{}

void Car::show() const{
    cout << "This is a car which has " << m_doors << \
            " doors, cost " << m_price << "." << \
            " and composed of "<< m_nb_wheel << " wheels." << endl;
}

int Car::getNbWheels() const{
    return 4;
}

Car::~Car(){
    //Destructor does nothing.
}