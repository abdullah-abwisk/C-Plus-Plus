/* Programming Fundamentals : Assignment 03 : Q7
   Abdullah Khan : DS-N : 20i-0894 : Burger Shop */
   
   
  
#include <iostream>
using namespace std;

int main()
{	
	int num_burgers, bun, cheese, cheese_slices, filling, fresh, fresh_layers = 0, sauce, sauce_numbers = 0;
	float total_cost = 0.0;
	char cheese_loop, fresh_loop, sauce_loop;
	cout << "Enter the number of burgers you want to order: ";
	cin >> num_burgers;
	
	// loop for number of burgers
	for (int number = 1; number <= num_burgers; number++)
	{
		cout << "	Your Creation in 5 Simple Steps\n";
		// For bun
		cout << "\n    1. Choose your bun\n    __________________\n\n        1. Toasted Brioche Style Bun\n        2. Baker's Bun\n        3. No Bun - Lettuce Wrap\n";
		cout << "\nEnter your choice: ";
		cin >> bun;
		total_cost += 0.72;
		
		// For cheese
		cout << "Do you want to add cheese? Press y for yes and n for no: ";
		cin >> cheese_loop;
		while (cheese_loop == 'y')
		{
			cout << "\n    2. Make it cheesy\n    _________________\n\n        1. Cheddar Cheese\n        2. Swiss Cheese\n        3. Colby Jack Cheese\n        4. McDonalds(R) Classic Cheese\n        5. Shaved Parmesan\n        0. Exit\n";
			cout << "Enter your choice: ";
			cin >> cheese;
			if (cheese != 0)
			{
				cout << "Enter the number of slices: ";
				cin >> cheese_slices;
				total_cost += 0.5 * cheese_slices;
			}
			else
			    break;
			
			cout << "Do you want to add another cheese? Press y for yes and n for no: ";
			cin >> cheese_loop;	
		}
		
		// For turn up the taste
		cout << "\n    3. Turn up the taste\n    ____________________\n\n        1. Rasher Bacon\n        2. Crispy Bacon\n        3. Egg\n        4. 113g Angus Beef Patty\n        5. Guacamole\n        6. Tortilla Strips\n        7. Grilled Mushrooms\n        8. Grilled Pineapple\n";
		cout << "Enter your filling choice: ";
		cin >> filling;
		total_cost += 1.2;
		
		// For fresh'n it up
		cout << "Do you want to freshen your burger? Press y for yes and n for no: ";
		cin >> fresh_loop;
		fresh_layers = 0;
		while (fresh_loop == 'y')
		{
			cout << "\n    4. Fresh'n it up\n    ________________\n\n        1. Whole Leaf Lettuce\n        2. Tomato\n        3. Caramelised Grilled Onions\n        4. Sliced Beetroot\n        5. Red Onion\n        6. Long Sliced Pickle\n        7. Jalepenos\n        0. Exit\n";
			cout << "Enter your choice: ";
			cin >> fresh;
			if (fresh == 0)
				break;
			else
			{	
				fresh_layers++;
				cout << "Do you want to further freshen it? Press y for yes and n for no: ";
				cin >> fresh_loop; 
			}
		}
		total_cost += 0.2 * fresh_layers;
		
		// For sauces
		cout << "Do you want to add a sauce? Press y for yes and n for no: ";
		cin >> sauce_loop;
		sauce_numbers = 0;
		while (sauce_loop == 'y')
		{
			cout << "\n    5. Get saucy\n    ____________\n\n        1. Ketchup\n        2. Tomato Chilli Jam\n        3. BBQ\n        4. Dijonnaise\n        5. Big Mac(R) Special Sauce\n        6. Aioli\n        7. Herb Aioli\n        8. Chipotle Mayo\n        0. Exit\n";
			cout << "Enter your choice: ";
			cin >> sauce;
			if (sauce == 0)
				break;
			else
				sauce_numbers++;
			
			cout << "Do you want to add another sauce? Press y for yes and n for no: ";
			cin >> sauce_loop;
		}
		total_cost += 0.3 * sauce_numbers;
	}
		
	cout << "Your total is $" << total_cost << ".\n";
	return 0;  
}
