/*
 * This program calculates the kinetic energy an object in motion has.
 * It will prompt the user to enter mass of the object in kilograms and the 
 * velocity in meters per second. 
 */

/* 
 * File:   Gaddis_8th_Chap6_Prob6_KineticEnergy.cpp
 * Author: Izeth Torres 
 *
 * Created on May 6, 2018, 9:14 AM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double kineticEnergy(int mass, int velocity);

int main(int argc, char** argv) {
    
    //Variables 
    double kinEner = 0;
    int mass = 0;
    int velocity = 0;
    
    //Display program into message and request data
    cout << "This program will determine the kinetic energy of an object, \n"
            "based on its mass and velocity.\n"
            "Please enter the mass of the object in kilograms.\n";
    cin >> mass;
    cout << "Please enter the velocity in meters per second.\n";
    cin >> velocity;
        
    //Call for kineticEnergy function
    kinEner = kineticEnergy(mass, velocity);
    
    cout << "The kinetic energy of your object is " << kinEner << endl;

    return 0;
}

//Define kineticEnergy function 
double kineticEnergy(int mass, int velocity)
    {        
        return (.5 * mass * (pow(velocity, 2)));
    }


