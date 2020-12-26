#include<iostream>
using namespace std;
int main()
{
	int positive_nums = 0, negative_nums = 0, even_nums = 0, odd_nums = 0;
	const int length = 20;
	int *num_array = new int [length];
	int array[length];
	
	for (int i = 0; i < length; i++)
	{
		cout << "Enter the " << i+1 << "th number : ";
		cin >> array[i];
		num_array[i] = array[i];
	}
	for (int i = 0; i < length; i++)
	{
		if (num_array[i] > 0)
			positive_nums++;
		else if (num_array[i] < 0)
			negative_nums++;
		
		if (num_array[i] % 2 == 0)
			even_nums++;
		else
			odd_nums++;				
	}
	
	cout << "Positive numbers in the array are:" << positive_nums << endl;
	cout << "Negative numbers in the array are:" << negative_nums << endl;
	cout << "Even numbers in the array are:" << even_nums << endl;
	cout << "Odd numbers in the array are:" << odd_nums << endl;
	
	delete[] num_array;
return 0;	
}
