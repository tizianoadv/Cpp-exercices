#ifndef DEF_GARAGE
#define DEF_GARAGE

#include <iostream>
#include <vector>
#include "Vehicle.h"

class Garage{

    public:
    virtual void addVehicle(Vehicle *vehicle); 
    virtual void delVehicle();
    void showVehicles() const;

    private:
    std::vector<Vehicle*> m_listVehicles;
};

#endif