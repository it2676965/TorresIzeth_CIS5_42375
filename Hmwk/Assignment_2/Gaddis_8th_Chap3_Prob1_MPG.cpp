/* 
 * File:   Miles Per Gallon.cpp
 * Author: Izeth Torres
 *
 * Created on March 8, 2018, 7:01 PM
 */
//This program calculates how many miles a car can run on a gallon of gas

#include <iostream>

using namespace std;
main ( )
{
int gallons, miles, mpg;

cout << "This program calculates the miles per gallon a car can run on.\n";
cout << "How many gallons of gas can your car hold? ";
cin >> gallons;

cout << "How many miles can you drive in a full tank of gas?\n";
cin >> miles;

mpg= miles / gallons;
cout<< "The amount of miles your car can drive per gallon of gas is " <<mpg<< endl;

        return 0;
}
