#include <iostream>
using namespace std;

void digit_name(int digit)
{
	if (digit < 1 || digit > 9)
		cout << "digit error\n";
	else
	{
		switch(digit)
		{
			case 1:
				cout << "One";
			break;
			case 2:
				cout << "Two";
			break;
			case 3:
				cout << "Three";
			break;
			case 4:
				cout << "Four";
			break;
			case 5:
				cout << "Five";
			break;
			case 6:
				cout << "Six";
			break;
			case 7:
				cout << "Seven";
			break;
			case 8:
				cout << "Eight";
			break;
			case 9:
				cout << "Nine";
			break;	
		}
	}		
}

int main()
{
	int digit;
	cout << "Enter a digit: ";
	cin >> digit;
	digit_name(digit);
	return 0;
}
