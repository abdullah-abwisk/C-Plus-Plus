#include <iostream>
using namespace std;

int main()
{
	char array[20];
	int i, j, k, count, final[20], length;
	cout << "Enter the number: ";
	cin >> array;
	for (i = 0; array[i] != '\0'; i++)
	{
		count = 0;
		for (j = 0; array[j] != '\0'; j++)
		{
			if(array[j] == array[i])
			{
				count++;
			}
		}
		final[i] = count;
	}
	length = i - 1;
	for (k = 0; k <= length; k++)
		cout << final[k];
		
	return 0;	
}
