
/* 
 * File:   Gaddis_8th_Chap4_Prob4_AreasOfRectangles.cpp
 * Author: Izeth Torres 
 *
 * Created on March 28, 2018, 9:14 PM
 */

#include <iostream>

using namespace std;

main ( )
{
    int length1, width1, length2, width2;  //Holds length and width of two rectangles 
    float area1, area2;                   //Holds area of two rectangle 
    
    
    //Ask user for length and width of first rectangle 
    cout << "This program will take the measurement of two rectangles and determine\n";
    cout << "which rectangles is greater.\n";
    cout << "Please enter the length of the first rectangle\n";
    cin >> length1;
    cout << "Please enter the width of the first rectangle\n";
    cin>> width1;
    
    
    //Ask user for length and width of second triangle 
    cout << "Please enter the length of second rectangle\n";
    cin >> length2;
    cout<< "Please enter the width of the second rectangle\n";
    cin >> width2;
    
    //Calculate area of both rectangles
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    
    //Determine which rectangle is greater or if they are equal
    if (area1 > area2)
        cout << "Rectangle one has the greatest area\n";
    if (area1 < area2)
        cout << "Rectangle two has the greatest area\n";
    if (area1 == area2)
        cout << "Both rectangles have the same area\n";
    
    return 0;
}