#include <iostream>
using namespace std;

int calculation(int *elements, int[]);

int main()
{
	int *elements;
	int number;
	cout << "Enter number of element: ";
	cin >> number;
	int array[number];
	cout << calculation(&number, array) << endl;
}

int calculation(int *elements, int array[])
{
	int positive = 0, negative = 0, zeros = 0;
	for (int i = 0; i <= *elements - 1; i++)
	{
		cout << "Enter element " << i + 1 << ":";
		cin >> array[i];
	}
	
	for (int i = 0; i <= *elements - 1; i++)
	{
		if (array[i] == 0)
			zeros++;
		
		if (array[i] > 0)
			positive += array[i];
		
		if (array[i] < 0)	
			negative += array[i];	
	}
	
	negative *= -1;
	
	if (positive > negative && positive > zeros)
		return positive;	
	else if (zeros > negative && zeros > positive)
		return zeros;
	else
		return -negative;		
}
