#include <iostream>
using namespace std;

int main()
{
	char str[100];
	char *Ptr;
	int vowelcount = 0, concount = 0;
	cout << "Enter a string: ";
	cin >> str;
	Ptr = &str[0];
	for (int i = 0; *(Ptr + i) != 0; i++)
	{
		*(Ptr + i) = str[i]; 
		switch(*(Ptr + i))
		{
			case 'a':
				vowelcount++;
			break;
			case 'e':
				vowelcount++;
			break;
			case 'i':
				vowelcount++;
			break;
			case 'o':
				vowelcount++;
			break;
			case 'u':
				vowelcount++;
			break;
			case 'A':
				vowelcount++;
			break;
			case 'E':
				vowelcount++;
			break;
			case 'I':
				vowelcount++;
			break;
			case 'O':
				vowelcount++;
			break;
			case 'U':
				vowelcount++;
			break;
			default:
				concount++;
		}
	}
	cout << "The number of vowels is: " << vowelcount << endl;
	cout << "The number of consonants is: " << concount << endl;
	
	return 0;
}
