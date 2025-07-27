


/*  *Author: Demetrius Johnson
	*Creation Date: 05 Feb. 2020
	*Modification Date: 05 Feb. 2020
	*Purpose: Tell the user what to do based on a given input temperature (F)

	// LAB 4 - CIS 150 - MEECH.cpp

	Question 1

	The following program asks the user for the current temperature (in Fahrenheit).  
	Add a series of if statements (if with multiple alternatives i.e. if/else if/else) 
	So that one of the following messages is printed based on the temperature value:

	Temperature (F)							Message
	>90                                    "Go swimming."
	<=90, >80                              "Turn on air conditioning."
	<=80, >70                              "Do nothing."
	<=70, >55                              "Turn on heat."
	<=55, >30                              "Wear a heavy coat."
	<=30, >0                               "Wear gloves."
	<=0                                    "Stay inside, make a fire."

	// Include ALL the compiler directives you need in the program
	**to be filled in**


*/


#include <iostream>
#include <ctype.h>


using namespace std;

int main()
{
	int temperature;
	double tempExact, tempHoldVal;
	cout << "Please enter the current temperature (-50 to +120 degrees)(F) (no deccimals) : ";
	cin >> tempExact;
	temperature = tempExact;
	tempHoldVal = tempExact - temperature;

	
	// add cascading if-else statements to complete the program
	/* to be filled in by student */

	if (tempHoldVal != 0.0 || temperature < -50 || temperature > 120) {

		cout << endl << "Not a valid temperature input" << endl;
	}
	else if (temperature > 90) {

		cout << "Go Swimming" << endl;
	}
	else if (temperature <= 90 && temperature > 80) {

		cout << "Turn on air conditioning" << endl;
	}
	else if (temperature <= 80 && temperature > 70) {

		cout << "Do nothing." << endl;
	}
	else if (temperature <= 70 && temperature > 55) {

		cout << "Turn on heat." << endl;
	}
	else if (temperature <= 55 && temperature > 30) {

		cout << "Wear a heavy coat." << endl;
	}
	else if (temperature <= 30 && temperature > 0) {

		cout << "Wear gloves." << endl;
	}
	else if (temperature <= 0) {

		cout << "Stay inside, make a fire." << endl;
	}
	


	system("pause");
	return 0;
}


