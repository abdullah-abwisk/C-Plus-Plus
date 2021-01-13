#include <iostream>
using namespace std;

int moonsum(int, int);

int main()
{
	int num_1, num_2, moon_sum;
	cout << "Enter a three or less digits number 1: ";
	cin >> num_1;
	cout << "Enter a three of less digits number 2: ";
	cin >> num_2;
	
	if(num_1 / 100 >= 10 || num_2 / 100 >= 10)
		cout << "Invalid numbers entered.\n";
	else
	{
		moon_sum = moonsum(num_1, num_2);
		cout << "The moon sum of these two numbers is: " << moon_sum << endl;
	}	
	
	return 0;
}

int moonsum(int num_1, int num_2)
{
	int first_hundreds, second_hundreds, first_tens, second_tens, first_ones, second_ones, sum = 0;
	first_ones = num_1 % 10;
	num_1 /= 10;
	first_tens = num_1 % 10;
	num_1 /= 10;
	first_hundreds = num_1;
	second_ones = num_2 % 10;
	num_2 /= 10;
	second_tens = num_2 % 10;
	num_2 /= 10;
	second_hundreds = num_2;
	
	if (first_ones >= second_ones)
		sum += first_ones;
	else 
		sum += second_ones;
		
	if (first_tens >= second_tens)
		sum += first_tens * 10;
	else 
		sum += second_tens * 10;
		
	if (first_hundreds >= second_hundreds)
		sum += first_hundreds * 100;
	else 
		sum += second_hundreds * 100;
		
	return sum;				
}
