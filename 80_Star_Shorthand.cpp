#include <iostream>
using namespace std;

int main()
{
	char currentcharacter, array[50];
	int currentrepeat = 0, i, j;
	cout << "Enter a string with repeated characters: ";
	cin >> array;
	
	for (i = 0; array[i] != '\0';)
	{
		currentcharacter = array[i];
		for (j = i; array[j] == currentcharacter; j++)
		{
			currentrepeat++;
		}
		
		cout << currentcharacter;
		
		if (currentrepeat > 1)
			cout << "*" << currentrepeat;	
			
		i = j;
		currentrepeat = 0;
	}
	
	return 0;
}
