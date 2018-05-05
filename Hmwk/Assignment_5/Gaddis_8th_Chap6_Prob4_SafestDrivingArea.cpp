/*
 * This program calculates the safest driving area within a city based on five regions
 * (north, south, eat, west, and central).
 * It will report the region with the least accidents. 
 */

/* 
 * File:   Gaddis_8th_Chap6_Prob4_SafestDrivingArea.cpp
 * Author: Izeth Torres 
 *
 * Created on May 5, 2018, 2:39 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main(int argc, char** argv) {
    
    //Declare variables for regions 
    double north, south, east, west, central;
    
        for (int i=0; i <5; i++)
    {
        switch (i)
        {
            case 0:
                north = getNumAccidents ("North");
                break;
            case 1:
                south = getNumAccidents("South");
                break;
            case 2:
                east = getNumAccidents("East");
                break;
            case 3:
                west = getNumAccidents ("West");
                break;
            case 4:
                central = getNumAccidents ("central");
        }
    }
    findLowest(north, south, east, west, central);

    return 0;
}

int getNumAccidents(string region)
{
    int accidents =0;
    
    cout << "Please enter number of accidents last year for the " << region << " region\n";
    cin >> accidents;
    
    while (accidents < 0)
    {
        cout << "Please enter a number higher than 0 for accidents.\n";
        cin >> accidents;
    }
    return accidents;         
}

void findLowest(int north, int south, int east, int west, int central)
{
    string region ="";
    int lowest =0;
    
    if (north < south && north < east && north < west && north < central)
    {
        lowest = north;
        region = ("North");
    }
    else if (south < north && south < east && south < west && south < central)
    {
        lowest = south;
        region = ("South");
    }
    else if (east < north && east < south && east < west && north < central)
    {
        lowest = east;
        region = ("East");
    }
    else if (west < north && west < south && west < east && west < central)
    {
        lowest = west;
        region = ("West");
    }
    else if (central < north && central < south && central < east && central < west)
    {
        lowest = central;
        region = ("Central");
    }
    
    cout << "The region with the safest driving is " << region << " region, with "
            << lowest << " accident(s) per year." << endl;
       
}



