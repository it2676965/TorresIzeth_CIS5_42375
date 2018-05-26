
/* 
 * File:   Gaddis_8th_Chap7_Prob10_DriversLicenseExam.cpp
 * Author: Izeth Torres
 *
 * Created on May 23, 2018, 11:39 AM
 */

#include <iostream>

using namespace std;

void input(char[], int);
void getAnswers(char[], char[], int);

int main()
{
    const int QUESTIONS = 20;       //Number of questions
    //Array that holds correct answers
    char answers[QUESTIONS] = 
    {'A', 'D', 'B', 'B', 'C',
     'B', 'A', 'B', 'C', 'D',
     'A', 'C', 'D', 'B', 'D',
     'C', 'C', 'A', 'D', 'B'};
    char stuAnswer[QUESTIONS];      //Array holding student answers
    int correct = 0;                //Accumulator for correct answers
    int incorrect = 0;              //Accumulator for incorrect answers
    int index;                      //Set counter
    
    cout << "Please enter student answer in capital letters.\n";
    
    //Request answers from user
    for (index = 0; index < QUESTIONS; index ++)
    {
        cout << (index + 1) << ". ";
        cin >> stuAnswer[index];
        
        while (stuAnswer[index] != 'A' && stuAnswer[index] != 'B' && 
                stuAnswer[index] != 'C' && stuAnswer[index] !='D')
        {
            cout << "You did not enter your answer in a capital letter, try again.\n";
            cin >> stuAnswer[index];
        }
    }
    
    getAnswers(answers, stuAnswer, QUESTIONS);
    
return 0;    
}

/*******************************************************
 ************Definition of getAnswers******************/
void getAnswers(char answers[], char stuAnswer[], int QUESTIONS)
{
    int correct = 0;
    int incorrect = 0;
    int tlIncorrect[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,};
    int wrong = 0;
    
    //Compare correct answers to student answers 
    for (int index = 0; index < QUESTIONS; index++)
    {
        if (answers[index] == stuAnswer[index])
        {
            correct ++;
        }
        else if (answers[index] != stuAnswer[index])
       {
            incorrect++; 
            tlIncorrect[index] = index + 1;
            wrong++;
        }
    }
    
    //Display passed or fail message
    if (correct >= 15)
    {
        cout << "Congratulations! Student passed.\n";
    }
    else if (correct <= 14)
    {
        cout << "Student did not score higher than 15, they did not pass.\n";
    }
    
    //Display number of correct and incorrect answers 
    cout << "Total correct answers: " << correct << endl;
    cout << "Total incorrect answers: " << incorrect << endl;
    
    //Display list on incorrect answers 
    cout << "The following answer(s) were incorrect.\n";
    
    for (int index = 0; index < QUESTIONS; index++)
    {
        if (tlIncorrect[index] != 0)
        cout << "# " << tlIncorrect[index] << endl;
    }
    
}
  
