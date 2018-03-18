/* 
 * File:   Gaddis_8th_Chap4_Prob23_GeometryCalcuator.cpp
 * Author: Izeth Torres 
 *
 * Created on March 18, 2018, 12:47 PM
 */
//This program will ask the user if they want to solve the area of circle,
//triangle or rectangle. Once they have chosen a program, the program will 
//request information to execute the command.

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int choice;
    
    cout << "This program helps you find the area of a circle, triangle or rectangle/n"
            "Please select one of the options below by entering a number 1-4.\n";
    cout << "1. Calculate the Area of a Circle\n"
            "2. Calculate the Area of a Rectangle\n"
            "3. Calculate the Area of a Triangle\n"
            "4. Quit\n";
    cin >> choice;
    
    if (choice == 1)
    {
        const double PI = 3.14159;
        double area, radius;
        cout << "Please enter the radius of the circle\n";
        cin >> radius;
        
        if (radius < 0)
            cout << "Please enter a positive number for the radius.\n";
        
        else 
        {
        area = PI * pow(radius, 2.0);
        cout << "The area of your circle is " << area << endl;
        }
    }
    
    else if (choice == 2)
    {
        double length, width, area;
        cout << "Please enter the length of the rectangle:\n";
        cin >> length;
        cout << "Please enter the width of your rectangle:\n";
        cin >> width;
        
        if ((length < 0) || (width < 0))
            cout << "Please enter a positive number for the length and width.\n";
     
        
        else 
        {
            area = (length * width);
             cout << "The area of your rectangle is " << area << endl;
        }
      
    }
    else if (choice == 3)
    {
        double base, height, area;
        cout << "Please enter the height of your triangle:\n";
        cin >> height;
        cout << "Please enter the base of your triangle:\n";
        cin >> base;
        
        if ((height < 0) || (base < 0))
            cout << "Please enter a positive number for the height and base.\n";
    
        
        else 
        {
        area = (base * height) / 2;
        
        cout << "The area of your triangle is " << area << endl;
        }
        
    }
    else if (choice == 4)
        cout << "This program has ended\n";
    
    else 
        cout << "You did not enter a number 1-4. Try again.\n";
    
    return 0;
              
}