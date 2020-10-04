// activity 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Author:       Christopher Parker, cjp5907, Lab Day & Time
//Class :       CMPSC121
//Experiment:   02
//File:         P:/compsc121/experiments/exp02.cpp
//Purpose:      Division modulo division

/*
I certify that, this program code is my work.Others may have
assited me with planningand concepts, but the coe was written,
solely, by me.

I understand that submitting code which is totally or partially
the product of other individuals is a violation of the Academic
Integrity Policy and accepted ethical precepts.falsified
execution results are also results of improper activities.Such
violations may result in zero credit for the assignment, reduced
credit for the assignment, or course failure.
*/

/*Write a program which asks the user to enter a number which represents a weekday
* (e.g., 1 for sunday, 2 for monday, etc.). Do not accept a number that is out of 
range. Then display the name of the day. Encase your logic in an outer loop which 
asks the user if he or she wants to enter anotehr number. An entry of Y will continue
asking for days, anything else should end the program.
*/

#include <iostream>
#include <string>
using namespace std;


int main()
{



    char choice; 
    int dayNumber; 

    string dayName;

    





    do {

        cout << "Enter a day of week value: " << endl; 
        cin >> dayNumber; 


            switch (dayNumber) {
            case 1:
                dayName = "Sunday";
                break;
            case 2:
                dayName = "Monday";
                break;
            case 3:
                dayName = "Tuesday";
                break;
            case 4:
                dayName = "Wednesday"; 
                break;
            case 5:
                dayName = "Thur-sday";
                break;
            case 6:
                dayName = "Friday";
                break;
            case 7:
                dayName = "Saturday";
                break;
            default:
                dayName = "Invalid day number";
            }
            cout << dayName << endl;
            cout << "Would you like to continue: y for yes, n for no";
            cin >> choice; 

            if (choice == 'n') {
                cout << "Goodbye!"; 
                return 0; //kicks us out the end 

            }

            while (dayNumber < 1 || dayNumber > 7) {
                cout << dayNumber << " is an " << dayName << endl;
                cout << "Please try again" << endl; 
                cout << "Enter in a day of the week 1-7: ";
                cin >> dayNumber; 
            }

     } while (choice == 'y');
        
     
     return 0; 
 }

    

