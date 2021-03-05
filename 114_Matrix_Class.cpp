#include <iostream>
#include <vector>
using namespace std;

class Matrix{
    private:
        int rows, columns;
    public:
        Matrix(){
            rows = 1;
            columns = 1;
        }
        
        void getRows(int r){
            rows = r;
        }

        void getCols(int c){
            columns = c;
        }

        void createMatrix(){
            int** matrix = new int*[rows];
            for(int i = 0; i < rows; i++){
                matrix[i] = new int[columns];
            }
        }

        void setValue(int i, int j){
            cout << "Enter the element: ";
            cin >> matrix[i][j];
        }
};

int main(){


    return 0;
}