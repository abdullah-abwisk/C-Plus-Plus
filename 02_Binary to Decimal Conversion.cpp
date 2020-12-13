/* Binary to Decimal conversion. Question 1 : Assignment 2
   Written by Abdullah Khan : DS-N : 20I-0894              */
   
#include <iostream>
using namespace std;
// calling cmath library to use the power function
#include <cmath>

int main()
{
    int decimal_equivalent = 0, bit_weight = 0, bit_value, binary_number_entered;
    bool invalid_input = false;
    cout << "Enter an 8 digit binary number and press enter: ";
    cin >> binary_number_entered;
    if (binary_number_entered <= 11111111 && binary_number_entered >= 0)
    {
    	bit_value = binary_number_entered % 10;
    	
    	if (bit_value % 10 == 1 || bit_value % 10 == 0)
        {
        	decimal_equivalent += bit_value * pow(2, bit_weight);
		}
		else
		    invalid_input = true;
		        
		binary_number_entered = binary_number_entered / 10;
		bit_weight++;
		bit_value = binary_number_entered % 10;
		
    	if (bit_value % 10 == 1 || bit_value % 10 == 0)
        {
        	decimal_equivalent += bit_value * pow(2, bit_weight);
		}
		else
		    invalid_input = true;
		        
		binary_number_entered = binary_number_entered / 10;
		bit_weight++;
		bit_value = binary_number_entered % 10;
		
    	if (bit_value % 10 == 1 || bit_value % 10 == 0)
        {
        	decimal_equivalent += bit_value * pow(2, bit_weight);
		}
		else
		    invalid_input = true;
		        
		binary_number_entered = binary_number_entered / 10;
		bit_weight++;
		bit_value = binary_number_entered % 10;
		
    	if (bit_value % 10 == 1 || bit_value % 10 == 0)
        {
        	decimal_equivalent += bit_value * pow(2, bit_weight);
		}
		else
		    invalid_input = true;
		        
		binary_number_entered = binary_number_entered / 10;
		bit_weight++;
		bit_value = binary_number_entered % 10;
		
    	if (bit_value % 10 == 1 || bit_value % 10 == 0)
        {
        	decimal_equivalent += bit_value * pow(2, bit_weight);
		}
		else
		    invalid_input = true;
		        
	    binary_number_entered = binary_number_entered / 10;
		bit_weight++;
		bit_value = binary_number_entered % 10;
		
    	if (bit_value % 10 == 1 || bit_value % 10 == 0)
        {
        	decimal_equivalent += bit_value * pow(2, bit_weight);
		}
		else
		    invalid_input = true;
		        
		binary_number_entered = binary_number_entered / 10;
		bit_weight++;
		bit_value = binary_number_entered % 10;
		
    	if (bit_value % 10 == 1 || bit_value % 10 == 0)
        {
        	decimal_equivalent += bit_value * pow(2, bit_weight);
		}
		else
		    invalid_input = true;
		        
		binary_number_entered = binary_number_entered / 10;
		bit_weight++;
		bit_value = binary_number_entered % 10;
		
    	if (bit_value % 10 == 1 || bit_value % 10 == 0)
        {
        	decimal_equivalent += bit_value * pow(2, bit_weight);
		}
		else
		    invalid_input = true;		    
    	
        if (invalid_input == false)
        {
    	    cout << "The value in decimal of the binary entered is : " << decimal_equivalent << endl;
        }
        else
            cout << "Bit value cannot be other than 1 or 0.\n";
        
    }
    else
        cout << "Invalid number entered.\n";   
    
	return 0;    
}

