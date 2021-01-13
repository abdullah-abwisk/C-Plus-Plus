/* Programming Fundamentals : Assignment 03 : Q3
   Abdullah Khan : DS-N : 20i-0894 : Summations  */



#include <iostream>
using namespace std;

int main()
{
	int program_number, n;
	float sum = 0.0, x;
	cout << "Which summation do you want to run?";
	cin >> program_number;
	
	switch(program_number)
	{
	    case 1:
		
			cout << "Enter number of terms: ";
			cin >> n;
			x = 2.0;
			for (float i=1.0; i<= n; i++)
			{
				sum = sum + (1.0/x);
				x = x * 2;
			}
			cout << sum << endl;
		
		break;
		
		case 2:
		
			cout << "Enter number of terms: ";
			cin >> n;
			x = 2.0;
			for (float i=1.0; i<= n; i++)
			{
				sum = sum + (i/x);
				x = x + 1;
			}
			cout << sum << endl;
			
		break;
		
		case 3:
			
			cout << "Enter number of terms: ";
			cin >> n;
			x = 1.0;
			for (float i=1.0; i<= n; i++)
			{
				sum = sum + (1/x);
				x = x + 1;
			}
			cout << sum << endl;
			
		break;
	}
	return 0;	

}
