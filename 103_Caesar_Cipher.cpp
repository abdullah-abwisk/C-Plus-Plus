#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void caesar_cipher(int, char []);

int main()
{
	int forward;
	char input_array[150];
	string input;
	cout << "Enter the string: ";
	getline(cin, input);
	cout << "Enter jump number: ";
	cin >> forward;
	fstream file_input;
	file_input.open("input.txt", ios::out);
	if(file_input)
	{
		file_input << input;
		file_input.close();
	}
	else
	{
		cout << "Error";
	}
	strcpy(input_array, input.c_str());
	
	caesar_cipher(forward, input_array);
	
	return 0;
}

void caesar_cipher(int jump, char array[150])
{
	for (int i = 0; array[i] != '\0'; i++)
	{
		if(array[i] >= 'A' && array[i] <= 'Z')
		{
			array[i] += jump;
			if(array[i] > 'Z')
				array[i] -= 26;
		}
		else if(array[i] >= 'a' && array[i] <= 'z')
		{
			if(array[i] >= 'l')
				array[i] -= 26;
			array[i] += jump;
			if(array[i] > 'z')
				array[i] -= 26;
		}
	}	
	for (int i = 0; array[i] != '\0'; i++)
	{
		cout << array[i];
	}
}
