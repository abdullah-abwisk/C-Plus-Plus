/* Lab Task 08 : Problem 05
   Abdullah Khan : 20i-0894 */



#include <iostream>
using namespace std;

int main()
{
	int number_of_rows;
	cout << "Enter the number of rows: ";
	cin >> number_of_rows;
	for (int row_number = 1; row_number <= number_of_rows; row_number++)
	{
		
		for (int space = number_of_rows ; space > row_number; space--)
		{
			cout << " ";
		}
		
		for (int digit_first_half = row_number; digit_first_half >= 1; digit_first_half--)
		{
			cout << digit_first_half;
		}
		
		for (int digit_second_half = 2; digit_second_half <= row_number; digit_second_half++)   
		{
			cout << digit_second_half;
		} 
		
		
	cout << endl;	
	}
	return 0;
}
