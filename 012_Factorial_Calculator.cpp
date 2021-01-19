/* Lab Task 08 : Problem 01
   Abdullah Khan : 20i-0894 */



#include <iostream>
using namespace std;

int main()
{
	int number_entered, factorial = 1;
	cout << "Please enter the number:  ";
	cin >> number_entered;
	if (number_entered < 0)
	{
		cout << "Invalid number entered.\n";
	}
	
	else if (number_entered == 0)
	    cout << "The factorial of this number is: 1";
	    
	else
	{
		for (; number_entered >= 1; number_entered--)
		{
			factorial = factorial * number_entered;
		}
		cout << "The factorial of this number is: " << factorial << endl;
	}
	return 0;
}
