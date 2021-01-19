#include <iostream>
using namespace std;

void fibonacci(int input)
{
	int one = 1, two = 1, sum;
	if(input == 1 || input == 2)
	{
		sum = 1;
	}
	else
	{
		for (int i = 3; i <= input; i++)
		{	
			sum = one + two;
			one = two;
			two = sum;
		}
	}
	cout << sum;
}

int main()
{	
	int input;
	cout << "Enter your number: ";
	cin >> input;
	fibonacci(input);
	return 0;
}
