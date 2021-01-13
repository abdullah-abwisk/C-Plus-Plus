#include <iostream>
using namespace std;

int main()
{
	int length; 
	int *ptr_array_1, *ptr_array_2;
	bool simon_says = true;
	cout << "Enter the length of the array: ";
	cin >> length;
	int array_1[length], array_2[length];
	ptr_array_1 = &array_1[0];
	ptr_array_2 = &array_2[0];
	for (int i = 0; i < length; i++)
	{
		cout << "Enter element " << i + 1 << "of array 1: ";\
		cin >> array_1[i];
	}
	for (int j = 0; j < length; j++)
	{
		cout << "Enter element " << j + 1 << "of array 2: ";\
		cin >> array_2[j];
	}
	for (int k = 0; k < length - 1; k++)
	{
		if (*(ptr_array_1 + k) == *(ptr_array_2 + (k + 1)))
			simon_says = true;
		else
		{
			simon_says = false;
			break;
		}
	}
	if (simon_says)
		cout << "true";
	else
		cout << "false";	
	
	return 0;
}
