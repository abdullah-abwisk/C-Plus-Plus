#include <iostream>
using namespace std;

int main()
{
    int day_number_input;
    cout << "Enter the day number: ";
    cin >> day_number_input;
    switch (day_number_input)
    {  
        case 1:
            cout << "The day is Saturday.\n";
        break;        
        case 2:
            cout << "The day is Sunday.\n";
        break;    
        case 3:
            cout << "The day is Monday.\n";
        break;    
        case 4:
            cout << "The day is Tuesday.\n";
        break;    
        case 5:
            cout << "The day is Wednesday.\n";
        break;    
        case 6:
            cout << "The day is Thursday.\n";
        break;    
        case 7:
            cout << "The day is Friday.\n";
        break;  
        default:
            cout << "Wrong day number entered.\n";
    }
    return 0;
}
