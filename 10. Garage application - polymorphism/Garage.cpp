#include "Garage.h"

using namespace std;

void Garage::addVehicle(Vehicle *vehicle){
    m_listVehicles.push_back(vehicle);
}

void Garage::delVehicle(){
    int i = 0;
    for(i=m_listVehicles.size() ; i > 0 ; i--){
        delete m_listVehicles[i-1];
        m_listVehicles[i-1] = 0;
        m_listVehicles.pop_back();
    }

}

void Garage::showVehicles() const{
    int i = 0;
    cout << "*** Garage presentation ***" << endl;
    for(i=0 ; i<m_listVehicles.size() ; i++){
        cout << "Vehicle[" << i+1 << "] : ";
        m_listVehicles[i]->show();
    }
}