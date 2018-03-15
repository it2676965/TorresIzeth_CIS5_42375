/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Average of Values.cpp
 * Author: Izeth Torres
 *
 * Created on March 1, 2018, 7:43 PM
 */
//This program takes five values and finds their average.

#include <iostream>

using namespace std;

int main( ) 
{
    //Variables 
    double one = 28;
    double two = 32;
    double three = 37;
    double four = 24;
    double five = 33;
    double sum;
    double average;
    
    //Calculate total of five variables 
    sum = one + two + three + four + five;
    
    //Calculate average 
    average = sum / 5;
    
    //output
    cout <<average<< endl;
    
    return 0;
}


