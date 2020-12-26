#include<iostream>
using namespace std;
int main()
{
	bool match = true;
	const int length = 10;
	int *search_num= new int ();
	int *array = new int [length];
	int arrayvalue[length], search;
	for(int i = 0 ; i < length; i++)
	{
		cout << "Enter " << i+1 << "th number :";
		cin >> arrayvalue[i];
		array[i] = arrayvalue[i];
	}
	
	cout << "Enter the search number: ";
	cin >> search;
	search_num = &search;
	for(int j = 0; j < length; j++)
	{
		if(*search_num == array[j])
		{
			cout << "The searched value is present at " << j << " index of the array.\n";
			break;
		}
		else
		{
			match = false; 
		}
	}
	
	if(match == false)
		cout << "Cannot find search value in the array.";
		
	delete[] array;
	delete search_num;
return 0;	
}
