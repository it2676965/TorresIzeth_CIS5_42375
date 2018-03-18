/* 
 * File:   Gaddis_8th_Chap4_Prob9_ChangeForADollarGame.cpp
 * Author: Izeth Torres 
 *
 * Created on March 18, 2018, 9:57 AM
 */
//This program is a game that asks the user to enter an amount of coins totaling 
//a dollar. If they get it right they will be congratulated.
#include <iostream>
#include <cmath>
using namespace std;

int main( )
{
double quarters, dimes, nickels, pennies, total;

cout << "This program is a game where you have to enter the amount of coins\n";
cout << " that total up to one dollar ($1)\n";
cout << "Enter how many quarters you need\n";
cin >> quarters;
cout << "Enter how many dimes you need\n";
cin >> dimes;
cout<< "Enter how many nickels you need\n";
cin >> nickels;
cout << "Enter how many pennies you need\n";
cin >> pennies;


//Determine total value of dollar 
total = (quarters * .25) + (dimes * .10) + (nickels * .05) + (pennies * .01);

if (total == 1.00)
{
    cout << "Congratulations! Your coins add up to $1.\n";
}
else if (total < 1.00 && total > 0)
{
    cout << "Your coins add up to less than $1, try again.\n";
}
else if (total > 1.00)
{
    cout << "Your coins add up to more than $1, try again.\n";
}

    return 0;
}
