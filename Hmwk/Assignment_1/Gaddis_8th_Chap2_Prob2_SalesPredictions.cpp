/* 
 * File:   Sales Tax.cpp
 * Author: Izeth Torres
 *
 * Created on March 1, 2018, 9:12 PM
 */
//This program calculates the tax of a $95 purchase with 4% sales tax and 2% county sales tax.
#include <iostream>

using namespace std;

int main( ) 
{
//Variables
    double tlSale = 95; //purchase price
    double slTax = .04; //4% sales tax
    double coTax = .02;  //2% county sales tax
    double salesTax;     //To hold the amount of sales tax
    double coSlTax;     //To hold the amount of county sales tax
    double tlTax;       //To hold both county and sales tax
    
    //Calculate sales tax
    salesTax = tlSale * slTax;
    
    //Calculate county sales tax
    coSlTax = tlSale * coTax;
    
    //calculate total tax
    tlTax = salesTax + coSlTax;
    
    
    return 0;
}

