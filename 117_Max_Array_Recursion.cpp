#include <iostream>
using namespace std;

int Max(int [], int);

int main()
{   
    int s = 8;
    int arr[9] = {1, 4, 3, 6, 9, 3, 2, 3};
    int max = Max(arr, s);
    cout << max;

    return 0;
}

int Max(int arr[], int li)
{
    if(li == 0)
        return arr[li];
    else
    {
        int v1 = Max(arr, li - 1);
        if(v1 > arr[li])
            return v1;
        else
            return arr[li];
    }    
}