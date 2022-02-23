#ifndef ZFRACTION  
#define ZFRACTION

#include <iostream>

class ZFraction{

    public:

    //Constructors
    ZFraction();
    ZFraction(int num);
    ZFraction(int num, int den);

    //Methods
    void show(std::ostream &flux) const;
    void simplication();

    //Functions methods
    ZFraction& operator+=(ZFraction const &fraction);
    ZFraction& operator*=(ZFraction const &fraction);
    bool isEqual(ZFraction const &fonction) const;
    bool lowerThan(ZFraction const &fonction) const;

    private:

    int m_numerator;
    int m_denominator;

};

//Functions
int pgcdFunction(int a, int b);

//Functions operators
std::ostream& operator<<(std::ostream &flux, ZFraction const &fraction);

ZFraction operator+(ZFraction const &f1, ZFraction const &f2);

ZFraction operator*(ZFraction const &f1, ZFraction const &f2);

bool operator==(ZFraction const &f1, ZFraction const &f2);

bool operator!=(ZFraction const &f1, ZFraction const &f2);

bool operator<(ZFraction const &f1, ZFraction const &f2);

bool operator>(ZFraction const &f1, ZFraction const &f2);

bool operator<=(ZFraction const &f1, ZFraction const &f2);

bool operator>=(ZFraction const &f1, ZFraction const &f2);

#endif