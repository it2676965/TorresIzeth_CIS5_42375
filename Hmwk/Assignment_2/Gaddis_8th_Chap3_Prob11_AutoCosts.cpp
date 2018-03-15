/* 
 * File:   Automobile Costs.cpp
 * Author: Izeth Torres
 *
 * Created on March 9, 2018, 5:33 PM
 */
//This program calculates the users monthly and yearly automobile expenses 

#include <iostream>

using namespace std;

main ( ) 
{
int loan, insurance, gas, oil, tires, maintenance; 
double monthly, annualy;

//Request amount of costs to maintain automobile
cout<< "This program calculates your monthly and yearly automobile expenses.\n"; 
cout << "What is your monthly loan payment?\n";
cin >> loan;
cout << "What is your monthly insurance payment?\n";
cin >> insurance;
cout << "How much do you spend on gas per month?\n";
cin >> gas;
cout<< "How much do you spend on oil expenses per month?\n";
cin >> oil;
cout << "How much do you spend on tires a month?\n";
cin >> tires;
cout << "How much do you spend a month on any additional maintenance?\n";
cin >> maintenance;

//Calculate monthly automobile expenses
monthly = loan + insurance + gas + oil + tires + maintenance;

//Calculate yearly automobile expenses 
annualy = monthly * 12;

//Display results 
cout << "Your total monthly vehicles expense is $" << monthly << endl;
cout << "Your total yearly vehicle expense is $" << annualy << endl;

return 0;
}