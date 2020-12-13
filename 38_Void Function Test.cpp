#include <iostream>
using namespace std;

void swap_floats(float num_1, float num_2)
{
	float temp;
	temp = num_1;
	num_1 = num_2;
	num_2 = temp;
	cout << num_1 << "  " << num_2;
}

int main()
{
	float num_1, num_2;
	cout << "Enter float number 1: ";
	cin >> num_1;
	cout << "Enter float number 2: ";
	cin >> num_2;
	swap_floats(num_1, num_2);
	return 0;
}
