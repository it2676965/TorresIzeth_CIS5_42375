/* 
 * File:   Gaddis_8th_Chap5_Prob5_MembershipFeeIncrease.cpp
 * Author: Izeth Torres 
 *
 * Created on March 25, 2018, 12:04 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

main ()
{ 
    const float increase = 0.04;
    const int years = 6;
    float fee = 2500.00;

cout << "Our prices will be increasing from our $2,500 yearly fee \n"
        "by 4% each year for the next six years.\n";
cout << "The following chart shows the increase in prices:\n";
cout << "---------------------------------------------------\n";

cout << fixed << showpoint << setprecision (2);

for (int a = 1; a <= years; a++)
{
    fee = fee + (fee * increase);
    cout << "Year " << a << " yearly fee: $" << fee << endl;
}

return 0;
}
