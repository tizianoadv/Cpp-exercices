#ifndef TIME
#define TIME

#include <iostream>

class Time{

    public:
    
    //Constructors
    Time();
    Time(int hour, int minute, int second);

    //Methods
    void show() const;
    void show(std::ostream &flux) const;
    bool isEqual(Time const &b) const;
    bool isLower(Time const &b) const;

    //Functions operators
    Time& operator+=(Time const& time2);

    private:
    int m_hour;
    int m_minute;
    int m_second;

};

//Functions operators

//0. add two objects
Time operator+(Time const& a, Time const& b); //const -> to not modify the objects

//1. Print objects
std::ostream& operator<<(std::ostream& flux, Time const& time);

//2. Equality between 2 objects
bool operator==(Time const &a, Time const &b);

//3. Difference between 2 objects
bool operator!=(Time const &a, Time const &b);

//4. Inferiority between 2 objects
bool operator<(Time const &a, Time const &b);


#endif