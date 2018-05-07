/*
 * This program will calculate the average test score of a group and drop the 
 * lowest score. 
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_8th_Chap6_Prob11_LowestScoreDrop.cpp
 * Author: Izeth Torres 
 *
 * Created on May 6, 2018, 12:23 PM
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void getScore(int &score);
void calcAverage(int, int, int, int, int);
int findLowest(int,int, int, int, int, int);

int main() 
{    
    //Set variables 
    int score1, score2, score3, score4, score5;
    
    cout << "This program will take five test scores, drop the lowest and take "
            "the average of the remaining four scores.\n";

    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);
 
    return 0;
}

//Define getScore function
void getScore(int &score)
{
    cout << "Please enter a test score. \n";
    cin >> score;
    
    //Input validation
    while (score < 0 && score > 100)
    {
        cout << "Please enter a number between 0 and 100 for the test score.\n";
        cin >>score;
    }
}

//Define findLowest function
int findLowest(int score1, int score2, int score3, int score4, int score5, int low)
{
    low = score1;
    
    if (score2 < low)
        low = score2;
    else if (score3 < low)
        low = score3;
    else if (score4 < low)
        low = score4;
    else if (score5 < low)
        low = score5;

cout << "The lowest test score is " << low << endl;
return low;
}

//Define calcAverage function
void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
    int low;
    double average;
    
    average = (((float)score1 + score2 + score3 + score4 + score5) - low) / 4.0;
    
    //Numeric output
    cout << fixed << showpoint << setprecision(2);
    cout << "The average of the 4 highest test scores entered is: " << average << endl;
}

