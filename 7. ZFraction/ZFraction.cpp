#include "ZFraction.h"

using namespace std;

//Constructors
ZFraction::ZFraction(){
    m_numerator = 0;
    m_denominator = 1;
}

ZFraction::ZFraction(int num){
    m_numerator = num;
    m_denominator = 1;
}

ZFraction::ZFraction(int num, int den){
    m_numerator = num;
    m_denominator = den;
}

//Mehtods
void ZFraction::show(std::ostream &flux) const{

    flux << m_numerator << "/" << m_denominator;
}


// Functions
int pgcdFunction(int a, int b){
    
    while( b!= 0){
        const int t = b;
        b = a % b;
        a = t;
    }

    return a;
}

void ZFraction::simplication(){
    int pgcd = 0;
    pgcd = pgcdFunction(m_numerator,m_denominator);
    
    if(pgcd != 0){
        m_numerator /= pgcd;
        m_denominator /= pgcd;
    }
}

bool ZFraction::isEqual(ZFraction const &fonction) const{
    bool result = false;

    if((m_denominator == fonction.m_denominator) && (m_numerator == fonction.m_numerator))
        result = true;
    
    return result;

}

bool ZFraction::lowerThan(ZFraction const &fonction) const{
    int numf1 = 0, denf1 = 0;
    int numf2 = 0, denf2 = 0;
    bool result = false;

    if(m_denominator == fonction.m_denominator){

        if(m_numerator < fonction.m_numerator)
            result = true;

    }else{

        numf1 = m_numerator * fonction.m_denominator;
        numf2 = m_denominator * fonction.m_numerator;

        if(numf1 < numf2)
            result = true;
    }
    
    return result;
}

//Functions operators
ostream& operator<<(ostream &flux, ZFraction const &fraction){
    
    fraction.show(flux);

    return flux;
}


ZFraction operator+(ZFraction const &f1, ZFraction const &f2){

    ZFraction copy(f1);

    copy += f2;

    return copy;
}

ZFraction& ZFraction::operator+=(ZFraction const &fraction){

    int numf1 = 0, denf1 = 0;
    int numf2 = 0, denf2 = 0;
    int pgcd = 0;

    if(m_denominator == fraction.m_denominator){
        m_numerator = m_numerator + fraction.m_numerator;
    }else{

        numf1 = m_numerator * fraction.m_denominator;
        denf1 = m_denominator * fraction.m_denominator;

        numf2 = fraction.m_numerator * m_denominator;
        denf2 = fraction.m_denominator * m_denominator;

        m_numerator = numf1 + numf2;
        m_denominator = denf1;
    }

    simplication();

    return *this;
}

ZFraction operator*(ZFraction const &f1, ZFraction const &f2){
    ZFraction copy(f1);

    copy *= f2;

    return copy;
}

ZFraction& ZFraction::operator*=(ZFraction const &fonction){
    
    m_numerator *= fonction.m_numerator;
    m_denominator *= fonction.m_denominator;

    simplication();

    return *this;
}

bool operator==(ZFraction const &f1, ZFraction const &f2){
    return f1.isEqual(f2);
}

bool operator!=(ZFraction const &f1, ZFraction const &f2){
    return !(f1 == f2);
}

bool operator<(ZFraction const &f1, ZFraction const &f2){
    bool result = false;

    if (f1 != f2){

        if (f1.lowerThan(f2))
            result = true;
    }
        
    return result;
}

bool operator>(ZFraction const &f1, ZFraction const &f2){

    bool result = false;

    if ((f1 != f2) && (!(f1 < f2)))
        result = true;
        
    return result;
}

bool operator<=(ZFraction const &f1, ZFraction const &f2){
    bool result = false;

    if (!(f2.lowerThan(f1)))
        result = true;
        
    return result;
}

bool operator>=(ZFraction const &f1, ZFraction const &f2){
    bool result = false;

    if (!(f1.lowerThan(f2)))
        result = true;
        
    return result;
}