/* Programming Fundamentals : Assignment 03 : Q4
   Abdullah Khan : DS-N : 20i-0894 : Pascal's Triangle */



#include <iostream>
using namespace std;

int main()
{
	int row, ans = 1, space = 0, display_num, i, j, k;

	cout << "Input number of rows : ";
	cin >> row;
	cout << "Enter the display number: ";
	cin >> display_num;
	
	switch(display_num)
	{
		case 1:
			
			space = row;
			i = 0;

			while (i < row)
			{	
				k = 0;
				while (k < space) 
				{
					cout << " ";
					k++;
				}
				
				j = 0;
				while (j <= i) 
				{

					if (j == 0) 
					{
						ans = 1;
					}
					else 
					{
						ans = ans * (i - j + 1) / j;
					}
						
					cout << ans << " ";
					j++;
				}

				cout << endl;
				space--;
				i++;
			}
			
		break;
			
		case 3:

			i = row;
			while (i > -1)
			{
				k = 0;
				while (k <= space) 
				{
					cout << " ";
					k++;
				}

				j = 0;
				while (j <= i)
				{
					if (j == 0)
					{
						ans = 1;
					}
					else 
					{
						ans = ans * (i - j + 1) / j;
					}
					cout << ans << " ";
					j++;
				}

				cout << endl;
				space++;
				i--;

			}
			
			space = 0;
	
			space = row;
			
			i = 1;
			while (i < row + 1)
			{
				k = 0;
				while (k < space) 
				{
					cout << " ";
					k++;
				}
				
				j = 0;
				while (j <= i) 
				{
					if (j == 0) 
					{
						ans = 1;
					}
					else 
					{
						ans = ans * (i - j + 1) / j;
					}
					cout << ans << " ";
					j++;
				}

			cout << endl;
			space--;
			i++;
			}
			
		break;
		
		case 2:
			
			space = row - 1;
			i = 0;

			while (i < row)
			{	
				k = 0;
				while (k <= space) 
				{
					cout << " ";
					k++;
				}
				
				j = 0;
				while (j <= i) 
				{

					if (j == 0) 
					{
						ans = 1;
					}
					else 
					{
						ans = ans * (i - j + 1) / j;
					}
						
					cout << ans << " ";
					j++;
				}

				cout << endl;
				space--;
				i++;
			}	
			
			i = row;
			while (i > -1)
			{
				k = 0;
				while (k <= space) 
				{
					cout << " ";
					k++;
				}

				j = 0;
				while (j <= i)
				{
					if (j == 0)
					{
						ans = 1;
					}
					else 
					{
						ans = ans * (i - j + 1) / j;
					}
					cout << ans << " ";
					j++;
				}

				cout << endl;
				space++;
				i--;

			}
		
		break;
		
		default:
			cout << "Invalid number.";	
	}

	return 0;
}
