/*
	*Author: Demetrius Johnson
	*Creation Date: 18 Mar. 2020
	*Modification Date: 18 Mar. 2020
	*Purpose: using Structs, reads grades from a file specified by user and processes the data of high, low, avg, and number of students into another a file specified by the user

	// LAB 9 - CIS 150 - MEECH.cpp

	Question 2
	-------------------------

	Let’s consider an input file that contains student id (int), first name (string), last name (string), and grade (float). We assume that the file contains information for a maximum of 10 students.

	Write a program that:

•	Declare the structure named student composed of id (int), first (string), last (string), and grade (float).
•	Asks the user for the name of the input file.
•	Reads the grades from the file to fill up an array of type student. 
•	Calculates and displays (to a file) the maximum grade in the array with name.
•	Calculates and displays (to a file) the minimum grade in the array with name.
•	Calculates and displays (to a file) the average grade.
•	Calculates and displays (to a file) how many students were processed. 
•	Produce a file with the information above based on a file name provided by the user.
•	The main idea is to explore the benefits of using structs. So every task should be done after the whole array is filled up
•	All tasks must be done with functions w/ parameters. Any cin/cout statements must be done from main().


*/


#include <iostream>
#include <limits>
#include <string>
#include <fstream>

using namespace std;
struct student {int id = 0; string firstName = "first", lastName = "last"; float grade = 0.0;};

//-------------function declarations-------------------------//
void MenuOne();
int readFileToArrayAndAcquireClassSize(ifstream& inputFileStream, student classSection[], int sizeOfArray);
void outputArrayToFile(ofstream& outputFileStream, student classSection[], int sizeOfArray);
int maxGradeStruct(ofstream& outputFileStream, student classSection[], int sizeOfArray);  
int minGradeStruct(ofstream& outputFileStream, student classSection[], int sizeOfArray);
float avgGradeStruct(ofstream& outputFileStream, student classSection[], int sizeOfArray);

//-------------function declarations-------------------------//


int main()
{
	const int ARRAY_SIZE_MAX_STUDENT = 10;
	int studentsProcessedCount = 0, maxGrade = 0, minGrade = 0;
	float classAverage = 0;
	string userFileNameInput, userFileNameOutput;
	ifstream inputFileStream;
	ofstream outputFileStream;
	student classSection[ARRAY_SIZE_MAX_STUDENT];
	MenuOne(); 

	cout << "\nPlease enter the name of the input file from which you would like the program to read data.\n";
	cout << "Enter filename here: ";											//prompt user to enter a filename for input
	cin >> userFileNameInput;

	inputFileStream.open(userFileNameInput);
	if (!inputFileStream.is_open()) {												//open files and make sure they are open
		cerr << "\n\nSorry, unable to open file or specified file not found.\n\n";
		return (0);
	}

	cout << "\nPlease input the name of the output file to which you would like the program to write calculated data results.\n";
	cout << "Enter filename here: ";
	cin >> userFileNameOutput;										//prompt user to enter a filename for output

	outputFileStream.open(userFileNameOutput);
	if (!outputFileStream.is_open()) {													//open files and make sure they are open
		cerr << "\n\nSorry, unable to open file or specified file not found.\n\n";
		return (0);
	}


	studentsProcessedCount = readFileToArrayAndAcquireClassSize(inputFileStream, classSection, ARRAY_SIZE_MAX_STUDENT);//find number of students in class from input file (<=10)
	cout << endl << "Number of students processed from input file: " << studentsProcessedCount << endl << endl;			

	outputArrayToFile(outputFileStream, classSection, studentsProcessedCount);			  //
	classAverage = avgGradeStruct(outputFileStream, classSection, studentsProcessedCount);//
	maxGrade = maxGradeStruct(outputFileStream, classSection, studentsProcessedCount);    // groups of function calls to be output to a file and the value returned in main
	minGrade = minGradeStruct(outputFileStream, classSection, studentsProcessedCount);	 //


	inputFileStream.close();					//close files
	outputFileStream.close();
	cout << "The NUMBER_OF_STUDENTS in the class is: " << studentsProcessedCount << endl;
	cout << "The AVERAGE GRADE in the class is: " << classAverage << endl;
	cout << "The MAXIMUM GRADE in the class is: " << maxGrade << endl;						//added cout's for a preview of what should be in the output file
	cout << "The MINIMUM GRADE in the class is: " << minGrade << endl << endl;

	cout << "\n\nThank you, your data from \"" << userFileNameInput 
		 << "\" was successfully processed.\nThe results were written to: \"" << userFileNameOutput << "\"" << endl << endl;

	system("pause");
	return (0);
}



//----------------------function definitions below this line ------------------------------------//


void MenuOne() {

	cout << "\n---------------------------------------WELCOME----------------------------------------------------------";
	cout << "\nThis program reads grades from a file specified by the user and processes the data of high, low, avg,\n"
		<< "and the number of students into another a file specified by the user.\n"
		<< "The maximum number of students that can be processed is a class section of 10 students.\n\n";
	cout << "Each line of your input file should contain the following information in this order and should contain no empty lines: \n\n";
	cout << "student_ID" << "\t" << "firstName" << "\t\t" << "lastName" << "\t\t" << "grade" << endl << endl;
}

/*
	*Author: Demetrius Johnson
	*Creation Date: 18 Mar. 2020
	*Modification Date: 29 Mar. 2020
	*Purpose: Acquire class size of a data input file and put all student data in each element of an array of type student

*/
int readFileToArrayAndAcquireClassSize(ifstream& inputFileStream, student classSection[], int sizeOfArray) {

	int numStudProcessed = 0;
	for (; numStudProcessed < sizeOfArray; numStudProcessed++) {
		
		if (inputFileStream.peek() == EOF) {
				cout << endl << endl << "Reached End of File (EOF).";
				break;
		}
		else {
				inputFileStream >> classSection[numStudProcessed].id 
								>> classSection[numStudProcessed].firstName 
								>> classSection[numStudProcessed].lastName 
								>> classSection[numStudProcessed].grade;
		}

		
	}

	return numStudProcessed;
} //inputs data into an array and returns the number of students that were processed and input into the array.

/*
	*Author: Demetrius Johnson
	*Creation Date: 18 Mar. 2020
	*Modification Date: 29 Mar. 2020
	*Purpose: Use an array of type student to output the data from the input file into the output file as a copy of the input file's data -- solely for visual purposes
	*Purpose 2: Returns the class size (number of students)
*/
void outputArrayToFile(ofstream& outputFileStream, student classSection[], int sizeOfArray) {

	outputFileStream << "student_ID" << "\t" << "firstName" << "\t\t" << "lastName" << "\t\t" << "grade" << endl << endl;
	for (int i = 0; i < sizeOfArray; i++) {

			outputFileStream << classSection[i].id << "\t\t" << classSection[i].firstName << "\t\t" << classSection[i].lastName << "\t\t" << classSection[i].grade;
			outputFileStream << endl;
	}
	outputFileStream << endl << "Number of students in this section: " << sizeOfArray;
}

/*
	*Author: Demetrius Johnson
	*Creation Date: 18 Mar. 2020
	*Modification Date: 29 Mar. 2020
	*Purpose: Determine the maximum grade of a student stored in the array of type student and output it to a file and returns the max grade value

*/
int maxGradeStruct(ofstream& outputFileStream, student classSection[], int sizeOfArray) {

	int arrayPosition = 0, highestGradeArrayPosition = 0, maxGrade = classSection[0].grade;
	while (arrayPosition < sizeOfArray) {
	
		if (maxGrade < classSection[arrayPosition].grade) {
			maxGrade = classSection[arrayPosition].grade;
			highestGradeArrayPosition = arrayPosition;
		}
		arrayPosition++;
	}

	outputFileStream << endl << "MAX GRADE in the class is: " << maxGrade << "_____achieved by "
					 << classSection[highestGradeArrayPosition].firstName << " " << classSection[highestGradeArrayPosition].lastName;

	return maxGrade;
}
/*
	*Author: Demetrius Johnson
	*Creation Date: 18 Mar. 2020
	*Modification Date: 29 Mar. 2020
	*Purpose: Determine the minimum grade of a student stored in the array of type student and output it to a file and returns the min grade value

*/
int minGradeStruct(ofstream& outputFileStream, student classSection[], int sizeOfArray) {

	int arrayPosition = 0, lowestGradeArrayPosition = 0, minGrade = classSection[0].grade;
	while (arrayPosition < sizeOfArray) {

		if (minGrade > classSection[arrayPosition].grade) {
			minGrade = classSection[arrayPosition].grade;
			lowestGradeArrayPosition = arrayPosition;
		}
		arrayPosition++;
	}

	outputFileStream << endl << "MAX GRADE in the class is: " << minGrade << "_____achieved by "
							 << classSection[lowestGradeArrayPosition].firstName << " " << classSection[lowestGradeArrayPosition].lastName;

	return minGrade;

}

/*
	*Author: Demetrius Johnson
	*Creation Date: 18 Mar. 2020
	*Modification Date: 29 Mar. 2020
	*Purpose: calculates the average grade of the class stored in the array of type student and outputs it to a file and returns the average grade value

*/
float avgGradeStruct(ofstream& outputFileStream, student classSection[], int sizeOfArray) {

	int arrayPosition = 0;
	float classAvg = 0, sum = 0;

	while (arrayPosition < sizeOfArray) {

		sum += classSection[arrayPosition].grade;
		arrayPosition++;
	}
	classAvg = (sum / sizeOfArray);

	outputFileStream << endl << "The CLASS AVERAGE is: " << classAvg;

	return classAvg;

}
