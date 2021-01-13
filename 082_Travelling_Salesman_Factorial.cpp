#include <iostream>
using namespace std;

void combinations(int*);

int main()
{
	int number;
	cout << "Please enter number of cities: ";
	cin >> number;
	combinations(&number);
	cout << "The total number of combinations for these cities is: " << number << endl;
	
	return 0;
}

void combinations(int *number_of_combos)
{
	int combos = *number_of_combos;
	*number_of_combos = 1;
	for (int i = combos; i > 0; i--)
	{
		*number_of_combos *= i;
	}
	
	return;
}
