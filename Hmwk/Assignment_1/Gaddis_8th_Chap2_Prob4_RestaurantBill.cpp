/* 
 * File:   Restaurant Bill.cpp
 * Author: Izeth Torres
 *
 * Created on March 1, 2018, 8:58 PM
 */
//This program calculates a total restaurant bill, including tax and tip.

#include <iostream>

using namespace std;


int main ( ) 
{
    //Variables 
    double meal = 88.67;
    double tax = 0.0675;
    double txMeal;          //Total of meal with tax
    double tipCalc = .20;    //For calculating 20% tip
    double tip;
    double bill;
    double total;
    
    //Calculate tax of meal 
    txMeal = meal * tax;
    
    //Calculate meal plus tax
    bill = meal + txMeal;
    
    //Calculate tip
    tip = bill * tipCalc;
    
    //Calculate total bill
    total = bill + tip;
    
    //Display
    cout << "Meal $" <<meal<< endl;
    cout << "Tax $" << txMeal << endl;
    cout << "Tip $" << tip << endl;
    cout << "Total $" << total << endl;
          
    return 0;
}

