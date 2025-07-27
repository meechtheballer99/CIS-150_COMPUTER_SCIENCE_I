


/*  
	*Author: Demetrius Johnson
	*Creation Date: 12 Feb. 2020
	*Modification Date: 12 Feb. 2020
	*Purpose: Computes the average grade in the class

	// LAB 5 - CIS 150 - MEECH.cpp

	Question 1
	-------------------------
	Write a program that asks the user for the number of students in the class. 
	The program asks the user for the grade of each student, computes the average grade in the class, and displays the calculated average.
	You are required to use the for loop.


*/


#include <iostream>
using namespace std;


//-------------function declarations-------------------------//

void MenuOne();												 //
int compAVG(int x, int y);
//-------------function declarations-------------------------//


int main()
{
	int totNumStud, totalNumStudOrigin, studGrade, studGradeSum = 0, studAvgGr, studID = 1;
	MenuOne(); //instruction menu
	

	cout << endl << endl << "Enter the value for the number of students in the class: ";
	cin >> totNumStud;
	totalNumStudOrigin = totNumStud;

	for (int countONE = totNumStud; countONE > 0; countONE = --totNumStud) {

		cout << "Enter the grade for Student_ID_" ;
	
		cout << studID << ": ";
		cin >> studGrade;	//individual student's grade hold value

		studID++;	 //increment student ID until it reaches totNumStud = the total number of students in the class
		studGradeSum += studGrade;
	
	}

	cout << endl;
	studAvgGr = compAVG(studGradeSum, totalNumStudOrigin);

	cout << endl << "Total points earned by class: " << studGradeSum << endl;
	cout << "The average grade per student is: " << studAvgGr << endl;

	cout << endl << "Thank you for averaging with us(:" << endl;
	
	

	system("pause");
	return 0;
}


//----------------------function definitions below this line ------------------------------------//

void MenuOne()
{
	cout << "This program computes the average class grade based on (whole number/integer average only)" << endl;
	cout << "the number of students in a class and each student's" << endl << "respective score." << endl << endl;
	cout << "To begin, please input total number of students in the class." << endl;
	cout << "Then, program will prompt you to input the grade for each student." << endl;
	cout << "Finally, program will compute the average student score for the class." << endl;
	cout << "This universal program computes the average of any set of data; point scale of class not considered." << endl;
	return;
}
int compAVG(int x, int y)
{
	int z;
	if (y == 0) {
		cout << "\nNo students in class; no average can be calculated --divide by 0 is undefined." << endl;
		return (0);
	}
	else {
		z = x / y;
		return (z);
	}
} 