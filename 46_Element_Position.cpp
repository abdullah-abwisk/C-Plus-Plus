#include <iostream>
using namespace std;

int main()
{
	int N;
	bool found = false;
	int B[20] = {10, 18, 15, 65, 12, 93, 77, 81, 13, 66, 61, 27, 11, 46, 33, 25, 62, 38, 8, 9};
	cout << "Enter N: ";
	cin >> N;
	// to output nth element of B
	cout << N << "th element of the array is: " << B[N - 1] << endl;
	// to output the position of element N in array
	for(int i = 0; i <= 19; i++)
	{
		if(B[i] == N)
		{
			found = true;
			cout << "Found at " << i << " index of the array.\n";
			break;
		}
	}
	if(found != true)
		cout << "Element not found in array.";
	
	return 0;	
}
