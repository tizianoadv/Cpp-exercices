#include "Time.h"

using namespace std;

//Constructors
Time::Time(){
    m_hour = 0;
    m_minute = 0;
    m_second = 0;
}

Time::Time(int hour, int minute, int second):m_hour(hour), m_minute(minute), m_second(second){}

//Methods
void Time::show() const{
    cout << m_hour << "h" << m_minute << "m" << m_second << "s" << endl;
}

void Time::show(ostream &flux) const{
    flux << m_hour << "h" << m_minute << "m" << m_second << "s";
}

bool Time::isEqual(Time const &b)const{ 
    if(m_hour   == b.m_hour && \
       m_minute == b.m_minute && \
       m_second == b.m_second){

           return true;
       }
    else{
           return false;
    }
}

bool Time::isLower(Time const &b) const{
    if(m_hour < b.m_hour)
        return true;
    else if(m_hour == b.m_hour && m_minute < b.m_minute)
        return true;
    else if(m_hour == b.m_hour && m_minute == b.m_minute && m_second < b.m_second)
        return true;
    else
        return false;
}

//Function operators
Time operator+(Time const& a, Time const& b){
    Time copie(a);
    copie += b;
    return copie;
}

Time& Time::operator+=(Time const& time2){
    //1. Add seconds
    m_second += time2.m_second;

    //1.1. If second > 60 -> add minutes and set second between 0 - 60
    m_minute += m_second / 60;
    m_second %= 60;

    //2. Add minutes
    m_minute += time2.m_minute;
    //2.1. If minutes > 60 -> add hours and set minutes between 0 - 60
    m_hour += m_minute / 60;
    m_minute %= 60;

    //3. Add hours
    m_hour += time2.m_hour;

    return *this;
}

ostream& operator<<(ostream &flux, Time const &time){
    time.show(flux);
    return flux;
}

bool operator==(Time const &a, Time const &b){
    return a.isEqual(b);
}

bool operator!=(Time const &a, Time const &b){
    if(a == b)
        return false;
    else
        return true;
}

bool operator<(Time const &a, Time const &b){
    if(a.isLower(b))
        return true;
    else 
        return false;
}