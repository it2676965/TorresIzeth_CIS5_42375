/* 
 * File:   Ocean Levels.cpp
 * Author: Izeth Torres
 *
 * Created on March 1, 2018, 8:49 PM
 */
//This program calculates the rising ocean level after 5, 7 and 10 years.

#include <iostream>

using namespace std;

int main( )
{
    //variables
    double ocLevel = 1.5;
    double lv5years;
    double lv7years;
    double lv10years;
    
    //Calculate how many millimeters the ocean level will rise 
    lv5years = 1.5 * 5;
    lv7years = 1.5 * 7;
    lv10years = 1.5 * 10;
    
    //Display
    cout << "The ocean level will rise " << lv5years << " millimeters in 5 years." << endl;
    cout << "The ocean level will rise " << lv7years << " millimeters in 7 years." << endl;  
    cout << "The ocean level will rise " << lv10years << " millimeters in 10 years." << endl;
    
    return 0;
}

