#include <iostream>
using namespace std;

int main()
{
	char str[100];
	char *Ptr;
	int length = 0;
	cout << "Enter a string: ";
	cin >> str;
	Ptr = &str[0];
	if (*Ptr != 0)
	{
		for (int i = 0; *(Ptr + i) != 0; i++) 
		{
			*(Ptr + i) = str[i];
			length++;
		}
	}
	
	cout << "The length of the string is: " << length << endl;
	
	return 0;
}
