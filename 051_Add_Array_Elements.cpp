#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cout << "Enter m: ";
	cin >> m;
	cout << "Enter n: ";
	cin >> n;
	int A[m][n], B[m][n], sum[m][n];
	
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Enter element A[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> A[i][j];
			cout << "Enter element B[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> B[i][j];
		}
	
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			sum[i][j] = A[i][j] + B[i][j];	
		}	
		
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)	
		{
			cout << "Sum of A[" << i + 1 << "][" << j + 1 << "] and B[" << i + 1 << "][" << j + 1 << "] = " << sum[i][j] << endl;
		}
		
	return 0;	
}
