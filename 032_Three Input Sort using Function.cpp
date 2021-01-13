#include <iostream>
using namespace std;

void sort3(int num_1, int num_2, int num_3)
{
	int lowest, middle = 0, highest;
	
	if(num_1 < num_2 && num_1 < num_3)
	    lowest = num_1;
	else if(num_2 < num_1 && num_2 < num_3)
		lowest = num_2;
	else
		lowest = num_3;	
	
	if(num_1 > num_2 && num_1 > num_3)
		highest = num_1;	
	else if(num_2 > num_1 && num_2 > num_3)
		highest = num_2;
	else
		highest	= num_3;
		
	if ((highest == num_1 || highest == num_2) && (lowest == num_1 || lowest == num_2))	
		middle = num_3;
	else if ((highest == num_2 || highest == num_3) && (lowest == num_2 || lowest == num_3))	
		middle = num_1;
	else
		middle = num_2;			
	
	cout << lowest << "   " << middle << "   " << highest << "\n";		
}

int main()
{
	int num_1, num_2, num_3;
	cout << "Enter number 1: ";
	cin >> num_1;
	cout << "Enter number 2: ";
	cin >> num_2;
	cout << "Enter number 3: ";
	cin >> num_3;
	sort3(num_1, num_2, num_3);
	return 0;
}
