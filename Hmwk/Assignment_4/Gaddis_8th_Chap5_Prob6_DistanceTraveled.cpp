/* 
 * File:   Gaddis_8th_Chap5_Prob6_DistanceTraveled.cpp
 * Author: Izeth Torres 
 *
 * Created on March 25, 2018, 11:33 AM
 */

#include <iostream>

using namespace std;

main ()
{

int time =0, speed = 0, distance ;

//Get the number of hours traveled 
cout << "This program will calculate how much you traveled every hour.\n";
cout << "Please how many hours has your vehicle traveled?\n";
cin >> time;

//Get speed of vehicle 
cout << "What is the speed of your vehicle in mph?\n";
cin >> speed;

//Display header 
cout << "Hours \t\t Distance Traveled\n";
cout << "-------------------------------\n";

for (int num = 1; num <= time; num++)
{
    distance = (speed * num);
    cout << num << "\t\t" << distance << endl;

}

return 0;
}