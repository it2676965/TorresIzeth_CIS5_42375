/* 
 * File:   Area of Rectangles.cpp
 * Author: Izeth Torres
 *
 * Created on March 15, 2018, 3:02 PM
 */
//This program takes the measurement of two rectangles, figures out their areas 
//and determines which rectangle is grater or of they are equal. 

#include <iostream>

using namespace std;

main ( )
{
    int length1, width1, length2, width2;
    double area1, area2;
    
    cout << "This program will take the measurement of two rectangles and determine\n";
    cout << "which rectangles is greater.\n";
    cout << "Please enter the length of the first rectangle\n";
    cin >> length1;
    cout << "Please enter the width of the first rectangle\n";
    cin>> width1;
    
    cout << "Please enter the length of second rectangle\n";
    cin >> length2;
    cout<< "Please enter the width of the second rectangle\n";
    cin >> width2;
    
    //determine area of both rectangles
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    if (area1 > area2)
        cout << "Rectangle one has the greatest area\n";
    if (area1 < area2)
        cout << "Rectangle two has the greatest area\n";
    if (area1 == area2)
        cout << "Both rectangles have the same area\n";
    
    return 0;
}