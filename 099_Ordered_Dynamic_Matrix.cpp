#include <iostream>
using namespace std;

void ordered_matrix(int**, int, int);

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    int** matrix = new int*[a];
    for(int i = 0; i < a; i++)
        matrix[i] = new int[b];
    ordered_matrix(matrix, a, b);    
    for(int i = 0; i < a; i++)
        delete [] matrix[i];
    delete [] matrix;    

    return 0;    
}

void ordered_matrix(int** matrix, int a, int b)
{
    int counter = 1;
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
        {
            matrix[i][j] = counter;
            counter++;
        }
    for(int i = 0; i < a; i++)
    {
        cout << "| {";
        for(int j = 0; j < b; j++)
        {   
            cout << " " << matrix[i][j];
        }
        cout << " } |\n";
    }
}