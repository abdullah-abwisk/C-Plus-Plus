#include <iostream>
using namespace std;

int main()
{
	int rows, columns;
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> columns;
	int matrix[rows][columns];
	
	for (int i = 0; i <= rows - 1; i++)
	{
		for (int j = 0; j <= columns - 1; j++)
		{
			cout << "Enter matrix element [" << i + 1 << "][" << j + 1 << "] : ";
			cin >> matrix[i][j];
		}
	}
	
	for (int i = 0; i <= rows - 1; i++)
	{
		for (int j = 0; j <= columns - 1; j++)
		{
			cout << "Matrix element [" << i + 1 << "][" << j + 1 << "] is: " << matrix[i][j] << endl;
		}
	}
	
	return 0;
}
