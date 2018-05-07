/*
 * This program will convert degrees Fahrenheit into Celsius.
 * This program will also provide a table displaying Fahrenheit temperatures 0-20
 * and their Celsius equivalent.
 */

/* 
 * File:   Gaddis_8th_Chap6_Prob7_CelciusTempTable.cpp
 * Author: Izeth Torres
 *
 * Created on May 6, 2018, 10:31 AM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

float celsius(float degFahr);

int main(int argc, char** argv) {
    
    //Variables 
    int degFahr = 0;
    int degCel = 0;
    
    //Display table degrees of Fahrenheit 0-20 to Celsius 
    cout << "This is a table that will display Fahrenheit temperatures 0-20 and "
            "its Celsius equivalents.\n";
    
    
    for (int i = 0; i < 21; i++)
    {
        degCel = celsius(i);

        cout << i << " degrees Fahrenheit is equivalent to " << degCel <<  
                " degrees Celsius.\n"; 
    }
    
    return 0;
}

//Define celsius function 
float celsius(float degFahr)
{
    float celsius =0;
    
    celsius = (5.0 /9.0) * (degFahr - 32);
    return celsius;
}
