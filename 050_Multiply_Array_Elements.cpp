#include <iostream>
using namespace std;

void multiplyrowelements(int A[][6])
{
	int multiplication[4];
	for (int i = 0; i <= 3; i++)
		multiplication[i] = 1;
		
	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j <= 5; j++)
		{
			multiplication[i] = multiplication[i] * A[i][j];
		}
	}
	
	for (int i = 0; i <= 3; i++)
	{
		cout << "Multiplication of Row " << i + 1 << "= " << multiplication[i] << endl;	
	}	
}

int main()
{
	int A[4][6];
	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j <= 5; j++)
		{
			cout << "Enter matrix element [" << i + 1 << "][" << j + 1 << "] : ";
			cin >> A[i][j];
		}
	}
	
	multiplyrowelements(A);
	
	return 0;
}
