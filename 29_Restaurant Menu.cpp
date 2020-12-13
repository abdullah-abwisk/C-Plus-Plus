/* Programming Fundamentals : Assignment 03 : Q5
   Abdullah Khan : DS-N : 20i-0894 : Restaurant Menu */
   
#include <iostream>
using namespace std;

int main()
{
	int category = 1, food_category, burger_category, paratha_roll_category, pakistani_food_category;
	float total = 0.0;
	char add_item;
	bool takeaway = false, dinein = false, delivery = false, mainmenu = false, exitflag = false, category_menu = true; 
	while(category != 0 && exitflag != true && category_menu == true)
	{
		cout << "**********Welcome to the main menu**********\n\nPress 1 to select TAKEAWAY\nPress 2 to select DINE IN\nPress 3 to select DELIVERY\nPress 0 to exit\n\nWhich category you want to choose: ";
		cin >> category;
		do
		{
			category_menu = false;
			
			switch (category)
			{
				case 1:
					cout << "**********Welcome to the TAKEAWAY menu**********\n";
					takeaway = true;
				break;
				case 2:
					cout << "**********Welcome to the DINE IN menu**********\n";
					dinein = true;
				break;	
				case 3:
					cout << "**********Welcome to the DELIVERY menu**********\n";
					delivery = true;
				break;
				case 0:
					exitflag = true;
				break;		
			}
		
			if (category == 0)
			{
				cout << "You have exited the program.\n";
				break;
			}
			else if (exitflag != true && category != 0)
			{
				do
				{
					cout<<"_____PRESS 1 FOR BURGER_____\n_____PRESS 2 FOR PARATHA ROLL _____\n_____PRESS 3 FOR PAKISTANI FOOD _____\n_____PRESS 9 END ORDER _____\n_____PRESS 0 FOR MAIN MENU _____"<<endl;
					cout << "Which catgory do you want to choose: ";
					cin >> food_category;
					if (food_category == 1)
					{			
						cout << "Select burger type:\n1) Mack___________699\n2) Zinger___________599\n3) Hot___________449\n4) Patty Burger___________699\n5) To end order\n6) To exit burger category"<<endl;
						cout << "Your option: ";
						cin >> burger_category;
						switch (burger_category)
						{
							case 1:
								total += 699;
								cout<<"Mack has been added.";
							break;
							case 2:
								total += 599;
								cout<<"Zinger has been added.";
							break;
							case 3:
								total += 449;
								cout<<"Hot has been added.";
							break;
							case 4:
								total += 699;
								cout<<"Patty Burger has been added.";
							break;
							case 5:
								exitflag = true;
							break;
							case 6:
								mainmenu = true;	//this flag will return you back to tskeway menu, which means you will exit from burger menu
							break;
							default:
								cout << burger_category << " is not in the options." << endl;
						}
					}
					else if(food_category == 2)	
					{
						cout << "\n1) platter___________299\n2) cheese___________349\n3) crispy___________399\n4) double trouble___________699\n5) To end order\n6) To exit paratha roll category" << endl;
						cout << "Select paratha roll:";
						cin >> paratha_roll_category;
						switch (paratha_roll_category)
						{
							case 1:
								total += 299;
								cout<<"Platter has been added.";
							break;
							case 2:
								total += 349;
								cout<<"Cheese has been added.";
							break;
							case 3:
								total += 399;
								cout<<"Crispy has been added.";
							break;
							case 4:
								total += 699;
								cout<<"Double Trouble has been added.";
							break;
							case 5:
								exitflag = true;
							break;
							case 6:
								mainmenu = true;	//exit paratha roll category means go back to the take away menu
							break;
							default:
								cout<< paratha_roll_category << "is not in opitons" << endl;		
						}
					}
					else if(food_category == 3)
					{
						cout << "1) Haleem___________199\n2) Nihaari___________199\n3) Daal___________149\n4) Ghosht___________249\n5) To end order\n6) To exit pakistani food category" << endl;
						cout << "Select Pakistani food: ";
						cin >> pakistani_food_category;
						switch(pakistani_food_category)
						{
							case 1:
								total+=199;
								cout<<"Haleem has been added.";
							break;
							case 2:
								total+=199;
								cout<<"Nihaari has been added.";
							break;
							case 3:
								total+=149;
								cout<<"Daal has been added.";
							break;
							case 4:
								total+=249;
								cout<<"Ghosht has been added.";
							break;
							case 5:
								exitflag = true;
							break;
							case 6:
								mainmenu = true;
						default:
							cout<< pakistani_food_category << "is not in the options" << endl;
						}
					}
					else if(food_category == 0)	
						category_menu = true;
					else if(food_category == 9)
					{
						exitflag = true;
					}
						
					cout << "\n\nDo you want to add another item? Press y for yes and n for no: ";
					cin >> add_item;
						
				} while (exitflag != true && add_item == 'y');
			}
											
		} while (mainmenu == true && category_menu != true && exitflag != true);
	}
	
	if(food_category == 9)
		cout << "You have exited the program.\n";
		
	else
	{	
		if	(category == 2)
			total += total * 0.16;
		else if (category == 3)
			total += 200;
		
		if (total < 1000)
			total -= total * 0.05;
		else if (total <1500)
		    total -= total * 0.10;
		else if (total <2000)
		    total -= total * 0.15;    		
		else if (total < 2500)
		    total -= total * 0.20;
		else if (total < 3000)
		    total -= total * 0.30;    
		else if (total >= 3000)
		    total -= total * 0.50;
	    			
		cout << "Your total bill is: " << total << endl;
	}
		
	return 0;
	
}   
