/* 
 * File:   How Many Calories?.cpp
 * Author: Izeth Torres
 *
 * Created on March 9, 2018, 5:29 PM
 */
//This program calculates how many calories the user consumed after eating a
//certain amount of cookies 

#include <iostream>
#include <cmath>

using namespace std;

main ( ) 
{
int cookies, cookieCal, cookieEat, calories;

//Ask amount of cookies consumes
cout<< "How many cookies did you eat?\n";
cin >> cookies;

//Calculate how many calories per cookie 
cookieCal = 300 / (30 / 10);

//Calculate calories consumed by user
calories = cookieCal * cookies;

//Display calories consumes 
cout << "You consumed " << calories << " calories.\n";

return 0;
}