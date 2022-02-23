/**
 * @file main.cpp
 * @author tnardoneadv https://github.com/tnardoneadv
 * @brief Basic Math operation
 * @version 0.1
 * @date 2021-12-07
 * 
 * @copyright Copyright (c) 2021 
 */

#include <iostream> // For I/O functions
#include <cmath> // Basic Math functions

using namespace std;

int main(){
    
    double a(0), b(0);
    double resultADD(0), resultMULT(0), resultDIV(0), resultPOW(0), resultSQRT(0);

    cout << "Welcome to the addition program!" << endl;

    cout << "Give the first number : ";
    cin >> a; //Get the first number from the user

    cout << "Give the second number : ";
    cin >> b; //Get the second number from the user

    resultADD = a + b; //Addition operation
    resultMULT = a * b;
    resultDIV = a / b;
    resultPOW = pow(a,b);
    resultSQRT = sqrt(a);

    cout << "The result of the addition is : " ;
    cout << a << " + " << b << " = " << resultADD << endl; // Print the result of the addition

    cout << "The result of the multiplication is : " ;
    cout << a << " x " << b << " = " << resultMULT << endl; // Print the result of the Multiplication

    cout << "The result of the division is : " ;
    cout << a << " / " << b << " = " << resultDIV << endl; // Print the result of the Division

    cout << "The result of the pow() fonction : " ;
    cout << a << " ^ " << b << " = " << resultPOW << endl; // Print the result of the pow function
 
    cout << "The result of the sqrt() fonction : " ;
    cout << "sqrt(" << a << ") = " << resultSQRT << endl; // Print the result of the sqrt fonction

    return 0;
}