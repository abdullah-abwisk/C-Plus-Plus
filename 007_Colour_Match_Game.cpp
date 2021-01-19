/* Color Match Game Question 4 : Assignment 2
   Written by Abdullah Khan : DS-N : 20I-0894 */
   
#include <iostream>
using namespace std;

int main()
{
    int number_entered_1, number_entered_2;
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
    return 0;
}   
