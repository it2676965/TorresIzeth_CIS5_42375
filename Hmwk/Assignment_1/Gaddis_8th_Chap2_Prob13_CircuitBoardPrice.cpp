/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circuit Board Price .cpp
 * Author: Izeth Torres 
 *
 * Created on March 1, 2018, 7:46 PM
 */
//This program calculates the selling price of a mother board with the selling company's markup 

#include <iostream>

using namespace std;

int main( ) 
{
    //Variable to hold regular price, markup, and total  
    double cirBrd = 14.95, comProfit, total;  //Price company pays for circuit board 
    
    //Calculate company's profit
    comProfit = cirBrd * .35;
    
    //Calculate selling price of board 
    total = cirBrd + comProfit;
    
    //Display
    cout << "The selling price for a circuit board is $" << total << endl;
   
    return 0;
}

