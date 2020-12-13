/* User Interface Question 6 : Assignment 2
   Written by Abdullah Khan : DS-N : 20I-0894 */
   
#include <iostream>
using namespace std;
// calling cmath library to use the power function
#include <cmath>


int main()
{
    int program_number;
    
    // declaration program 1
    int decimal_equivalent = 0, bit_weight = 0, bit_value, binary_number_entered;
    bool invalid_input = false;
    
    // declaration program 2
    int total_hours_worked, overtime_hours;
    float base_pay_per_hour, weekly_total_pay;
    
    // declaration program 3
    char new_server_check, configuration_change, condition_check;
    bool exit_flag = false;
    
    // declaration program 4
    int number_entered_1, number_entered_2;
    
    // declaration program 5
    int random_1, random_2, random_3, random_4, random_5, random_6, entered_1, entered_2, entered_3, entered_4, entered_5, entered_6, match_count = 0;
    bool diff_random = true, diff_entered = true, number_1 = false, number_2 = false, number_3 = false, number_4 = false, number_5 = false, number_6 = false;
    
    cout << "_____________________________________________\n\n\t   Abdullah Khan : 20I-0894\n\t          Assignment 02\n\t   Programming Fundamentals\n_____________________________________________\n\n\t       MAIN MENU\n\t1 --> Binary to Decimal Conversion\n\t2 --> Weekly Salary Calculation\n\t3 --> HP Server Diagnostics\n\t4 --> Color Match Game\n\t5 --> Lotto Game\n\t0 --> Exit\n\n\t   Choose your option: ";
    cin >> program_number;
    switch (program_number)
    {
    case 1:
    	
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
    
    break;
    
    
    case 2:
        
        cout << "Enter your base pay per hour: ";
        cin >> base_pay_per_hour;
        /* checking if base pay is greater than
           the minimum requirement set by the state */
        if (base_pay_per_hour >= 8.00)
        {
	    weekly_total_pay = 0.00;
	    cout << "Enter the number of hours you have worked: ";
	    cin >> total_hours_worked;
	    /* checking whether total hours worked include overtime hours
	       and whether they are less than 60 and greater than 0       */
	    if (total_hours_worked <= 40 && total_hours_worked > 0)
	    {
	        weekly_total_pay = total_hours_worked * base_pay_per_hour;
	        cout << "Your total pay is: " << weekly_total_pay << endl;
	        cout << "Your overtime is: 0 hrs" << endl;
	    }
	    else if (total_hours_worked <= 60 && total_hours_worked > 40)
	    {
                overtime_hours = total_hours_worked - 40;
                weekly_total_pay = (base_pay_per_hour * 40) + (base_pay_per_hour * 1.5 * overtime_hours);
                cout << "Your total pay is: " << weekly_total_pay << endl;
                cout << "Your overtime is: " << overtime_hours << " hrs." << endl;
	    }    
            else
            {
                cout << "Invalid number of work hours entered.";
            }    
        }        
        else
            cout << "Base pay is less than the minimum wage requirement.";
            
    break;
    
    
    case 3:
    
        cout << "Starting General Diagnosis Program.\n";
        cout << "Recording symptoms information. -DONE\n";
        cout << "Rebooting server to see if condition still exists. -DONE\n";
        cout << "Is this a newly installed server? Press y or n: ";
        cin >> new_server_check;
        if (new_server_check == 'y')
        {
            cout << "Please reseat any components that may have come loose during shipping. -DONE\n";
            cout << "Does condition still exist? Press y or n: ";
            cin >> condition_check;
        }
        if (condition_check == 'n')
            exit_flag = true;
        if ((condition_check == 'y' || new_server_check == 'n') && exit_flag == false)
        {
            cout << "Were options added or was the configuration changed recently? Press y or n: ";
            cin >> configuration_change;
            if (configuration_change == 'y' && exit_flag == false)
            {
                cout << "Isolate what has changed. Verify it was installed correctly. Restore the server to last known working state or original shipped configuration. -DONE\n";
                cout << "Does condition still exist? Press y or n: ";
                cin >> condition_check;
            }
            else
            {
                cout << "Check for service notifications. -DONE\n";
                cout << "Download the latest software and firmware from the HP website. -DONE\n";
                cout << "Does condition still exist? Press y or n: ";
                cin >> condition_check;
            }
            if (condition_check == 'n')
                exit_flag = true;
            else
            {
                cout << "Isolate and minimize the memory configuration. -DONE\n";
                cout << "Does condition still exist? Press y or n: ";
                cin >> condition_check;
                if (condition_check == 'n')
                exit_flag = true;
                else
                {
                    cout << "Break server down to minimal configuration. -DONE\n";
                    cout << "Does condition still exist? Press y or n: ";
                    cin >> condition_check;
                    if (condition_check == 'y')
                    {
                        cout << "Troubleshoot or replace basic server spare parts. -DONE\n";
                        cout << "Does condition still exist? Press y or n: ";
                        cin >> condition_check;
                        if (condition_check == 'n')
                        {
                            cout << "Record symptom & error information on repair tag if sending back a failed part.\n";
                            exit_flag == true;
                        }
                        else
                            cout << "Ensure the following information is\navailable:\nSurvey configuration snapshots\nOS event log file\nFull crash dump\nCall HP Service Provider\n";
                    }        
                    else        
                        cout << "Ensure the following information is\navailable:\nSurvey configuration snapshots\nOS event log file\nFull crash dump\nCall HP Service Provider\n";   
                }   
            }    
        }
        if (exit_flag == true)
            cout << "Record action taken.\n";
    
    break; 
    
    
    case 4:  
          
        cout << "\t\t  Grid  \t\t\n" << "1\t2\t3\t4\t5\t6\n7\t8\t9\t10\t11\t12\n13\t14\t15\t16\t17\t18\n19\t20\t21\t22\t23\t24\n25\t26\t27\t28\t29\t30\n31\t32\t33\t34\t35\t36\n";
        cout << "Enter number 1 between 1 and 36: ";
        cin >> number_entered_1;
        cout << "Enter 2nd number between 1 and 36 to compare colors with number 1: ";
        cin >> number_entered_2;
        if (number_entered_1 < 1 || number_entered_1 > 36 || number_entered_2 < 1 || number_entered_2 > 36)
            cout << "Invalid number/numbers entered.\n";
        else if (number_entered_1 == number_entered_2)
            cout << "Same numbers entered and so, same color in the grid.\n";    
        else
        {
            // For green colored numbers
            if ((number_entered_1 == 1 || number_entered_1 == 6 || number_entered_1 == 7 || number_entered_1 == 12 || number_entered_1 == 17 || number_entered_1 == 20 || number_entered_1 == 28 || number_entered_1 == 33) && (number_entered_2 == 1 || number_entered_2 == 6 || number_entered_2 == 7 || number_entered_2 == 12 || number_entered_2 == 17 || number_entered_2 == 20 || number_entered_2 == 28 || number_entered_2 == 33))
                cout << "The colors are green.\n";
            
            // For red colored numbers
            else if ((number_entered_1 == 2 || number_entered_1 == 11 || number_entered_1 == 13 || number_entered_1 == 18 || number_entered_1 == 19 || number_entered_1 == 24 || number_entered_1 == 29 || number_entered_1 == 32) && (number_entered_2 == 2 || number_entered_2 == 11 || number_entered_2 == 13 || number_entered_2 == 18 || number_entered_2 == 19 || number_entered_2 == 24 || number_entered_2 == 29 || number_entered_2 == 32))
                cout << "The colors are red.\n";
            
            // For blue colored numbers    
            else if ((number_entered_1 == 3 || number_entered_1 == 10 || number_entered_1 == 14 || number_entered_1 == 23 || number_entered_1 == 25 || number_entered_1 == 30 || number_entered_1 == 31 || number_entered_1 == 36) && (number_entered_2 == 3 || number_entered_2 == 10 || number_entered_2 == 14 || number_entered_2 == 23 || number_entered_2 == 25 || number_entered_2 == 30 || number_entered_2 == 31 || number_entered_2 == 36))
                cout << "The colors are blue.\n";
                
            // For orange colored numbers
            else if ((number_entered_1 == 4 || number_entered_1 == 9 || number_entered_1 == 15 || number_entered_1 == 22 || number_entered_1 == 26 || number_entered_1 == 35) && (number_entered_2 == 4 || number_entered_2 == 9 || number_entered_2 == 15 || number_entered_2 == 22 || number_entered_2 == 26 || number_entered_2 == 35))
                cout << "The colors are orange.\n"; 
            
            // For silver colored number
            else if ((number_entered_1 == 5 || number_entered_1 == 8 || number_entered_1 == 16 || number_entered_1 == 21 || number_entered_1 == 27 || number_entered_1 == 34) && (number_entered_2 == 5 || number_entered_2 == 8 || number_entered_2 == 16 || number_entered_2 == 21 || number_entered_2 == 27 || number_entered_2 == 34))
                cout << "The colors are silver.\n"; 
            
            // For different colored numbers
            else
                cout << "Both numbers have different colors in grid.\n";       
        }
       
    break;
    
        
    case 5:
    
        random_1 = (rand() % 40) + 1;
        random_2 = (rand() % 40) + 1;
        random_3 = (rand() % 40) + 1;
        random_4 = (rand() % 40) + 1;
        random_5 = (rand() % 40) + 1;
        random_6 = (rand() % 40) + 1;
        cout << "Enter guess number 1: ";
        cin >> entered_1;
        cout << "Enter guess number 2: ";
        cin >> entered_2;
        cout << "Enter guess number 3: ";
        cin >> entered_3;
        cout << "Enter guess number 4: ";
        cin >> entered_4;
        cout << "Enter guess number 5: ";
        cin >> entered_5;
        cout << "Enter guess number 6: ";
        cin >> entered_6;
    
        // checking if random numbers are different
        if (random_1 == random_2 || random_1 == random_3 || random_1 == random_4 || random_1 == random_5 || random_1 == random_6 || random_2 == random_3 || random_2 == random_4 || random_2 == random_5 || random_2 == random_6 || random_3 == random_4 || random_3 == random_5 || random_3 == random_6 || random_4 == random_5 || random_4 == random_6 || random_5 == random_6)
            diff_random = false;
        
        // checking if entered numbers are different
        if (entered_1 == entered_2 || entered_1 == entered_3 || entered_1 == entered_4 || entered_1 == entered_5 || entered_1 == entered_6 || entered_2 == entered_3 || entered_2 == entered_4 || entered_2 == entered_5 || entered_2 == entered_6 || entered_3 == entered_4 || entered_3 == entered_5 || entered_3 == entered_6 || entered_4 == entered_5 || entered_4 == entered_6 || entered_5 == entered_6)
        diff_entered = false;
    
    
        if (diff_random == true && diff_entered == true)
        {
            if (entered_1 == random_1 || entered_1 == random_2 || entered_1 == random_3 || entered_1 == random_4 || entered_1 == random_5 || entered_1 == random_6)
            {
                match_count += 1;
                cout << "Number 1 has matched with the lottery.\n";
                number_1 = true;
            }
            if (entered_2 == random_1 || entered_2 == random_2 || entered_2 == random_3 || entered_2 == random_4 || entered_2 == random_5 || entered_2 == random_6)
            {
                match_count += 1;
                cout << "Number 2 has matched with the lottery.\n";
                number_2 = true;
            }
            if (entered_3 == random_1 || entered_3 == random_2 || entered_3 == random_3 || entered_3 == random_4 || entered_3 == random_5 || entered_3 == random_6)
            {
                match_count += 1;
                cout << "Number 3 has matched with the lottery.\n";
                number_3 = true;
            }
            if (entered_4 == random_1 || entered_4 == random_2 || entered_4 == random_3 || entered_4 == random_4 || entered_4 == random_5 || entered_4 == random_6)
            {
                match_count += 1;
                cout << "Number 4 has matched with the lottery.\n";
                number_4 = true;
            }
            if (entered_5 == random_1 || entered_5 == random_2 || entered_5 == random_3 || entered_5 == random_4 || entered_5 == random_5 || entered_5 == random_6)
            {
                match_count += 1;
                cout << "Number 5 has matched with the lottery.\n";
                number_5 = true;
            }
            if (entered_6 == random_1 || entered_6 == random_2 || entered_6 == random_3 || entered_6 == random_4 || entered_6 == random_5 || entered_6 == random_6)
            {
                match_count += 1;
                cout << "Number 6 has matched with the lottery.\n";
                number_6 = true;
            }
        }  
        else
            cout << "The numbers generated and/or the numbers entered have similar numbers.\n"; 
    
        if (match_count == 0 && diff_entered == true)
            cout << "Your lottery numbers do not match any number. Thanks for playing the lottery game.\n";
        
        else if (match_count == 6)
            cout << "Congratulations!!! You won the jackpot!\n";
        
        else
            cout << "You have won " << match_count << " stars: ";
    
        if (number_1 == true)
            cout << entered_1 << endl;    
        if (number_2 == true)
            cout << entered_2 << endl;
        if (number_3 == true)
            cout << entered_3 << endl;
        if (number_4 == true)
            cout << entered_4 << endl;
        if (number_5 == true)
            cout << entered_5 << endl;
        if (number_6 == true)
            cout << entered_6 << endl;         
       
    break;
    
    
    case 0:
    
        cout << "You have exited the program.\n";
    
    break;
    
    
    default:
        
        cout << "Wrong number entered.\n"; 
           
    }

    return 0;
}    
        
  
