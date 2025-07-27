


/*  *Author: Demetrius Johnson
	*Creation Date: 05 Feb. 2020
	*Modification Date: 05 Feb. 2020
	*Purpose: Display a message based on user input of a valid letter grade

	// LAB 4 - CIS 150 - MEECH.cpp

	Question 2

	Use a switch statement to write the following program:

	The program prompts the user for a letter grade (of type char). The list of valid letter grades is:
	A	B	C	D	E	F

	The program should consider both lower and upper case

	The program will then display the following messages:
	For grade 'A': display "Excellent"
	For grade 'B': display "Good"
	For Grade 'C': display "Average"
	For grade 'D' or 'E': display "Below Average"
	For Grade 'F': display "Fail"
	For any other letter grade entered by users: display "Invalid Grade"



*/


#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char studentLetGrad;

	cout << "The list of valid letter grades is:" << endl;
	cout << "A	B	C	D	E	F" << endl;
	cout << "Enter a letter grade: ";
	cin >> studentLetGrad;

	studentLetGrad = toupper(studentLetGrad);				// change lowercase input letter to uppercase
	cout << endl;

	switch (studentLetGrad) {								// swtich statement instead of if-else parameters
		case 'A':
			cout << "Excellent" << endl;
		break;
		case 'B':
			cout << "Good" << endl;
			break;
		case 'C':
			cout << "Average" << endl;
			break;
		case 'D':
		case 'E':
			cout << "Below Average" << endl;
			break;
		case 'F':
			cout << "Fail" << endl;
			break;
		default:
			cout << "Invalid Grade" << endl;
		break;
	}
	cout << endl;
	system("pause");
	return 0;
}


