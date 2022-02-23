#ifndef DEF_MOTORCYCLE
#define DEF_MOTORCYCLE

#include <iostream>
#include "Vehicle.h"

class Motorcycle : public Vehicle{

    public:
    Motorcycle(int price, double speedMax);

    virtual void show() const;
    virtual int getNbWheels() const;
    
    virtual ~Motorcycle();

    private:
    double m_speed;
};


#endif