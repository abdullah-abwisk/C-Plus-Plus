#include <iostream>
using namespace std;

int main(){
    // first 2d array
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int arr3[] = {11, 12, 13, 14, 15};
    int* arrptr1[3];
    arrptr1[0] = arr1;
    arrptr1[1] = arr2;
    arrptr1[2] = arr3;
    // second 2d array
    int arr4[] = {16, 17, 18, 19, 20};
    int arr5[] = {21, 22, 23, 24, 25};
    int arr6[] = {26, 27, 28, 29, 30};
    int* arrptr2[3];
    arrptr2[0] = arr4;
    arrptr2[1] = arr5;
    arrptr2[2] = arr6;
    // 3d array
    int** ptr_arr[2];
    ptr_arr[0] = arrptr1;
    ptr_arr[1] = arrptr2;
    // reading from 3d array
    cout << *(*(*(ptr_arr + 1) + 1) + 1) << endl; // goes to arrptr2, and then arr5, and then takes second element
    cout << ptr_arr[1][1][1] << endl; // does the same as above line
    cout << *(ptr_arr[1][1]) + 1 << endl; // does the same as above line
    cout << *(*(ptr_arr[1] + 1)) + 1 << endl; // does the same as above line

    return 0;
}