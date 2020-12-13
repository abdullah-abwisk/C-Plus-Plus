#include <iostream>
using namespace std;

int main()
{
	char str[17];
	char temp;
	cout << "Enter a string of max 16 letters: ";
	cin >> str;
	cout << "You entered: " << str << endl;
	
	for (int i = 0; i <= 7; i++)
	{
		temp = str[i];
		str[i] = str[15 - i];
		str[15 - i] = temp;
	}
	
	cout << "In reverse order, the string is ";
	for (int i = 0; i <= 16; i++)
		cout << str[i];
	
	return 0;
}
