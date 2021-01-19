/* Lab Task 08 : Problem 02
   Abdullah Khan : 20i-0894 */



#include <iostream>
using namespace std;
#include <cmath>

int main()
{
	int binary_num, bit_value, bit_weight = 0, equivalent_decimal = 0;
	bool binary_input = true;
	cout << "Enter a binary number: ";
	cin >> binary_num;
	// testing for binary input using loop
	while (binary_num != 0)
	{
		bit_value = binary_num % 2;
		if (bit_value % 10 > 1)
		{
			binary_input = false;
			break;
		}
		else
			equivalent_decimal += (bit_value * pow(2, bit_weight));	

		binary_num = binary_num / 10;
		bit_weight++;		    
	}
	
	if (binary_input == true)
	    cout << "The decimal equivalent of the binary entered is: " << equivalent_decimal;
	else
	    cout << "Invalid binary entered.";    
	
    return 0;
}
