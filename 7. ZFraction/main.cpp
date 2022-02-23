#include <iostream>
#include "ZFraction.h"

using namespace std;

int main(){

    ZFraction a(4,5); //Create a fraction worth 1/5
    ZFraction b(2);
    ZFraction c,d;

    c = a + b;
    d = a * b;

    cout << a << " + " << b << " = " << c << endl;
    cout << a << " * " << b << " = " << d << endl;

    if( a == b)
        cout << "a is equal to b" << endl;
    else
        cout << "a is non equal to b" << endl;

    if( a != b)
        cout << "a is different from b" << endl;
    else
        cout << "a is not different from b" << endl;

    if( a < b)
        cout << "a is lower than b" << endl;
    else
        cout << "a is not lower than b" << endl;

    if( a > b)
        cout << "a is greater than b" << endl;
    else
        cout << "a is not greater than b" << endl;

    if( a >= b)
        cout << "a is greater than b or equal to b" << endl;
    else
        cout << "a is not greater than b or equal to b" << endl;

    if( a <= b)
        cout << "a is lower than b or equal to b" << endl;
    else
        cout << "a is not lower than b or equal to b" << endl;

    return 0;
}