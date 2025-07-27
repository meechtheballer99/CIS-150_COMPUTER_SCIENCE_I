


/*
	*Author: Demetrius Johnson
	*Creation Date: 26 Feb. 2020
	*Modification Date: 26 Feb. 2020
	*Purpose: Calculates and displays the average and high score of all students by reading the data from the named file the user provided

	// LAB 7 - CIS 150 - MEECH.cpp

	Question 2
	-------------------------
	
	Consider a file with the following student information:

	John		Smith		99
	Sarah		Johnson		85
	Jim			Robinson	70
	Mary		Anderson	100
	Michael		Jackson		92

	Each line in the file contains the first name, last name, and test score of a student.

	Write a program that prompts the user for the file name, 
	then calculates and displays the average score of all students by reading the data from the named file the user provided.
	You should use a function to read/process the data from the file and this function must have parameters and should use call by reference. 
	Your program should also present the highest score in class. The average and highest scores must be determined within your function. 
	However, the display of the average and highest scores must be done in main.



*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//-------------function declarations-------------------------//
void classAvgAndHighFileFunc(ifstream&, ofstream&);

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
	classAvgAndHighFileFunc(inputFileStream, outputFileStream);
	inputFileStream.close();
	outputFileStream.close();
	cout << "\n\nThank you for filing with us(:\n\n";
	system("pause");
	return 0;
}

//----------------------function definitions below this line ------------------------------------//
void menuONE() {

	cout << "\n-------------------------------------------------------WELCOME----------------------------------------------------------";
	cout << "\nThis program computes the class average and highest score\n" <<
		"from a provided user file and uploads results into a results file for the user.\n\n";
	cout << "Begin by entering the filename (including extension; ie .txt)\nfrom which you would like to compute results: ";
}
void classAvgAndHighFileFunc(ifstream& ifs, ofstream& ofs) {

	string fName, lName;
	int score, sumScores = 0, scoresAdded = 0, runningMaxScore = 0;
	
	ofs << "First Name\t\tLast Name\t\tScore" << endl << endl;
	while (!ifs.eof()) {
		if (ifs.peek() == EOF) {
			cout << endl << "Reached End of File";
			break;
		}
		ifs >> fName >> lName >> score;
		sumScores += score;
		if (runningMaxScore < score) {
			runningMaxScore = score;
		}
		ofs << fName << "\t\t\t" << lName << "\t\t\t" << score << endl;
		scoresAdded++;
	}
	ofs << "\nThe number of students in the class is: " << scoresAdded;
	cout << "\nThe number of students in the class is: " << scoresAdded;
	ofs << "\nThe max score for the class is: " << runningMaxScore << endl;
	cout << "\nThe max score for the class is: " << runningMaxScore << endl;
	ofs << "The class average is: " << (sumScores / scoresAdded) << endl;
	cout << "The class average is: " << (sumScores / scoresAdded) << endl;
	cout << endl << "Data was successfully located and read from your input file.\nResults were outputted in results.txt";
}

