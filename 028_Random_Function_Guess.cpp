#include <iostream>
using namespace std;
#include <cstdlib>
#include <time.h>

int main()
{
    int generated_number, guess_number;
    char loop;
    cout << "Do you want to guess a number? Press y: ";
    cin >> loop;
    while (loop == 'y')
    {
    	srand(time(0));
        generated_number = (rand() % 100) + 1;
        cout << "Enter your guess: ";
        cin >> guess_number;
        if (guess_number > generated_number)
            cout << "You guessed too high.\n";
        else if (guess_number < generated_number)
            cout << "You guessed too low.\n";
        else
            cout << "COngratulations! You guessed it right.\n";
            
        cout << "Do you want to guess another number? Press y or n: ";
        cin >> loop;
    }
    return 0;
}
