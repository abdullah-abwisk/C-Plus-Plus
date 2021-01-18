#include <iostream>
using namespace std;

#define size 10

int main()
{
    int* main_arr = new int[size];
    int* first_arr = new int[size/2];
    int* sec_arr = new int[size/2];

    for(int i = 0; i < 10; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> main_arr[i];
    }
    for(int i = 0; i < size / 2; i++)
        first_arr[i] = main_arr[i];
    for(int i = 5; i < size; i++)
        sec_arr[i - 5] = main_arr[i];  
    for(int i = 0; i < size / 2; i++)
        cout << first_arr[i] << " ";
    cout << endl;
    for(int i = 0; i < size / 2; i++)
        cout << sec_arr[i] << " ";
    cout << endl;
    delete [] main_arr;
    delete [] first_arr;
    delete [] sec_arr;
    
    return 0;             
}