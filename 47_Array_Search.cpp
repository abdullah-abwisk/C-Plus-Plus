#include <iostream>
using namespace std;

int main()
{
	int B[20] = {10, 18, 15, 65, 12, 93, 77, 81, 13, 66, 61, 27, 11, 46, 33, 25, 62, 38, 8, 9};
	bool found = false;
	int search;
	cout << "Enter search value: ";
	cin >> search;
	for (int i = 0; i <= 19; i++)
	{
		if(B[i] == search)
		{
			cout << search << " found at array index " << i << ".\n";
			found = true;
			break;
		}
	}
	if (found == false)
		cout << "Search item not found in the array. \n";
	
	return 0;	
}

