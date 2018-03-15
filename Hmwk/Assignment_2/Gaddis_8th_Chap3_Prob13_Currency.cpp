/* 
 * File:   Currency.cpp
 * Author: Izeth Torres
 *
 * Created on March 9, 2018, 6:07 PM
 */
//This program converts dollars to Euros and Japanese Yen

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

main ( )
{
const double EURO_PER_DOLLAR = .81;
const double YEN_PER_DOLLAR = 106.27;
double dollar, euro, yen;

//Dollar to Euro exchange 
cout << "How many Dollars would you like to exchange?\n";
cin >> dollar; 

//Calculates exchanges 
euro = (dollar * EURO_PER_DOLLAR);
yen = (dollar * YEN_PER_DOLLAR);

//Display results 
cout << setprecision(2) << fixed;
cout << "Euros: " << euro << endl;
cout << "Yen: " << yen << endl;

return 0;
}

