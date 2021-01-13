#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int rows, columns;
	float final;
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter columns: ";
	cin >> columns;
	int **array = new int *[rows];
	int *sumofsquares = new int(0);
	for (int i = 0; i < rows; i++)
		array[i] = new int[columns];
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << "Enter values: ";
			cin >> array[i][j];
			cout << "   ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			*sumofsquares += (array[i][j]) * (array[i][j]);
		}
	}
	final = sqrt(*sumofsquares);
	
	cout << "The euclidean form of array is: " << final;
	
	delete sumofsquares;
	delete[] array;
	return 0;
}
