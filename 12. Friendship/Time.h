#ifndef TIME
#define TIME

#include <iostream>

class Time{

    public:
    //Constructors
    Time(int hour, int minute, int second);

    private:
    //Method private
    void show(std::ostream &flux) const; 

    int m_hour;
    int m_minute;
    int m_second;

    //Functions operators
    //1. Print objects
    friend std::ostream& operator<<(std::ostream& flux, Time const& time);//Methods Friend

};

#endif