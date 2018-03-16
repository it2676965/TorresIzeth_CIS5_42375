/* 
 * File:   Minimum/Maximum.cpp
 * Author: Izeth Torres
 *
 * Created on March 15, 2018, 1:36 PM
 */
//This program asks the user to enter two numbers and it is determined which is
//smaller and which is larger
#include <iostream>

using namespace std;

main ( )
{
    int num1, num2;

    //Ask the user to enter two different numbers 
    cout << "This program will have you enter two numbers and determine which \n"
            "number is smaller and which one is larger.\n";
    cout << "Please enter a number.\n";
    cin >> num1;
    cout << "Please enter another number.\n";
    cin >> num2;
    
    if (num1 > num2)
        cout << num1 << " is greater than " << num2 << endl;
    if (num2 > num1)
        cout << num2 << " is greater than " << num1 << endl;
    
    return 0;
}

