#include <iostream>
#include <iomanip>
using namespace std;

float grade2number(char grade)
{
	switch(grade)
	{
		case 'A':
			return 4.0;
		break;
		case 'B':
			return 3.0;
		break;
		case 'C':
			return 2.0;
		break;
		case 'D':
			return 1.0;
		break;
		case 'F':
			return 0.0;
		break;
		default:
			return -1.0;					
	}
}

int main()
{
	char grade;
	cout << setprecision(1) << fixed;
	cout << "Enter your grade (no +/-) : ";
	cin >> grade;
	cout << "Your GPA is: " << grade2number(grade) << endl;
	return 0;
}
