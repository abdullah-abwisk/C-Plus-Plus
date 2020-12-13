#include <iostream>
using namespace std;

int main()
{
    int number, length;
    cout << "Enter a number between 1 and 99999: ";
    cin >> number;
    cout << "Enter the length of the number: ";
    cin >> length;
    (number >= 1 && number <= 99999) ? cout << "Number is within range.\n" : cout << "Invalid input.\n";
    switch (length)
    {
        case 1:
            cout << "You have entered a 1 digit number.\n";
        break;
        case 2:
            cout << "You have entered a 2 digit number.\n";
        break;
        case 3:
            cout << "You have entered a 3 digit number.\n";
        break;
        case 4:
            cout << "You have entered a 4 digit number.\n";
        break;
        case 5:
            cout << "You have entered a 5 digit number.\n";
        break;    
    }
  
    return 0;
}
