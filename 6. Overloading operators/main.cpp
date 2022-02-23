#include <iostream>

#include "Time.h"

using namespace std;

int main(){

    Time time1(0, 10, 28), time2(0, 10, 28);
    Time result;

    // Test with operator +
    time1.show();
    cout << "+" << endl;
    time2.show();
    result = time1 + time2;
    cout << "=" << endl;
    result.show();

    //Print with operator <<
    cout << endl;
    cout << time1 << " and " << time2 <<endl;

    //Test equality
    if(time1 == time2)
        cout << "Times are equal !" << endl;
    else
        cout << "Times are not equal !" << endl;

    //Test diffence
    if(time1 != time2)
        cout << "Times are different !" << endl;
    else
        cout << "Times are not different !" << endl;

    //Test inferiority
    if(time2 < time1)
        cout << "Time 2 is lower than time 1!" << endl;
    else
        cout << "Time 2 is not lower than time 1!" << endl;

    // Test with operator +=
    cout << endl;
    time1.show();
    cout << "+=" << endl;
    time2.show();
    time1 += time2;
    cout << "=" << endl;
    time1.show();

    //Print with operator <<
    cout << endl;
    cout << time1 << " and " << time2 <<endl;

    //Test equality
    if(time1 == time2)
        cout << "Times are equal !" << endl;
    else
        cout << "Times are not equal !" << endl;

    //Test inferiority
    if(time2 < time1)
        cout << "Time 2 is lower than time 1!" << endl;
    else
        cout << "Time 2 is not lower than time 1!" << endl;

    return 0;
}