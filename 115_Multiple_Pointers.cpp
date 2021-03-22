#include<iostream>
using namespace std;

int main()
{
/*              *****************************                */
/*              *****************************                */
/*              *****************************                */
/*****************everything on stack memory***************************/
/*              *****************************                */
/*              *****************************                */
/*              *****************************                */

	int a = 5; 	//5(value) - ff10(address) 
	int *p = &a; //ff10 - ff40 (pointer to an integer)
	int **p2 = &p;//ff40 - ff80 (pointer to a pointer to an integer)
  	int ***p3 = &p2; //ff80 - ff20 (pointer to a pointer to a pointer to an integer)
	// cout << a << endl; //5
	// cout << p << endl; //ff10
	// cout << *p << endl; //5
	// cout << p2 << endl; //ff40
	// cout << **p2 << endl; //5
	
    //initialization of three normal arrays
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10}; 
    int arr3[5] = {11,12,13,14,15};
    int* ptr1[3]; //declaring a pointer array that will store the starting addresses of the above three arrays
    ptr1[0] = arr1;
    ptr1[1] = arr2;
    ptr1[2] = arr3; //ptr2 = {arr1, arr2, arr3}
    //now ptr1 has become a two D array.. it stores three single dimensional arrrays

    //doing the same process of ptr1 again
    int arr4[5] = {16,17,18,19,20};
    int arr5[5] = {21,22,23,24,25}; 
    int arr6[5] = {26,27,28,29,30};
    int* ptr2[3];
    ptr2[0] = arr4;
    ptr2[1] = arr5;
    ptr2[2] = arr6; //now ptr2 = {arr4, arr5, arr6}

    //now we have two 2D arrays and we want to store it in another array which will be a three D pointer array 
    //2x3x5 3-d array
    int **ptr3[2];  //we have declared a three D array that will store both the 2D arrays inside it
    ptr3[0] = ptr1;
    ptr3[1] = ptr2;   // ptr3 = {ptr1, ptr2} //both pointer arrays

    //different ways of approaching the values in the three-D array
    cout << *( * ( *(ptr3+1)+1)+1) << endl;    //22
    cout << ptr3[1][1][1] << endl; //22

//in the same way we can declare two or more three-D arrays and store them in a four-D array int***ptr[3]; 




/*              *****************************                */
/*              *****************************                */
/*              *****************************                */
/*******************Everything on heap memory**************************/
/*              *****************************                */
/*              *****************************                */
/*              *****************************                */

    //in heap memory we'll have to go in decsending order... three-D, then 2-d, then 1-D, then the elements
    //we can say that by getting a single address, we can access a whole three-D array anywhere inide the program
    //only the three-D pointer will be made in stack and the rest of the memory in heap.
    // making a triple pointer on stack that points to 4 2D arrays on heap, although the ***arr_ptr is in stack but the rest is in heap because they got no names
    
    /*              *****************************                */
    /***************working on 3-D arrray in heap****************/
    /*              *****************************                */

    int*** arr_ptr = new int**[4]; //this triple pointer has 4 (2-D arrays) inside it..(no names of the 2-D arrays in heap)
    for(int i = 0; i < 4; i++)// loop through 2D arrays
    { 
        arr_ptr[i] = new int*[4]; // assign 3 1-D arrays(rows) to each 2D array

        for(int j = 0; j < 3; j++)// loop through 1-D arrays(rows) to each 2D array
        {
            arr_ptr[i][j] = new int[4]; // assign 4 elements(columns) to each 1-D array(row) of all arrays
        }
    }
    /******intitializing values to that three-D array****/
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            for(int k=0; k<4; k++)
            {
                arr_ptr[i][j][k] = i;
            }
        }
    }
    cout << arr_ptr[2][1][2]; // to access 3rd 2D array, 2nd Row of that array, and 3rd element of the second row of 3rd 2D array
    /*****deallocating the memory of 3-D array*****/
    //dealocate in acsending order (smaller to bigger)
    for(int i=0; i<4; i++)
    {
        delete[] arr_ptr[i];
        for(int j=0; j<4; j++)
        {
            delete arr_ptr[i][j];
        }
    }
    delete arr_ptr;

    /*              *****************************                */
    /****************working with 2-D array in heap**************/
    /*              *****************************                */
    
    int** arr_p = new int*[4];
    for(int i = 0; i < 4; i++)
    {
        arr_p[i] = new int[6];
    }
     /******intitializing values to that 2-D array****/

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            arr_p[i][j] = i;
        }
    }
    cout << arr_p[0][0];
    /****deallocating the memory of 2-D array****/
    for(int i=0; i<4; i++)
    {
        delete[] arr_p[i];
    }
    delete[] arr_p;

	return 0;
}