/* Lab Task 08 : Problem 03
   Abdullah Khan : 20i-0894 */



#include <iostream>
using namespace std;

int main()
{
	int input_value, positive_sum = 0, negative_sum = 0, odd_sum = 0, even_sum = 0;
	do
	{
		cout << "Enter a number: ";
		cin >> input_value;
		if (input_value > 0)
		    positive_sum += input_value;
		if (input_value < 0)
		    negative_sum += input_value;
		if (input_value % 2 == 1 || input_value % 2 == -1)
		    odd_sum += input_value;
		if (input_value % 2 == 0)
		    even_sum += input_value;
					 	    
	}
	while (input_value != 0);
	
	cout << "The sum of positive numbers entered is: " << positive_sum << endl;
	cout << "The sum of negative numbers entered is: " << negative_sum << endl;
	cout << "The sum of odd numbers entered is: " << odd_sum << endl;
	cout << "The sum of even numbers entered is: " << even_sum << endl;
	
	return 0;
}
