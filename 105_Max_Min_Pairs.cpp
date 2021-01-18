#include <iostream>
using namespace std;

#define elements 10

int main()
{
    int temp, max_diff, min_diff, elem_diff;
    int* arr = new int[elements];
    for(int i = 0; i < elements; i++)
    {
        cout << "Enter array elements " << i + 1 << ": ";
        cin >> arr[i];
    }
    for(int i = 0; i < elements; i++)
	{		
		for(int j = i + 1; j < elements; j++)
		{
			if(arr[i]>arr[j])
			{
				temp  = arr[i];
				arr[i]= arr[j];
				arr[j]= temp;
			}
		}
	}
    cout << "Sorted array is: " << endl;
    for(int i = 0; i < elements; i++)0
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    max_diff = arr[elements - 1] - arr[0];
    min_diff = arr[1] - arr[0];
    for(int i = 1; i < elements - 1; i++)
    {
        elem_diff = arr[i + 1] - arr[i];
        if(elem_diff < min_diff)
            min_diff = elem_diff;
    }
    cout << "The maximum difference is: " << max_diff << endl;
    cout << "The minimum difference is: " << min_diff << endl;

    return 0;
}