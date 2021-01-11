#include <iostream>
using namespace std;

int main()
{
	int rows_1, rows_2, cols_1, cols_2;
	bool subset = false;
	cout << "Enter number of rows in array 1: ";
	cin >> rows_1;
	cout << "Enter number of columns in array 1: ";
	cin >> cols_1;
	cout << "Enter number of rows in array 2: ";
	cin >> rows_2;
	cout << "Enter number of columns in array 2: ";
	cin >> cols_2;
	int** array_1 = new int*[rows_1];
	int** array_2 = new int*[rows_2];
	for (int i = 0; i < rows_1; i++)
	{
		array_1[i] = new int[cols_1];
	}
	for (int i = 0; i < rows_2; i++)
	{
		array_2[i] = new int[cols_2];
	}
	for (int i = 0; i < rows_1; i++)
		for (int j = 0; j < cols_1; j++)
		{
			cout << "Enter array 1 element '[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> array_1[i][j];
		}
		cout << endl << endl;
	for (int i = 0; i < rows_2; i++)
		for (int j = 0; j < cols_2; j++)
		{
			cout << "Enter array 2 element '[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> array_2[i][j];
		}
	for (int i = 0; i < rows_1; i++)
	{
		for (int j = 0; j < cols_1; j++)
		{
			for (int k = 0; k < rows_2; k++)
			{
				for (int l = 0; l < cols_2; l++)
				{
					if(array_1[i][j] == array_2[k][l])
					{
						subset = true;
						break;
					}
					else
						subset = false;
				}
				if(subset == false || subset == true){break;}
			}
			if(subset == false){break;}
		}
		if(subset == false){break;}
	}
		
	delete []array_1;
	delete []array_2;
		
	if(subset)
		cout << "true";
	else 
		cout << "false";		
	
	return 0;
}
