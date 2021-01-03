#include <iostream>
using namespace std;

void mean(int [], int);

int main()
{
	int length;
	cout << "Enter the count of numbers: ";
	cin >> length;
	int array[length];
	
	mean(array, length);
	
	return 0;
}

void mean(int array[], int length)
{
	int sum = 0;
	float mean_value;
	
	for (int i = 0; i <= length - 1; i++)
	{
		cout << "Enter " << i + 1 << " number: ";
		cin >> array[i];
	}
	
	for (int i = 0; i <= length - 1; i++)
	{
		sum += array[i];
	}
	
	mean_value = sum / length;
	
	cout << "The mean of these number is: " << mean_value << endl;
}
