#ifndef DEF_TRUCK
#define DEF_TRUCK

#include <iostream>
#include "Vehicle.h"

class Truck : public Vehicle{

    public: 
    Truck(int price, double carryWeight, int buildYear);

    virtual void show() const;
    virtual int getNbWheels() const;

    virtual ~Truck();

    private:
    double m_carryWeight;
    int m_buildYear;
};

#endif