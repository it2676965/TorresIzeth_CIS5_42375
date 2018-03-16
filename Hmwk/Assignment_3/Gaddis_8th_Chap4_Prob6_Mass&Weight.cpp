/* 
 * File:   Mass and Weight.cpp
 * Author: Izeth Torres 
 *
 * Created on March 15, 2018, 4:14 PM
 */
//This program asks a user to enter an objects mass and the weight in newtons
//is calculated. If object weighs more than 1,000 newtons then it is too heavy.
//If the object weighs less than 10 newtons then it is too light

#include <iostream>
#include <iomanip>

using namespace std;

main ()
{
    double mass, weight;
    
    cout << "This program determines if an object is too heavy or too light\n"
            "based on the mass you enter.\n";
    cout << "Please enter the objects mass in kilograms: \n";
    cin >> mass;
    
    //Calculate weight of object 
    weight = (mass * 9.8);
   
    cout << setprecision(2) << fixed << showpoint;
    if (weight > 1000)
    {
        cout << "Your object weighs " << weight << " newtons\n";
        cout << "This object is too heavy\n";
    }
    else if (weight < 10)
        {
            cout << "Your object weighs " << weight << " newtons\n";
            cout << "This object is too light\n";
        }
            else
            {
                cout << "Your object weighs " << weight << " newtons\n";
            }
    return 0;
    
}