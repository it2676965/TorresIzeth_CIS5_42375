/*
 * This program allows the user to enter the amount of food each of three monkeys 
 * at the zoo eats per week. The program will then display the average amount of
 * eaten by the three monkeys, the monkey who eats the most, and the monkey who
 * eats the least.
 */

/* 
 * File:   Gaddis_8th_Chap7_Prob5_MonkeyBusiness.cpp
 * Author: Izeth Torres 
 *
 * Created on May 20, 2018, 5:21 PM
 */

#include <iostream>

//Global constants 
const int MONKEYS = 3;      //Number of columns representing monkeys
const int DAYS = 7;         //Days of the week 

double average (const double ave[MONKEYS][DAYS]);    //Average amount of food eaten daily by all monkeys 
double leastAmt (const double least[MONKEYS][DAYS]);     //Least amount eaten by one monkey
double greatestAmt (const double great[MONKEYS][DAYS]);  //Greatest amount eaten by one monkey


using namespace std;

int main() 
{
    double food[MONKEYS][DAYS] = {0};  //Holds amount of food eaten daily
    int monkey, day;
    
    for (monkey = 0; monkey < MONKEYS; monkey++)
    {
        for (day = 0; day < DAYS; day++)
        {
            do
            {
                cout << "Please enter the amount food eaten by each monkey, in pounds.\n";
                cout << "Monkey " << (monkey +1) << ", Day " << (day+1) << ": ";
                cin >> food[monkey][day];
                while (food[monkey][day] < 0)
                {
                cout << "Please enter a positive number for food eaten.\n";
                cin >> food[monkey][day];
                }
            }
            while(food [monkey][day] < 0);
        }
    }
    double average (const double ave[MONKEYS][DAYS]);
    double greatestAmt (const double great[MONKEYS][DAYS]);
    double leastAmt (const double least[MONKEYS][DAYS]);
    
    return 0;
}

/*****************************************
 *********Definition of average*********/
double average (const double ave[MONKEYS][DAYS])
{
    int tlAverage;
    
    for (int index = 0; index < MONKEYS; index++)
        for (int i = 0; i < DAYS; i++)
            tlAverage =+ ave[index][i];
            tlAverage = tlAverage/DAYS;
        
        cout << "The average amount of food eaten by the family of monkeys is : "
        << tlAverage;
}

/*********************************************
 ***********Definition of leastAmt************/
double leastAmt (const double least[MONKEYS][DAYS])
{
    int less;
    
    for (int index = 0; index > MONKEYS; index++)
        for (int i = 0; i > DAYS; i++)
            if (least[index][i] > less)
                less = least[index][i];
        
        cout << "The smallest meal eaten this week was " << less << endl;
            
}

/********************************************
 *******Definition of greatestAmt************/
double greatestAmt (const double great[MONKEYS][DAYS])
{
    int most;
    
    for (int index = 0; index < MONKEYS; index++)
        for (int i = 0; i < DAYS; i++)
            if (great[index][i] < most)
                most = great[index][i];
        
        cout << "The greatest amount meal eaten this week was :" << most << endl;
}

