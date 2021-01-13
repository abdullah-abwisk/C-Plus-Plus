// stalactites hang from cielings of a cave while stalagmites grow from the floor
//enter 2D array with zero and ones, where zero reperesents air and 1 represents rock
#include<iostream>
using namespace std;

#define rows 6
#define cols 6

void print_the_array(int** array);

int main()
{
    int** array = new int*[rows];
    bool input = true, stalactites = false, stalagmites = false;
  
    for(int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }
  
    cout << "****Enter a 2D array with 1s and 0s******1 means the rock*********\n*******6 by 6 array";
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << "Enter Element array["<<i+1<<"]["<<j+1<<"] :";
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(array[i][j] == 1 || array[i][j] == 0)
            {
                if( i == 0 && array[i][j] == 1)
                {
                    stalactites = true;
                }
                if( i == 5 && array[i][j] == 1)
                {
                    stalagmites = true;
                }
            }
            else
            {
                input = false;
                cout << "Invalid entry in the array";
                break;
            }
        }
        if(input == false){break;}
    }
    if(stalactites == true && stalagmites == true)
    {
        print_the_array(array);
        cout << "BOTH";
    }
    else if(stalactites == true)
    {
        print_the_array(array);
        cout << "\nIt's Stalactites";
    }
    else if(stalagmites == true)
    {
        print_the_array(array);
        cout << "\nIt's Stalagmites";
    }
  
    for(int i = 0; i < rows; i++)
        delete[] array[i];
    
    delete []array;
  
    return 0;
}

void print_the_array(int** array)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "[";
        for(int j = 0; j < cols; j++)
        {
            cout <<array[i][j]<<" ";
        }
        cout<<"]\n";
    }
}