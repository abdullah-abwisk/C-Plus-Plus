#include <iostream>
#include <cmath>
using namespace std;

float euclidean(int rows, int columns, int **array)
{
	float value;
	int *sumofsquares = new int(0);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			*sumofsquares += (array[i][j]) * (array[i][j]);
		}
	}
	value = sqrt(*sumofsquares);
	
	return value;
}

int main()
{
	int rows, columns;
	int **array = new int*[rows];
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter columns: ";
	cin >> columns;
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
	
	cout << euclidean(rows, columns, array);

	delete[] array;
	return 0;
}
