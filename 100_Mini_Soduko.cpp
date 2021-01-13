#include <iostream>
using namespace std;

#define rows 3
#define columns 3
#define columns_test 9

int main()
{
	int** array = new int*[rows];
	int* once = new int[columns_test];
	bool check = true;
	for (int i = 0; i < rows; i++)
		array[i] = new int[columns];	
	for (int k = 0; k < columns_test; k++)
		once[k] = 0;
	
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
		{
			cout << "Enter row " << i + 1 << ", column " << j + 1 << ":";
			cin >> array[i][j];		
		}
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (array[i][j] <= 9 && array[i][j] >= 1)
			{
				once[(rows * i) + j] = array[i][j];
				if(i > 0)
					for (int k = 0; k < columns_test; k++)
						if(k != (rows * i) + j)
							if (array[i][j] == once[k])
							{
								check = false;
								break;
							}		
			}
			else
				check = false;
				
			if(check == false)
				break;
		}
		if(check == false)
			break;
	}
	
	if(check)
		cout << "true\n";
	else
		cout << "false\n";
	
	for(int i = 0; i < rows; i++)
 	{
   		cout << "[ ";
    	for(int j = 0; j < columns; j++)
    	{
      		cout<<array[i][j]<<" ";
    	}
    	cout<<"]\n";
  	}		
		
	delete []once;
	for (int i = 0; i < rows; i++)
		delete [] array[i];
	delete []array;	
		
	return 0;			
}
