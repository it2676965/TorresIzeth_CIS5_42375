/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int number;
    int  num1=0, num2=0, num3=0, num4 =0;     //Initialize  number at 0
    
    //Ask user to enter a number 
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin >> number;
    
    num4 = number/1000%10;
    num3 = number/100%10;
    num2 = number/10%10;
    num1 = number/1%10;
    

    //Initialize loop for number entered and set up rows 
    cout << num1 << " ";
    for (int a = 1; a <= num1; a++)
    {
        cout << "*";
    }
    cout << endl;
    
    cout << num2 << " ";
    for (int a =1; a <= num2; a++)
    {
        cout << "*";
    }
    cout << endl;
    
    cout << num3 << " ";
    for (int a =1; a <= num3; a++)
    {
        cout << "*";
    }
    cout << endl;
    
    cout << num4 << " ";
    for (int a =1; a <= num4; a++)
    {
        cout << "*";
    }
    cout<< endl;
    
    //Exit
    return 0;
}