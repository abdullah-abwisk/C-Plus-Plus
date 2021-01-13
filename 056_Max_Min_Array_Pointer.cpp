#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	int *Ptr, maxvalue, minvalue, repetitionmax = 0, repetitionmin = 0;
	Ptr = &arr[0];
	for (int i = 0; i <= 4; i++)
	{
		cout << "Enter \'" << i + 1 << "\' number: ";
		cin >> arr[i];
		*(Ptr + i) = arr[i];
	}
	maxvalue = *Ptr;
	minvalue = *Ptr;
	for (int i = 1; i <= 4; i++)
	{
		if (*(Ptr + i) > maxvalue)
			maxvalue = *(Ptr + i);
		if (*(Ptr + i) < minvalue)
			minvalue = *(Ptr + i);
	}
	for (int i = 0; i <= 4; i++)
	{
		if (*(Ptr + i) == maxvalue)
			repetitionmax++;
	}
	for (int i = 0; i <= 4; i++)
	{
		if (*(Ptr + i) == minvalue)
			repetitionmin++;
	}
	cout << "The maximum value is: " << maxvalue << ". It comes " << repetitionmax << " times in the array." << endl;
	cout << "The minimum value is: " << minvalue << ". It comes " << repetitionmin << " times in the array." << endl;
	
	return 0;
}
