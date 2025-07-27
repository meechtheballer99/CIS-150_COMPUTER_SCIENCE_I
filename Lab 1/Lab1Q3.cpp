/* Author: Demetrius Johnson
   Creation Date: 15 Jan. 2020
   Last Modification Date: 15 Jan. 2020
   Purpose: Create this output:  
	 * 
	*** 
   ***** 
  ******* 

*/

#include <iostream> 
#include <string>
using namespace std;

int main() 
{

	/* Type your code here.
	*I will using string function that I learned from 
	*the Zybooks homework to solve this program solution for the tree output(:	
	      *
	     ***
        *****
       *******
	*/

	string oneStars   = "   *";
	string threeStars = "  ***";
	string fiveStars  = " *****";
	string sevenStars = "*******";
	
	cout << oneStars << endl << threeStars << endl << fiveStars << endl << sevenStars << endl;

	system("pause");
	return 0;
}
