#include <iostream>
using namespace std;

void perfect_patch_array(int*, int*);

int main()
{
  int length;
  int* ptr_length;
  ptr_length = &length;
  cout << "Enter n: ";
  cin >> length;
  int array[*ptr_length];
  int *ptr_array;
  ptr_array = &array[0];
  for (int i = 0; i < *ptr_length; i++)
  {
    for (int j = 0; j < *ptr_length; j++)
      *(ptr_array + i) = *ptr_length;
  }
  cout << "The perfect patch is : \n";
  if (length == 0)
  {
    cout << "[   ]";
  }
  else if (length > 0)
  {
    perfect_patch_array(ptr_length, array);
  }
  else
  {
    cout << "Invalid input.";  
  }  
return 0; 
}

void perfect_patch_array(int *ptr_length, int *ptr_array)
{
  for (int i = 0; i < *ptr_length; i++)
    {
      cout << "[";
      for (int j = 0; j < *ptr_length; j++)
      {
        cout << *(ptr_array+i);
        if (j < *ptr_length-1 )
          {
            cout << ", ";
          }
    }
    cout << "]\n";
  }
}
