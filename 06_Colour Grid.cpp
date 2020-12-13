/* Programming Fundamentals : Assignment 03 : Q2
   Abdullah Khan : DS-N : 20i-0894 : Colour Grid */
   
   
#include <iostream>
using namespace std;
   
int main()
{
	int number_1, number_2, warnings = 3, matched_boxes = 0, prev_1 = 0, prev_2 = 0;
	bool matched;
	char again;
	do
	{
		matched = false;
		cout << "|1  2  3  4  5  6|\n|7  8  9 10 11 12|\n|13 14 15 16 17 18|\n|19 20 21 22 23 24|\n|25 26 27 28 29 30|\n|31 32 33 34 35 36|\n";
		cout << "Enter number one: ";
		cin >> number_1;
		cout << "Enter number two: ";
		cin >> number_2;
		
		if(number_1 != prev_1 && number_1 != prev_2 && number_2 != prev_1 && number_2 != prev_2)
		{
			if(number_1 != number_2)
			{
				if (number_1 >= 1 && number_1 <= 36 && number_2 >= 1 && number_2 <= 36)
				{
					if ((number_1 == 1 || number_1 == 6 || number_1 == 7 || number_1 == 12 || number_1 == 17 || number_1 == 20 || number_1 == 28 || number_1 == 33) && (number_2 == 1 || number_2 == 6 || number_2 == 7 || number_2 == 12 || number_2 == 17 || number_2 == 20 || number_2 == 28 || number_2 == 33))
					{
						matched = true;
					}
					else if ((number_1 == 2 || number_1 == 11 || number_1 == 13 || number_1 == 18 || number_1 == 19 || number_1 == 24 || number_1 == 29 || number_1 == 32) && (number_2 == 2 || number_2 == 11 || number_2 == 13 || number_2 == 18 || number_2 == 19 || number_2 == 24 || number_2 == 29 || number_2 == 32))
					{
						matched = true;
					}
					else if ((number_1 == 3 || number_1 == 10 || number_1 == 14 || number_1 == 23 || number_1 == 25 || number_1 == 30 || number_1 == 31 || number_1 == 36) && (number_2 == 3 || number_2 == 10 || number_2 == 14 || number_2 == 23 || number_2 == 25 || number_2 == 30 || number_2 == 31 || number_2 == 36))
					{
						matched = true;
					}
					else if ((number_1 == 4 || number_1 == 9 || number_1 == 15 || number_1 == 22 || number_1 == 26 || number_1 == 35) && (number_2 == 4 || number_2 == 9 || number_2 == 15 || number_2 == 22 || number_2 == 26 || number_2 == 35))
					{
						matched = true;
					}
					else if ((number_1 == 5 || number_1 == 8 || number_1 == 16 || number_1 == 21 || number_1 == 27 || number_1 == 34) && (number_2 == 5 || number_2 == 8 || number_2 == 16 || number_2 == 21 || number_2 == 27 || number_2 == 34))
					{
						matched = true;	
					}
					else
					{
						cout << "The numbers do not match.\n";
						warnings--;
						cout << "You have " << warnings << " warnings remaining.\n";
					}
				
					if (matched == true)
					{
					    cout << "The colors are matching on the grid.\n";
						prev_1 = number_1;
						prev_2 = number_2;
						matched_boxes++;									
					}
	
					if (matched_boxes == 18)
					{
	    				cout << "You have completed the grid. Congrats! Yay!\n";
	    				break;			
					}
				}
				else
				{
					cout << "Enter numbers from within the grid.\n";
					warnings--;
					cout << "You have " << warnings << " warnings remaining.\n";					
				}
			}
			else 
			{
				cout << "Please enter different numbers next time.";
			}
		}
		else
		{ 
			cout << "Numbers entered match with previous number\n";
			warnings--;
			cout << "You have " << warnings << " warnings remaining.\n";
		}
		
		if (warnings == 0 || matched_boxes == 18)
		{
			break;
		}
		else
		{
			cout << "Do you want to try again? (Press y for yes): ";
			cin >> again;
		}
	} while (again == 'y');
	if (warnings == 0)
	{
	    cout << "You have lost the game because 0 warnings remain.\n";
	}
	       
	
	return 0;
}   
