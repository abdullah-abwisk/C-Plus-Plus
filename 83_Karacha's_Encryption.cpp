#include <iostream>
using namespace std;

int main()
{
	char input[30];
	int length = 0;
	char temp;
	cout << "Enter a word: ";
	cin >> input;
	for (int i = 0; input[i] != '\0'; i++)
	{
		length++;
	}
	
	for (int i = 0, j = length - 1; i < length / 2; i++, j--)
	{
		temp = input[i]; 
		input[i] = input[j];
		input[j] = temp;			
	}
	
	cout << "The Karaca's encryption for this word is:  ";
	
	for (int i = 0; i < length; i++)
	{
		if(input[i] == 'a' || input[i] == 'A')
			input[i] = '0';
		else if(input[i] == 'e' || input[i] == 'E')
			input[i] = '1';	
		else if(input[i] == 'i' || input[i] == 'I')
			input[i] = '2';
		else if(input[i] == 'o' || input[i] == 'O')
			input[i] = '2';
		else if(input[i] == 'u' || input[i] == 'U')
			input[i] = '3';
			
		cout << input[i];
	}
	cout << "aca";
	
	return 0;
}
