/* Lab Task 08 : Problem 04
   Abdullah Khan : 20i-0894 */



#include <iostream>
using namespace std;

int main()
{
	for (int rows = 0; rows < 8; rows++)
	{
		for (int columns = 8 - rows; columns >= 1; columns--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	
	return 0;	
}
