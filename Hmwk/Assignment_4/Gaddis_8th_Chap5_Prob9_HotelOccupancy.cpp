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
    int roomsOnFloor = 0;
    int totalFloors = 0;
    int occupiedRoomsOnFloor = 0;
    float totalRooms = 0.00;
    float totalOccupiedRooms = 0.00;
    float percentOccupied = 0.00;

    cout << "Please enter the number of floors in the hotel:\n";
    cin >> totalFloors;

    while (totalFloors < 1)
    {
        cout << "Number of floors must be at least 1.\n"
                "Please enter a valid number of floors:\n";
        cin >> totalFloors;
    }

    for (int a = 1; a <= totalFloors; a++)
    {
        if (a != 13)
        {
            cout << "Enter the number of rooms on  floor " << a << ":\n";
            cin >> roomsOnFloor;

            while (roomsOnFloor < 10)
            {
                cout << "Number of rooms on floor must be at least 10.\n"
                        "Please enter a valid number of rooms.\n";
                cin >> roomsOnFloor;
            }

            cout << "How many rooms are occupied?\n";
            cin >> occupiedRoomsOnFloor;
            
            totalRooms += roomsOnFloor;
            totalOccupiedRooms += occupiedRoomsOnFloor;
        }                           
    }
    percentOccupied = (totalOccupiedRooms / totalRooms)*100;

  
    cout << "The hotel has total of " << totalFloors << " floors.\n";
    cout << "The hotel has total of " << totalRooms << " rooms.\n";
    cout << "There are " << totalOccupiedRooms << " rooms occupied.\n";
    cout << "There are " << totalRooms - totalOccupiedRooms << " unoccupied.\n";
    cout << "The percentage of occupied rooms is " << setprecision(2) 
            << percentOccupied << "%.\n";


    return 0;
}