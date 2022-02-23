#include "Truck.h"

using namespace std;

Truck::Truck(int price, double carryWeight, int buildYear): 
    Vehicle(price, 4), 
    m_carryWeight(carryWeight), 
    m_buildYear(buildYear){}

void Truck::show() const{
    cout << "This is a truck which was built in " << m_buildYear \
         << " which has a limit of weigth of " << m_carryWeight \
         << ", cost " << m_price 
         << " and composed of " << m_nb_wheel << " wheels." << endl;
}

int Truck::getNbWheels() const{
    return 4;
}

Truck::~Truck(){
    //Destructor does nothing.
}