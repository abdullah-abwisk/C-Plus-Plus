#include<iostream>
using namespace std;


int main()
{
	int rows, i, j = 0, k;
	cout << "Enter number of rows(odd): ";
	cin >> rows;
	if(rows % 2 != 0)
	{
		for(i = (rows / 2) + 1; i >= 1; i--)
		{
			while(j <= i)
			{
				cout << "  ";
				j++;
			}
			
			cout << "*";
			k = (rows / 2) + 1;
			while(k > i)
			{
				cout << "    ";
				k--;
			}
			
			if(i < (rows / 2) + 1)
				cout << "*";
	
			cout << "\n\n";
			j = 0;
			k = 0;
		}
		for(i = 1; i <= rows / 2; i++)
		{
			while(j <= i + 1)
			{
				cout << "  ";
				j++;
			}
			
			cout << "*";
			k = (rows / 2) + 1;
			while(k > i + 1)
			{
				cout << "    ";
				k--;
			}	
			
			if(i < rows / 2) 
				cout << "*";
	
			cout << "\n\n";
			j = 0;
			k = 0;
		}
	}
	else
		cout << "Invalid number of rows entered.\n\n";


	return 0;
}
