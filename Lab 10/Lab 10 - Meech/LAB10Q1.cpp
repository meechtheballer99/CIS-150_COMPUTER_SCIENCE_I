


/*  
	*Author: Demetrius Johnson
	*Creation Date: 01 April 2020
	*Modification Date: 01 April 2020
	*Purpose: use #include <vector> and fix any errors

	// LAB 10 - CIS 150 - MEECH.cpp

	Question 1
	-------------------------


	Let’s consider the following code.

	•	Compile and fix all errors.
	•	No test cases are required for this question.
	•	Run and provide a single screenshot showing the output.
	•	Complete the missing comments to explain the action performed by each statement highlighted in red. The first comment is given as an example.
	•	Copy and paste the source code with the comments filled out in your report.



	#include <vector>			// Compiler directive to use vectors
	#include <iostream>

	using namespace std;

	int main () {
			vector<double> v;	//

			v.assign( 8, 16.3 );		//
			v[2] = 16.4; v[3] = 20.6;	//
			v.push_back(17.8);		//
			v.push_back(-7.3);		//

			for( int i = 0; i < v.size(); i++ ) {	// v.size()gives 
					cout << v[i] << " ";		// v[i] gives 
					}
			cout << endl;
			cout << v.front() << " " << v.at(2) << " " << v.back() << endl;
	// v.front() gives
	// v.at(2) gives
	// v.back() gives 
	}



*/


#include <vector>			// Compiler directive to use vectors
#include <iostream>



void MenuONE();
using namespace std;

int main() {
	vector<double> v;	// declare a vector of type double, called v, and uninitialized. Vectors can be amended during execeution/compilation.

	v.assign(8, 16.3);		// initializes and assigns the first 8 elements (elements 0-7) with the same value: 16.3.
	v[2] = 16.4; v[3] = 20.6;	// assigns the values 16.4 and 20.6 to vector v elements 2 and 3.
	v.push_back(17.8);		// push_back memeber function amends a vector by adding a value to the end, in this case adding element 8 and assigning it 17.8.
	v.push_back(-7.3);		// push_back memeber function amends a vector by adding a value to the end, in this case adding element 9, and assigning it -7.3.

	for (int i = 0; i < v.size(); i++) {	// v.size() gives number of elements in vector and returns it as an integer. For-loop cycles through the vector and outputs all element values.
		cout << v[i] << " ";		// each element of vector v corresponds to the loop integer 'i' to output every element's value to cout (as i increments each loop iteration).
	}
	cout << endl;
	cout << v.front() << " " << v.at(2) << " " << v.back() << endl;
	// v.front() gives the value of the very first element of vector v.
	// v.at(2) gives the value of the second element of vector v.
	// v.back() gives the value of the very last element of vector v.
}


