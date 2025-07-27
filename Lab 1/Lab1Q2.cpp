/* Author: Demetrius Johnson
   Creation Date: 01 Jan. 2020
   Last Modification Date: 01 Jan 2020
   Purpose: Debug and execute a simple input-output program
*/

#include <iostream> 
#include <string>
using namespace std;

int main()
{

	string first;

	cout << endl << "Please enter your first name : ";
	cin >> first;

	cout << "Hi " << first << ": I hope you will enjoy CIS 150 this semester." << endl;

	system("pause");
	return 0;
}
