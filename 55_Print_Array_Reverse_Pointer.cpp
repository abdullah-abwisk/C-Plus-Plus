#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	int *Ptr;
	Ptr = &arr[0];
	for (int i = 0; i <= 4; i++)
	{
		cout << "Enter \'" << i + 1 << "\' number:";
		cin >> arr[i];
		*(Ptr + i) = arr[i];
		cout << "\n\n";
	}
	for (int i = 4; i >= 0; i--)
	{
		cout << *(Ptr + i) << "\t";
	}
	cout << "\n";
	
	return 0;
}
