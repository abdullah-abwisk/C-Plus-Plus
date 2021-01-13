#include <iostream>
using namespace std;

int main()
{
	int X1[6] = {9, 6, 3, 3, 6, 42};
	int X2[6] = {7, 4, 67, 89, 36, 9};
	bool equal = true;
	
	// checking if both are equal or not
	for (int i = 0; i < 6; i++)
	{
		if (X1[i] == X2[i])
			equal = true;
		else
		{
			equal = false;
			break;
		}	
	}
	if (equal == true)
		cout << "Arrays are equal.\n";
	else
		cout << "Arrays are not equal.\n";
	
	// checking if corresponding elements are equal
	for (int j = 0; j < 6; j++)
	{
		if (X1[j] == X2[j])
		{
			cout << "Elements at index " << j << " are equal.\n";
		}
		else
			cout << "Elements at index " << j << " are not equal.\n";
	}
	return 0;
}
