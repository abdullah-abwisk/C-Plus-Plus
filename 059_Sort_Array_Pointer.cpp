#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	int *Ptr, temp;
	Ptr = &arr[0];
	for (int i = 0; i <= 4; i++)
	{
		cout << "Enter number " << i + 1 << ":";
		cin >> arr[i];
		*(Ptr + i) = arr[i];
	}
	
	for (int i = 0; i <= 4; i++)
		for (int j = 0; j <= 4; j++)
			if (*(Ptr + j) > *(Ptr + (j + 1)))
			{
				temp = *(Ptr + j);
				*(Ptr + j) = *(Ptr + (j + 1));
				*(Ptr + (j + 1)) = temp;
			}
	
	for (int i = 0; i <= 4; i++)
		cout << *(Ptr + i) << endl;		
	
	return 0;
}
