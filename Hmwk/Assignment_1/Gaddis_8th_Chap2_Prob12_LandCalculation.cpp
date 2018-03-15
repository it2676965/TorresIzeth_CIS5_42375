/* 
 * File:   Land Calculation.cpp
 * Author: Izeth Torres
 *
 * Created on March 1, 2018, 8:35 PM
 */
//This program calculates how many acres are in 391,876 square feet of land.

#include <iostream>

using namespace std;

int main( )
{
    //Variables 
    double acre = 43560;    //square feet per acre 
    double land = 391876;   //square feet of land 
    double acresOfLand;  
    
    //Calculate acres of given land
    acresOfLand = land / acre;
    
    //Display
    cout << "391,876 square feet of land is equal to " << acresOfLand << " acres" << endl;
   
    return 0;
}

