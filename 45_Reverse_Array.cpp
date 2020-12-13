#include <iostream>
using namespace std;

int main()
{
	int temp;
	int B[20] = {10, 18, 15, 65, 12, 93, 77, 81, 13, 66, 61, 27, 11, 46, 33, 25, 62, 38, 8, 9};
	for (int i = 0, j = 19; i <= 9, j >= 10; i++, j--)
	{
		temp = B[i];
		B[i] = B[j];
		B[j] = temp;
	}
	for (int k = 0; k <= 19; k++)
		cout << B[k] << endl;
	
	return 0;
}
