#include <iostream>
using namespace std;

int main()
{
	const int length = 10;
	int *array = new int [length];
	int array_values[length];
	int *biggest = new int ();
	
	*biggest = 0;
	
	for (int i = 0; i < length; i++)
	{
		cout << "Enter number " << i+1 << " : ";
		cin >> array_values[i];
		array[i] = array_values[i];
	}
	for(int i = 0; i < length; i++)
	{
		if(*biggest < array[i])
		{
			*biggest = array[i];
		}
	}
	cout << "The biggest number in the array is: " << *biggest;
	
	delete[] array;
	delete biggest;
	return 0;
}
