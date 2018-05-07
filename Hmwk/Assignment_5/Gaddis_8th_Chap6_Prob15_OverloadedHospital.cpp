/*
 * This program computes the charges for a patients hospital pay.
 * The program will have two overloaded functions that determine in-patient and
 * out-patient charges. 
 */

/* 
 * File:   Gaddis_8th_Chap6_Prob15_OverloadedHospital.cpp
 * Author: Izeth Torres
 *
 * Created on May 6, 2018, 9:22 PM
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void inPat();
void outPat();

int main() 
{
    //Set variables
    int choice;
    
    cout << "This program will calculate the charges for a patients hospital stay.\n"
            "If the patient was admitted as in-patient enter 1, if the patient was \n"
            "admitted as an out-patient enter 2.\n";
    cin >> choice;
   
    while (choice <= 0 && choice >=3)
    {
        cout << "Please enter a valid number, either 1 or 2.\n";
        cin >> choice;
    }
    
    switch (choice) 
    {
        case 1:   //user choice is in-patient
            cout << "You chose in-patient.\n";
            inPat();
            break;  
            
        case 2:   //user choice is out-patient
            cout << "You chose out-patient.\n";
            outPat();
            break;
    }
            

    return 0;
}

//Define charges variable for out-patient
void outPat()
{
    //Define variables
    double service;    //Hospital service charges
    double med;        //Medication charges 
    double total;      //Calculates total charges for out-patient 
    
    //Request rates from user
    cout << "What were the charges for hospital service fees (labs tests, etc.)?\n";
    cin >>service;
        while (service <0)
    {
        cout << "Please enter a positive number for service fees.\n";
        cin >> service; 
    }
    
    cout << "What were the hospital medication charges?\n";
    cin >> med;
        while (med <0)
    {
        cout << "Please enter a positive number for medication charges.\n";
        cin >> med; 
    }
    
    //Calculate total charges
    total = service + med;
    
    //Set numeric output 
    cout << fixed << showpoint << setprecision(2);
    
    //Display results
    cout << "Your out-patient rates are as follows:\n"
            "---------------------------------------\n"
            "Hospital service charge: $" << service << endl;
    cout << "Medication charges: $" << med << endl;
    cout << "Total hospital stay charge: $" << total << endl;
}

//Define charges variable for in-patient 
void inPat()
{
    //Define variables
    double days;        //Number of days spent in hospital
    double dayRate;     //Day rate charged for hospital stay
    double med;         //Medication charges
    double service;     //Hospital service fees
    double dayTl;       //Calculates daily rate total 
    double total;       //Calculates total charges for out-patient
    
    //Request data from user
    cout << "How many days did the patient spend in the hospital?\n";
    cin >> days;
        while (days <0)
    {
        cout << "Please enter a positive number for days.\n";
        cin >> days; 
    }
    
    cout << "What is the daily rate for a hospital stay?\n";
    cin >> dayRate;
        while (dayRate <0)
    {
        cout << "Please enter a positive number for daily rate.\n";
        cin >> dayRate; 
    }
    
    cout << "What were the hospital medication charges?\n";
    cin >> med;
        while (med <0)
    {
        cout << "Please enter a positive number for medication charges.\n";
        cin >> med; 
    }
    
    cout << "What were the charges for hospital service fees (labs tests, etc.)?\n";
    cin >>service;
        while (service <0)
    {
        cout << "Please enter a positive number for service fees.\n";
        cin >> service; 
    }
    
    //Calculate daily rate total
    dayTl = (days * dayRate);
    
    //Calculate total charges for in-patient
    total = dayTl + med + service; 
    
    //Set numeric output 
    cout << fixed << showpoint << setprecision(2);
    
        //Display results
    cout << "Your in-patient rates are as follows:\n"
            "-------------------------------------\n"
            "Daily rate for total amount of days : $" << dayTl << endl;
    cout << "Hospital service charge: $" << service << endl;
    cout << "Medication charges: $" << med << endl;
    cout << "Total hospital stay charge: $" << total << endl;
}

