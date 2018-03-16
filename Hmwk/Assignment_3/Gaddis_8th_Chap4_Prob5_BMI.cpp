/* 
 * File:   Body Mass Index.cpp
 * Author: Izeth Torres 
 *
 * Created on March 15, 2018, 3:21 PM
 */

#include <iostream>
#include <cmath>

using namespace std;

main ( )
{
    int weight, height;
    double BMI;
    
    cout << "This program will determine your body mass index.\n";
    cout << "Please enter your weight in pounds:\n";
    cin >> weight;
    cout << "Please enter your height in inches:\n";
    cin >> height;
    
    //Calculate BMI
    BMI = (weight * 703)/ pow (height, 2.0);
    
    if (BMI < 18.5)
        cout << "You are considered to be underweight\n";
    else if (BMI > 25)
        cout << "You are considered to be overweight\n";
    else
        cout << "You are considered to be at an optimal weight\n";
    
    return 0;
}
        