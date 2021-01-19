/* Programming Fundamentals : Assignment 03 : Q1
   Abdullah Khan : DS-N : 20i-0894 :Vowel Output */
   


#include <iostream>
using namespace std;

int main()
{
	char input_character;
	cout << "Please enter a vowel: ";
	cin >> input_character;
	int row, space, centre_space;
    switch (input_character)
    {
    	case 'A':
    	case 'a':
    		cout << "        *" << endl;
    	    for(row = 1; row <= 8; ++row)
			{
				for(space = 8; space > row; --space)
				{
					cout << " ";
				}
				
				cout << "*";
				
				for(centre_space = 0; centre_space <= 2 * (row-1); ++centre_space)
				{
					if(row == 4)
					    cout << "*";
					else
						cout << " ";    	
				}
				cout << "*";
				cout << endl;
			}	
		break;	
		case 'E':
		case 'e':
			for(row = 1; row <= 9; ++row)
			{
				if(row == 2 || row == 3 || row == 4 || row == 6 || row == 7 || row == 8)
					cout << "*";
				else
				{
					for(int max_stars = 1; max_stars <= 7; ++max_stars)
					{
						cout << "*";
					}	
						
				}
				cout << endl; 	
			}
		break;
		case 'I':
		case 'i':
			for(row = 1; row <= 8; ++row)
			{
				for(space = 1; space <= 5; ++space)
				{
					cout << " ";
				}
				cout << "*";
				cout << endl;
			}
		break;
		case 'O':
		case 'o':
			for (row = 1; row <= 6; ++row)
			{
				cout << "    ";
				if(row == 1 || row == 6)
				{
					for(int max_stars = 1; max_stars <= 6; ++max_stars)
					{
						cout << "*";
					}
				}
				else
				{
					cout << "*";
					for(centre_space = 1; centre_space <= 4; ++centre_space)
					{
						cout << " ";
					}
					cout << "*";		
				}
				cout << endl;
			}			
		break;
		case 'U':
		case 'u':
			for(row = 1; row <= 7; ++row)
			{
				cout << "    ";
				cout << "*";
				if(row == 7)
				{
					for(int max_stars = 1; max_stars <= 5; ++max_stars)
					{
						cout << "*";
					}
				}
				else
				    cout << "     ";
				cout << "*";
				cout << endl;
			}
		break;
		default:
		    cout << "Invalid input.";		
	}
	
	return 0;
		
}
