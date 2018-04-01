/* 
 * File:   Gaddis_8th_Chap5_Prob5_MembershipFeeIncrease.cpp
 * Author: Izeth Torres 
 *
 * Created on March 25, 2018, 12:04 PM
 */
//A health club will be increasing their yearly rates by 4% for the next 6 years. 
//This program displays a table showing the increase in fees. 

#include <iostream>
#include <iomanip>

using namespace std;

main ()
{ 
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

return 0;
}
