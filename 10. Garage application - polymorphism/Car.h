#ifndef DEF_CAR
#define DEF_CAR

#include <iostream>
#include "Vehicle.h"

class Car : public Vehicle{

    public:
    Car(int price, int doors);
    
    virtual void show() const;
    virtual int getNbWheels() const;

    virtual ~Car();

    private:
    int m_doors;
};

#endif