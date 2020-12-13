/* Lotto Game Question 5 : Assignment 2
   Written by Abdullah Khan : DS-N : 20I-0894 */

#include <iostream>
using namespace std;

int main()
{
    int random_1, random_2, random_3, random_4, random_5, random_6, entered_1, entered_2, entered_3, entered_4, entered_5, entered_6, match_count = 0;
    bool diff_random = true, diff_entered = true, number_1 = false, number_2 = false, number_3 = false, number_4 = false, number_5 = false, number_6 = false;
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
        
               
    return 0;         
}   
