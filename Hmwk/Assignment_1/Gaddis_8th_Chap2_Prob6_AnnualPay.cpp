/* 
 * File:   Annual Pay.cpp
 * Author: Izeth Torres
 *
 * Created on March 1, 2018, 10:14 PM
 */
//This calculates an individuals annual salary 

#include <iostream>

using namespace std;

int main() 
{
    //Variables
    double payAmount = 2200.0;
    double payPeriod = 26;
    double annualPay;
    
    //Calculate annual pay
    annualPay = payAmount * payPeriod;
    
    //Display
    cout << "$" << annualPay << endl;
            
    return 0;
}


