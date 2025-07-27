


/*  *Author: Demetrius Johnson
	*Creation Date: 29 Jan. 2020
	*Modification Date: 29 Jan. 2020
	*Purpose: Computes the weekly pay for a worker, including any applicable overtime

	// LAB 3 - CIS 150 - MEECH.cpp

	Question 3:

	*You are to write a program to compute the weekly pay for a worker, including any applicable overtime.  
	*Overtime refers to hours worked per week in excess of 40 hours. 
	*Companies pay regular pay up to and including 40 hours per week and time-and-a-half only for overtime hours.

	//Input: The number of hours worked in 1 week (a double)
             The amount of pay per hour (a double) 
				//place both cin input values on same line for entry; ex: 10.0 20.0
	//Output:  The total pay for the week

	Sample input/user entries:
	//Enter the hours worked and the pay rate: 30.0 10.0	Gross pay for the week is $300
	//Enter the hours worked and the pay rate: 50.0 10.0	Gross pay for the week is $550




*/


#include <iostream>
#include <string>
using namespace std;

int main() {
	double numHrsWorked, hourlyWage, totalPayForWeek, OT_Hours, OT_PayRate = 1.5;
	string userName;

	cout << "Please enter the total amount in hours that you have worked this week and your hourly wage" << endl;
	cout << "(enter both values on the same line separated by a space; HOURS _ HRLYWAGE): ";
	cin >> numHrsWorked >> hourlyWage;

	if (numHrsWorked <= 40)
	{
		totalPayForWeek = numHrsWorked * hourlyWage;
		cout << "Your gross pay for the week is: $" << totalPayForWeek << endl;
	}
	else
	{
		OT_Hours = numHrsWorked - 40;
		OT_PayRate = OT_PayRate * hourlyWage;
		totalPayForWeek = (40.0 * hourlyWage) + (OT_Hours * OT_PayRate);
		cout << "Your gross pay for the week is: $" << totalPayForWeek << endl;
	}
	cout << "Thank you!(:" << endl;

	system("pause");
	return 0;
}

