/* 
 * File:   Gaddis_8th_Chap5_Prob9_HotelOccupancy.cpp
 * Author: Izeth Torres 
 *
 * Created on March 25, 2018, 2:03 PM
 */
//This program calculates the occupancy rate for a hotel. Asking the user to
//enter the number of floors, how many rooms there are per floor and how many 
//rooms are occupied per floor. At the end displaying the occupancy in percentage
//and remembering to skip floor 13. 

#include<iostream>
#include <iomanip>

using namespace std;

main ()
{
    //Declare variables 
    int FloorRm = 0;                //Amount of rooms in each floor
    int tlFloor = 0;                //Floors in building 
    int ocRoom = 0;                 //Occupied rooms per floor 
    double tlRoom = 0.00;            //Total rooms in building 
    double tlOcRm = 0.00;            //Total occupied rooms in building 
    double perOc = 0.00;            //Percent of hotel occupied 

    //Request number of floors in hotel 
    cout << "Please enter the number of floors in the hotel:\n";
    cin >> tlFloor;

    //If user enters less than 1 floor then display error message 
    while (tlFloor < 1)
    {
        cout << "Number of floors must be at least 1.\n"
                "Please enter a valid number of floors:\n";
        cin >> tlFloor;
    }

    //Initialize loop for number of floors and ask user to enter number of rooms
    //per floor
    for (int a = 1; a <= tlFloor; a++)
    {
        if (a != 13)
        {
            cout << "Enter the number of rooms on  floor " << a << ":\n";
            cin >> FloorRm;

            //If number of rooms is less than 0, display error message 
            while (FloorRm < 10)
            {
                cout << "Number of rooms on floor must be at least 10.\n"
                        "Please enter a valid number of rooms.\n";
                cin >> FloorRm;
            }

            //Request number of rooms occupied per floor 
            cout << "How many rooms are occupied?\n";
            cin >> ocRoom;
            
            //Calculate total amount of rooms and how many are occupied 
            tlRoom += FloorRm;
            tlOcRm += ocRoom;
        }                           
    }
    //Calculate percentage of rooms occupied 
    perOc = (tlOcRm / tlRoom)*100;

    //Set numeric formating 
    cout << fixed << showpoint << setprecision (2);
    
    //Display output 
    cout << "The hotel has total of " << tlFloor << " floors.\n";
    cout << "The hotel has total of " << tlRoom << " rooms.\n";
    cout << "There are " << tlOcRm << " rooms occupied.\n";
    cout << "There are " << tlRoom - tlOcRm << " unoccupied.\n";
    cout << "The percentage of occupied rooms is " 
            << perOc << "%.\n";


    return 0;
}