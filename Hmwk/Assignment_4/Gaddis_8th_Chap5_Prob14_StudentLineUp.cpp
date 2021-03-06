/* 
 * File:   Gaddis_8th_Chap5_Prob14_StudentLineUp.cpp
 * Author: Izeth Torres 
 *
 * Created on March 25, 2018, 5:06 PM
 */
//This program will ask teacher for number of students and then prompt them to 
//enter students names. The output will then display who goes first in line and
//who goes last.

#include <iostream>
#include <string>

using namespace std;

main()
{
    int students = 0;         //number of students 
    string name;              //To hold names of students 
    string first;             //To hold name of first student on list 
    string last;              //To hold name of last student on list
    
    //Request amount of students 
    cout << "How many students do you have in your class?\n";
    cin >> students;
    
    //Ask for number of students 
    while (students < 1 || students > 25)
    {
        cout << "Please enter a number between 1 and 25.\n";
        cin >> students;
    }
    
    //Take in students names 
    for (int a = 1; a <= students; a++)
    {
        cout << "Name of student " << a << ":\n";
        cin >> name;
        
        //Declare first and last to be read from list of names 
        if ( a == 1)
        {
            first = name;
            last = name;
        }
        
        //Declare fist name and last name from list 
        else 
        {
            if (name < first)
                first = name;
            else if (name > last)
                last = name;
        }
        
    }
    //Display first and last student
    cout << "The student at the front of the line is " << first << endl;
    cout << "The last student at the end of the line is " << last << endl;
    
    
    return 0;
}