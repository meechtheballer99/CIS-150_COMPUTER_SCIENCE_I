// WORKOUT PACE CALCULATOR --BY DEMETRIUS JOHNSON.cpp : This file contains the 'main' function. Program execution begins and ends there.
//




#include <iostream>
using namespace std;

int main()
{
    char userChoice;
    int min, sec, reps, avgMin;
    int count = 0;
    double remAvgSec, avgSeconds = 0.0, totalSeconds = 0.0;
    cout << "enter total minutes, followed by a space, then enter seconds (EX: MINUTES_SECONDS).\n";
    cout << "enter -1 followed by a space and then any number (EX: -1_ANYNUMBER) when finished to calculate average of inputs.\n\n";
    cout << "enter letter A enter or repeat program, or letter B to exit.\n\n";
    cout << "select a menu option (A or B): ";
    cin >> userChoice;
    
    while (userChoice == 'A' || userChoice == 'a') {
        totalSeconds = 0.0;
        count = 0;
        cout << "enter MIN_SEC: ";
        cin >> min >> sec;
        do {

            totalSeconds += 60 * min + sec;
            count++;
            cout << "enter MIN_SEC: ";
            cin >> min >> sec;
        } while (min != -1);

        avgSeconds = totalSeconds / count;
        avgMin = avgSeconds / 60;
        remAvgSec = avgSeconds - (60 * avgMin);

        cout << "\n\nAverage is: " << avgMin << "_MINUTES & " << remAvgSec << "_SECONDS ----->>> (" << avgMin << ":" << remAvgSec << ")\n\n";
        cout << "select a menu option (A to repeat or B to exit): ";
        cin >> userChoice;
    }

    if (userChoice == 'B' || userChoice == 'b') {
        system("pause");

        return (0);
    }

}

