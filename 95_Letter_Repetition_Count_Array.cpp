#include <iostream>
using namespace std;

int main()
{
	char input;
	int count = 0, rows, columns;
	cout << "Enter number of rows: ";
	cin >> rows;
	cout << "Enter number of columns: ";
	cin >> columns;
	char array[rows][columns];
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
		{
			cout << "Enter element row " << i + 1 << ", column " << j + 1 << ": ";
			cin >> array[i][j];
		}
	cout << "\n\nEnter search element: ";
	cin >> input;	
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			if (input == array[i][j])
				count++;
	cout << "\nThe total number of repetitions of\nthe search item in the array is: " << count << endl;
	return 0;
}
