#include <iostream>
#include <vector>

#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Truck.h"
#include "Garage.h"

using namespace std;

int main(){

    Garage g;

    //Vehicle v(5);
    //Vehicle *v = new Vehicle(5);
    g.showVehicles();

    g.addVehicle(new Car(10000,5));
    g.addVehicle(new Motorcycle(2000, 212.5));
    g.addVehicle(new Truck(50000, 100, 1995));
    g.showVehicles();

    g.delVehicle();
    g.showVehicles();

    //int i(0);

    //List of heterogeneous vehicles
    /*vector<Vehicle*> listVehicles;

    listVehicles.push_back(new Car(15000, 5));
    listVehicles.push_back(new Car(12000, 3));
    listVehicles.push_back(new Motorcycle(2000, 212.5));*/

   /* for(i=0 ; i<listVehicles.size() ; i++){
        listVehicles[i]->show();
    }

    for(i=0 ; i<listVehicles.size() ; i++){
        delete listVehicles[i];
        listVehicles[i] = 0;
    }
*/

    return 0;
}  