


/*  
	*Author: Demetrius Johnson
	*Creation Date: 26 Feb. 2020
	*Modification Date: 26 Feb. 2020
	*Purpose: A program that computes the weekly salary of each employee

	// LAB 7 - CIS 150 - MEECH.cpp

	Question 1
	-------------------------


	Consider a text file that you will create named "employees.txt".  The file contains data organized according to the following format:

	John     Smith      10     15
	Sarah    Johnson  	40     12
	Mary     Taylor	    27	   13
	Jim      Stewart    25	    8

	For instance, "John" is the first name, "Smith" is the last name, "20" is the number of hours per week, and "9" is the hourly rate.

	Write a program that computes the weekly salary of each employee. 
	The program prints the first name, last name, and weekly salary of each employee in a file named "results.txt". 
	The "results.txt" must be created automatically by your program. 
	You must use a function to read/process the data from the input file and this function must have parameters. 
	The "employees.txt" file must be opened from main and read from within your defined function.


*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//-------------function declarations-------------------------//
void weeklySalFileFunc(ifstream&, ofstream&);

void menuONE();
//-------------function declarations-------------------------//



int main()
{
	ifstream inputFileStream;
	ofstream outputFileStream;
	string fileName, results = "results.txt";
	menuONE();
	cin >> fileName;
	inputFileStream.open(fileName);
	if (!inputFileStream.is_open()) {
		cerr << "\n\nSorry, unable to open file or specified file not found.\n\n";
		return (0);
	}
	outputFileStream.open(results);
	if (!outputFileStream.is_open()) {
		cerr << "\n\nSorry, unable to open file or specified file not found.\n\n";
		return (0);
	}
	weeklySalFileFunc(inputFileStream, outputFileStream);
	inputFileStream.close();
	outputFileStream.close();
	cout << "\n\nThank you for filing with us(:\n\n";
	system("pause");
	return 0;
}

//----------------------function definitions below this line ------------------------------------//
void menuONE() {

	cout << "\n-------------------------------------------------------WELCOME----------------------------------------------------------";
	cout << "\nThis program computes the weekly salary of each employee\n" <<
			"from a provided user file and uploads results into a results file for a user.\n\n";
	cout << "Begin by entering the filename (including extension; ie .txt)\nfrom which you would like to compute results: ";
}
void weeklySalFileFunc(ifstream& ifs, ofstream& ofs) {

	string fName, lName;
	int weeklyHrs, payPerHr;
	ofs << "First Name\t\tLast Name\t\tWeekly Pay" << endl << endl;
	while (!ifs.eof()) {
		if (ifs.peek() == EOF) {
			cout << endl << "Reached End of File";
			break;
		}
		ifs >> fName >> lName >> weeklyHrs >> payPerHr;
		ofs << fName << "\t\t\t" << lName << "\t\t\t" << weeklyHrs * payPerHr << endl;
	}
	cout << endl << "Data was successfully located and read from your input file.\nResults were outputted in results.txt";
}