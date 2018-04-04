/* 
 * File:   Lab_Assignment_7.cpp
 * Author: Izeth Torres 
 *
 * Created on April 4, 2018, 1:56 PM
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cmath>   //For power function 
#include <string>  //List names 
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Sum of Numbers"<<endl;
        cout<<"Type 2 for Characters for ASCII codes"<<endl;
        cout<<"Type 3 for Ocean Levels"<<endl;
        cout<<"Type 4 for Membership Fee Increase"<<endl;
        cout<<"Type 5 for Distance Traveled"<<endl;
        cout<<"Type 6 for Pennies for Pay"<<endl;
        cout<<"Type 7 for Hotel Occupancy"<<endl;
        cout<<"Type 8 for Average Rainfall"<<endl;
        cout<<"Type 9 for Student Lineup"<<endl;
        cout<<"Type 0 for Square Display"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                cout<<"We are in Sum of Numbers"<<endl;
                //Define variables 
                int number = 0;     //Number requested from user 
                int total = 0;      //Total sum of numbers 

                //Request input from user 
                cout << "This program will ask you for a number and then add all integers from \n"
                        "1 to the number you enter.\n";
                cout << "Enter a number:\n";
                cin >> number;

                //Validate input
                while (number < 0)
                    {
                        cout << "You did not enter a positive integer. Please enter a positive integer\n";
                        cin >> number; 
                    }

                //Read number and calculate sums 
                for (int count = 1; count <= number; count++)
                { 
                    total += count;
                } 

                //Display total of calculations 
                cout << "The total sum from 1 to " << number << " is: " << total << endl;
                break;
            }
            case '2':{
                cout<<"We are in Characters for ASCII codes"<<endl;
                //Define variable
                char a =0;      //Assign character 'a' as default  

                //Display header 
                cout<<"This program will display the first 127 characters from ASCII code\n";
                cout << "-------------------------------------------------------------------\n";

                //Initialize ASCII values 
                for (int count = 1; count <= 127; count++)
                {
                    cout << a;
                    if ( a % 16 == 0)       //Set up 16 variables per row 
                        cout << a << endl;
                        a++;
                }
                break;
            }
            case '3':{
                cout<<"We are in Ocean Levels"<<endl;
                //Declare variable 
                int  year = 1;          //Years for measuring rainfall 
                double level = 0;       //Rainfall level 

                //Display purpose of program 
                cout << "This program will display a table showing the rising ocean levels\n"
                "for the next 25 years.\n";

                //Set numeric formating 
                cout << fixed << showpoint << setprecision (1);

                //Calculate, initialize and display ocean levels for 25 years 
                for (int a = 1;  a <= 25; a++)
                {
                    level += 1.5;
                    cout << "Year " << year  << ": " << level << "mm" <<endl;
                    year++;
                }
                break;
            }
            case '4':{
                cout << "We are in Membership Fee Increase" <<endl;
                //Declare variables 
                double incre = 0.04;      //4% increase 
                const int years = 6;       //Years to apply fee increase 
                int fee = 2500.00;        //Original club membership fee 

                //Display table header 
                cout << "Our prices will be increasing from our $2,500 yearly fee \n"
                        "by 4% each year for the next six years.\n";
                cout << "The following chart shows the increase in prices:\n";
                cout << "---------------------------------------------------\n";

                //Set numeric formating 
                cout << fixed << showpoint << setprecision (2);

                //Initialize years and apply increase 
                for (int a = 1; a <= years; a++)
                {
                    fee = fee + (fee * incre);
                    cout << "Year " << a << " fee: $" << fee << endl;
                }
                break; 
            }
            case '5':{
                cout << "We are in Distance Traveled" <<endl;
                //Declare variables 
                int time =0;        //Time traveled 
                int speed = 0;      //Speed in MPH
                int dist;           //Distance traveled 

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

                //Calculate distance traveled, initialize and display 
                for (int num = 1; num <= time; num++)
                {
                    dist = (speed * num);
                    cout << num << "\t\t" << dist << endl;
                }
                break; 
            }
            case '6':{
                cout << "We are in Pennies for Pay" <<endl;
                //Declare variables 
                int days;               //Days with salary 
                double pay = 0.01;      //Salary of one penny
                double total = 0.0;     //Total salary earned
                double dayPay = 0.0;    //Salary earned per day 
    
                //Display purpose of program to user and request input 
                cout << "This program will calculate how much you would earn if you earned\n"
                        "a penny a day and it doubled each day.\n";
                cout << "Enter how many days you would earn salary:\n";
                cin >> days;
    
                //If days are less than 1, display error message 
                while (days < 1)
                {
                    cout << "Please enter a number 1 or higher for days\n";
                    cin >> days;
                }
    
                //Display table header 
                cout << "This table shows the salary you would earn:\n";
                cout << "Day \t\tSalary\n";
                cout << "--------------------------------------------\n";
     
                ////Set numeric formating
                cout << fixed << showpoint << setprecision(2);
    
                //Calculate daily rate in accumulating days
                for (int a = 1; a <= days; a++) 
                {
                    dayPay = pay * pow(2, a-1);
                    cout << a << "\t\t" << "$" << dayPay << endl;
                    total += dayPay; //accumulate total 
                }
                //Display total
                cout <<"The total salary for " << days << " days is $" << total << endl;
                break; 
            }
            case '7':{
                cout << "We are in Hotel Occupancy" <<endl;
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
                break; 
            }
            case '8':{
                cout << "We are in Average Rainfall" <<endl;
                int years = 0;               //Number of years to collect data
                double moRain = 0;          //Rainfall per month 
                const int tlMon = 12;       //Total number of months with data
                double tlRain = 0.00;       //Total rainfall  tlRain
    
                //Display message and request number of years to collect data
                cout << "This program calculates the average rainfall over a number of years\n";
                cout << "Please enter the number of years you have data for:\n";
                cin >> years;
    
                //If years are less than 1, display error message 
                while (years < 1)
                {
                    cout << "Please enter a number number 1 or larger for years.\n";
                    cin >> years; 
                }
    
                //Calculate number of years and request rainfall for every month 
                for (int a = 1; a <= years; a++)
                {
                    for (int months = 1; months <= tlMon; months++)
                    {
                        cout << "Enter the rainfall for month " << months << " in inches:\n";
                        cin >> moRain;
            
                        //If user enters a negative number for rainfall, display error message
                        while (moRain < 0)
                        {
                            cout << "Please enter a positive number for rainfall:";
                            cin >> moRain;
                       
                        }
                        //Calculate total amount of rain 
                        tlRain += moRain;
                    }
        
                }
                //set numeric formating 
                cout << fixed << showpoint << setprecision(2);
    
                //Display output 
                cout << "Number of months is: " << years * tlMon << endl;
                cout << "Total rainfall is: " << tlRain << " inches." << endl;
                cout << "Average rainfall per month is: " << tlRain / 
                        (tlMon * moRain) << " inches.";
                break; 
            }
            case '9':{
                cout << "We are in Student Lineup" <<endl;
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
                break; 
            }
            case '0':{
                cout << "We are in Square Display" <<endl;
                int number = 0;     //Initialize  number at 0
    
                //Ask user to enter a number 
                cout << "Please enter a a positive number no grater than 15.\n";
                cin >> number;
    
                //If number is less than 1 or greater that 15, display error message 
                while (number < 1 || number > 15)
                {
                    cout << "Please enter a number from 1 to 15.\n";
                    cin >> number;
                }
   
                //Initialize loop for number entered and set up rows 
                for (int a = 1; a <= number; a++)
                {
                    //Display X's in rows 
                    for (int b = 1; b <= number; b++)
                    {
                        cout << "X";
                    }
                cout << endl;
                }
                break; 
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
            
    }while(choice>='1'&&choice<='3');
    
    //Exit stage right!
    return 0;
}