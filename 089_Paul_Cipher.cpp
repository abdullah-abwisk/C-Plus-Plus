#include <iostream>
using namespace std;

int main()
{
	char word[20], final[20];
	int previous;
	cout << "Enter the word: ";
	cin >> word;
	if (word[0] >= 97)
		final[0] = word[0] - 32;
		
	cout << final[0];
	previous = word[0] - 64;	 
	for (int i = 1; word[i] != '\0'; i++)
	{
		if(word[i] <= 57)
		{
			final[i] = word[i];
			cout << final[i];
			continue;
		}
			
		if(word[i] >= 97)
			final[i] = word[i] - 32;	
//		cout << word[i];
		
		if(i > 1 && word[i] <= 90)	
			previous = word[i] - 64;
		else if(i > 1 && word[i] >= 97)
			previous = word[i] - 96;			
			
		final[i] = word[i] + previous;
//		cout << word[i];
		if (final[i] > 90)
			final[i] = final[i] - 26;
			
		cout << final[i];				
	}
}
