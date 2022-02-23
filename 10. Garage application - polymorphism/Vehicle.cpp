#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(int price, int nb_wheel){
    m_price = price;
    m_nb_wheel = nb_wheel;
}

void Vehicle::show() const{
    cout << "This is a vehicle which cost " << m_price << "." << endl;
}

Vehicle::~Vehicle(){
    //Destructor doest nothing
}

