/*
*   This program determines which of a company's four divisions (Northeast, 
 *  Southeast, Northwest, and Southwest) had the greatest sales for a quarter.
 */

/* 
 * File:   Gaddis_8th_Chap6_Prob3_WinningDivision.cpp
 * Author: Izeth Torres 
 *
 * Created on May 5, 2018, 12:36 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

//Function types 
double getSales(string); //Takes division names  
void findHighest(double, double, double, double);   //Finds region with highest sales 

int main(int argc, char** argv) {
    
    //Declare variables 
    double nEast, sEast, nWest, sWest;  //Four division 
    
    //Set numeric output format
    cout << fixed << showpoint << setprecision(2); 
    
    //Display program function and initialize function types 
    cout<< "This program will determine which company division has the greatest sales for a quarter\n";

    for (int i=0; i <4; i++)
    {
        switch (i)
        {
            case 0:
                nEast = getSales ("Northeast");
                break;
            case 1:
                sEast = getSales("Southeast");
                break;
            case 2:
                nWest = getSales("Northwest");
                break;
            case 3:
                sWest = getSales ("Southwest");
                break;
        }
    }
    findHighest(nEast, sEast, nWest, sWest);


    return 0;
}

//Definition of getSales function 
double getSales(string division)
{
    double sales;
    
    cout << "Please enter sales for the " << division << " division" <<endl;
    cin >> sales;
    
    //Validate positive integer 
    while (sales < 0)
    {
        cout << "Please enter a positive number for sales\n";
        cin >> sales;
    }
    return sales;
}

void findHighest(double nEast, double sEast, double nWest, double sWest)
{
    string division;
    double greatest;
    
    if (nEast > sEast && nEast >nWest && sEast > sWest)
    {
        greatest = nEast;
        division = "Northeast";
    }
    else if (sEast > nEast && sEast >nWest && sEast > sWest)
    {
        greatest = sEast;
        division = "Southeast";
    }    
    else if (nWest > nWest && nWest > sWest && nWest > sWest)
    {
        greatest = nWest;
        division = "Northwest";
    }    
    else if (sWest > nEast && sWest > sEast && sEast > nWest)
    {
        greatest = sWest;
        division = "Southwest";
    }
    
    cout<< "The division with the greatest sales for this quarter was " << division << endl;
}

