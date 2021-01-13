//this programs takes an array from the user and it's size, then +2 to odd number size times and -2 to even  n times and return the array 
#include <iostream>
using namespace std;

int main()
{
 	bool stop_input = false;
 	int num, i = 0, array[20], elements;
 	int *ptr_num, *ptr_array;
 	ptr_num = &num;
  	ptr_array = &array[0];
  	cout << "How many times you want to reapeat the calculation : ";
  	cin >> num;
  	cout << "How many elements do you want?(less than 20)";
  	cin >> elements;
	for(i = 0; i < elements; i++)
  	{
    	cout << "Enter Element " << i + 1 << ": ";
    	cin >> array[i];
    	*(ptr_array + i) = array[i];
  	}
  
    for(i = 0 ; i < elements; i++)
    {
    	if (*(ptr_array + i) % 2 == 0)
    	{
      		for (int j = 0; j < *ptr_num; j++)
      		{
        		*(ptr_array + i) -= 2;  
      		}
   		}
   		else
   		{
        	for(int k = 0; k < *ptr_num; k++)
        	{
        		*(ptr_array + i) += 2;  
        	}
      	}
    }
    cout<<"The array after even down odd up is : [ ";
    for(int i = 0; i < elements; i++)
    {
      cout << *(ptr_array + i) << " ";
    }
    cout<<"]\n";
	return 0;  
}
