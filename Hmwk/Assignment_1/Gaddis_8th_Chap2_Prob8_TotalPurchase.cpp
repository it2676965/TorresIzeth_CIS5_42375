/* 
 * File:   Total Purchase.cpp
 * Author: Izeth Torres
 *
 * Created on March 1, 2018, 9:30 PM
 */
//This program calculates total of five items plus sales tax.

#include <iostream>

using namespace std;

int main( ) 
{
//Variables 
    double item1 = 15.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 12.95;
    double item5 = 3.95;
    double subtotal;        //holds the subtotal of the five items 
    double saleTax;         //holds the sales tax of all five items
    double total;           //holds items plus sales tax total 
    
//Calculate subtotal
    subtotal = item1 + item2 + item3 + item4 + item5;
    
//Calculate sales tax
    saleTax = subtotal * .07;
    
//Calculate total 
    total = subtotal + saleTax;
    
//Display individual item price
    cout << "$" << item1 << endl;
    cout << "$" << item2 << endl;
    cout << "$" << item3 <<endl;
    cout << "$" << item4 <<endl;
    cout << "$" << item5 <<endl;
    
//Display totals
    cout << "Subtotal $" << subtotal << endl;
    cout << "Sales tax $" << saleTax << endl;
    cout << "Total $" << total << endl;
    
    return 0;
}

