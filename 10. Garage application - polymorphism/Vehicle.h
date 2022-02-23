#ifndef DEF_VEHICLE
#define DEF_VEHICLE

#include <iostream>

class Vehicle{

    public:
    Vehicle(int price, int nb_wheel);
    
    virtual void show() const;

    virtual int getNbWheels() const = 0; //Pure virtual function

    virtual ~Vehicle();

    protected:
    int m_price;
    int m_nb_wheel;
};

#endif