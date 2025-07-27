/*
	*Author: Demetrius Johnson
	*Creation Date: 01 April 2020
	*Modification Date: 01 April 2020
	*Purpose: Calculates the number of days with freezing temperatures from an input file by the user and displays it to screen

	// LAB 10 - CIS 150 - MEECH.cpp

	Question 2
	-------------------------

	You are required to use vectors in this question. We consider a vector that contains daily recorded temperatures.

	Write the following two functions:

	// The function returns a new vector that contains all the freezing
	// temperatures in the original vector V. (<=32F) 
	// You need to consider the case where the vector is empty
	vector <int> vectorFreezingTemperatures (vector<int> & V)
	{



	}
	// The function reads temperatures (integers) from a text file and 
	// pushes them to the vector V. The number of integers in the file is 
	// unknown.
	void readTemperaturesFromFile (vector<int> & V, ifstream& ifs)
	{


	}

	Write a main program that asks the user for a file name. The file contains daily temperatures (integers). 
	The main calls the two functions to (1) store temperatures in the vector (2) displays the number of days with freezing temperatures. 
	You must provide at least 4 test cases (4 separate files consisting of different temperature data).


*/


#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

//-------------function declarations-------------------------//
void MenuOne();
vector<int> vectorFreezingTemperatures(vector<int>& v);
void readTemperaturesFromFile(vector<int>& v, ifstream& ifs);
void displayFrozenVector(vector<int>& v, vector<int> c);

//-------------function declarations-------------------------//


int main()
{
	vector<int> inputFileVector, frozenVector;
	ifstream ifs;							//input file stream for provided user file
	string userFile;						//user input file variable
	int numberOfDaysFromFile = 0;			// stores the number of values acquired from user input file
	MenuOne();

	cout << "Enter a file name to be searched for the number of freezing days.\nFile should contain one integer per line " 
		 << "or a space between each integer, and no other data.\n";
	cout << "Enter file name here: ";
	cin >> userFile;				//get user file

	ifs.open(userFile);				//open file
	if (!ifs.is_open()) {
		cout << "\n\nSorry, your file \"" << userFile << "\" was not found or corrupt and could not be opened. Please try again. Thank you.\n\n";
		return 0;
	}	   //make sure file is open. If not return messages to user to inform them file is not opened.
	else { cout << "\nThe user input file \"" << userFile << "\" was successfully found and opened.\n"; }

	readTemperaturesFromFile(inputFileVector, ifs);				//get the number of temp values from file and amend inputFileVector to store all file values
	frozenVector = vectorFreezingTemperatures(inputFileVector);		//stores all values <= 32 into a new vector
	displayFrozenVector(frozenVector, inputFileVector);			//displays the new frozen vector to cout (if the vector has any valid output)
																//otherwise it will display original file input to show there are no frozen days
	ifs.close();				//properly close file
	system("pause");
	return (0);
}



//----------------------function definitions below this line ------------------------------------//


void MenuOne() {

	cout << "\n---------------------------------------WELCOME----------------------------------------------------------";
	cout << "\nThis program calculates the number of days with freezing temperatures (<= 32 deg F)\nfrom a user input file and displays the result.\n\n";
}



/*
	*Author: Demetrius Johnson
	*Creation Date: 01 April 2020
	*Modification Date: 01 April 2020
	*Purpose: copies input from a file into a vector
*/

void readTemperaturesFromFile(vector<int>& v, ifstream& ifs) {
	
	int fileInputValue, numberOfDays = 0;
	if (ifs.peek() == EOF) {
		cout << "\nThe file is empty and contains no data.\n";
		v.push_back(-1000);
		return;
	}
	while(ifs.peek() != EOF) {

		ifs >> fileInputValue;
		v.push_back(fileInputValue);
		numberOfDays++;
	}
	cout << "\nFile successfully processed. Reached End of File (EOF):" << "\nThe number of temperature dates from the file to be processed is " << numberOfDays << " days.\n";

	return;
}

/*
	*Author: Demetrius Johnson
	*Creation Date: 01 April 2020
	*Modification Date: 01 April 2020
	*Purpose: calculates number of vector values at or below 32 (<=32) and places each valid value into a new vector, and returns that vector.
*/


vector<int> vectorFreezingTemperatures(vector<int>& v) {
	int frozenDays = 0;
	int elementPositionValue = 0; //stores the value of a given element position in the vector
	vector<int> frozenValuesVector;
	
	for (int elementPositionCount = 0; elementPositionCount < v.size(); elementPositionCount++) { //elementPositionCount goes through every element of the vector

		elementPositionValue = v.at(elementPositionCount);

		if (elementPositionValue <= 32) {
			frozenValuesVector.push_back(elementPositionValue);
		}
	}
	if (v.at(0) == -1000) {
		cout << "\nThere is no data to be processed. Goodbye.\n\n";
	}

	return frozenValuesVector;
}


/*
	*Author: Demetrius Johnson
	*Creation Date: 01 April 2020
	*Modification Date: 01 April 2020
	*Purpose: checks to see if a vector has no frozen days. Returns true if no frozen days, false if there is a day <=32.
*/

bool NoFrozenDays(vector<int>& c) {

	int frozenDays = 0;
	int elementPositionValue = 0; //stores the value of a given element position in the vector
	vector<int> frozenValuesVector;

	for (int elementPositionCount = 0; elementPositionCount < c.size(); elementPositionCount++) { //elementPositionCount goes through every element of the vector

		elementPositionValue = c.at(elementPositionCount);

		if (elementPositionValue <= 32) {
			frozenDays++;
		}
	}
	if (frozenDays == 0) {
		return true;
	}

	return false;

}



/*
	*Author: Demetrius Johnson
	*Creation Date: 01 April 2020
	*Modification Date: 01 April 2020
	*Purpose: displays the frozen vector as cout if there are valid values input into the frozen vector input. (no forzen days == false).
*/
void displayFrozenVector(vector<int>& v, vector<int> c) {

	if (NoFrozenDays(v)) {
		cout << "\n\nThere are no frozen days: \n\n";
		for (int elementPosition = 0; elementPosition < c.size(); elementPosition++) {

			cout << c.at(elementPosition) << endl;
		}
		cout << "\nAll " << c.size() << " days are above freezing.\nThank you(:.";
		return;

	}

	cout << "\nThese are the temperatures that are at or below freezing (<=32F)\naccording to your input file (in the order that they appeared): \n\n";

	for (int elementPosition = 0; elementPosition < v.size(); elementPosition++) {
		
		cout << "\t";
		if (v.at(elementPosition) >= 0)
			cout << " ";
		cout << v.at(elementPosition) << endl;

	}
	cout << "\nThe number of frozen days are: " << v.size() << endl << endl;

	return;
}