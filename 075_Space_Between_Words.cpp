#include <iostream>
#include <cctype>
using namespace std;

void outspaces(char []);

int main()
{
	char input[100];
	cout << "Enter a connected string with each word starting with an uppercase: ";
	cin >> input;
	outspaces(input);
	
	return 0;
}

void outspaces(char input[50])
{
	for (int i = 0; input[i] != '\0'; i++)
	{
		cout << input[i];
		if (isupper(input[i + 1]))
			cout << " ";	
	}
}
