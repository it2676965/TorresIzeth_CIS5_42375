/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_8th_Chap6_Prob1_Markup.cpp
 * Author: Izeth Torres 
 *
 * Created on May 5, 2018, 11:15 AM
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

//Function that holds retail value 
double calcRetail(double, double);

int main() 
{
    
    //Define variables 
    double price;       //To hold wholesale price of item
    double percent;         //To hold percentage of markup 
    double retail;      //To hold retail price 
    
    //Set numeric output format 
    cout << fixed<< showpoint << setprecision(2);
    
    //Display program intro message 
    cout << "This program calculates a products retail price by taking its \n"
            "wholesale price and its markup.\n";
    cout << "Please enter the wholesale value of the item and the percentage of markup:\n";
    cin >> price >> percent;
    
    //Validate positive integer is entered
    while (price < 0 || percent < 0)
    {
        cout << "Please enter a positive number for price and percentage\n";
        cin >> price >>percent;
    }
  
   //Call for retail function 
    retail = calcRetail(price, percent);
    
    //Display retail price 
    cout << "The retail price of your item is $" << retail << endl;
    
    return 0;
}
    
    
//Definition of function wholesale
double calcRetail(double initial, double per)
{
    double tlRetail= 0;
    tlRetail= ((initial/100)* per) + initial;
    return tlRetail;
}

