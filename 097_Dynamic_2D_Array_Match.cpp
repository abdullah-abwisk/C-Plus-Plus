#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    bool match = true;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    int** array_1 = new int*[rows];
    int** array_2 = new int*[rows];
    for(int i = 0; i < rows; ++i)
    {
        array_1[i] = new int[columns];
        array_2[i] = new int[columns];
    } 
    cout << "Array 1:  \n";
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < columns; ++j)
        {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]:";
            cin >> array_1[i][j];
        }
    cout << "\nArray 2:  \n";
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < columns; ++j)
        {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]:";
            cin >> array_2[i][j];
        }

    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            if(!(array_1[i][j] == array_2[i][j]))
            {
                match = false;
                break;
            }  
        }
        if(match == false)
            break;
    }
        
    if(match == true)
        cout << "Both the arrays match.\n\n";
    else
        cout << "Both arrays do not match.\n\n";              
    
    for(int i = 0; i < rows; ++i)
    {
        delete [] array_1[i];
        delete [] array_2[i];
    }
    delete [] array_1;
    delete [] array_2;

    return 0;        
}