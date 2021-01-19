/* Programming Fundamentals : Assignment 03 : Q8
   Abdullah Khan : DS-N : 20i-0894 : Happy Numbers */
   


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int input_num, sum = 0, initial_num, counter = 1, last_digit, value = 0;
	cout << "Enter your number: ";
	cin >> input_num;
	initial_num = input_num;
	do
	{ 
		value = 0;	
		while(input_num > 0)
		{
			last_digit = input_num % 10;
			value = value + pow(last_digit, 2);
			input_num /= 10;
		}
		counter++;
		input_num = value;
	}while(value > 1 && counter < 11);
	
	if(value == 1)
	    cout << initial_num << " is a happy number.";
	else
		cout << "Sorry. Happiness is not a part of your life.";    
	
	return 0;
}   
