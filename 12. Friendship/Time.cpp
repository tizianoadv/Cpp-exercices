#include "Time.h"

using namespace std;

//Constructor
Time::Time(int hour, int minute, int second):m_hour(hour), m_minute(minute), m_second(second){}

//Methods
void Time::show(ostream &flux) const{
    flux << m_hour << "h" << m_minute << "m" << m_second << "s";
}

ostream& operator<<(ostream &flux, Time const &time){
    time.show(flux);
    return flux;
}
