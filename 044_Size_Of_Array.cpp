#include <iostream>
using namespace std;

int main()
{
	int B[20] = {10, 18, 15, 65, 12, 93, 77, 81, 13, 66, 61, 27, 11, 46, 33, 25, 62, 38, 8, 9};
	int elements_number;
	// divide size of array by 4 as size of tells the number of bits in an array
	// and as each element occupies 4 bits, we divide the array size by 4
	elements_number = sizeof(B) / 4;
	cout << "The size of the array is " << elements_number;
	
	return 0;
}
