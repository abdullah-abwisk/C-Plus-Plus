#include <iostream>
using namespace std;

int main()
{
    float firstnumber, secondnumber, result;
    char sign;
    cout << "Enter first number: ";
    cin >> firstnumber;
    cout << "Enter second number: ";
    cin >> secondnumber;
    cout << "Enter operator: ";
    cin >> sign;
    switch(sign)
    {
        case '+':
            result = firstnumber + secondnumber;
            cout << result <<endl;
        break;
        case '-':
            result = firstnumber - secondnumber;
            cout << result <<endl;
        break;
        case '*':
            result = firstnumber * secondnumber;
            cout << result <<endl;
        break;
        case '/':
            if(secondnumber == 0.0)
            {
                cout << "Cannot divide by 0.\n";
            }
            else
            {
                result = firstnumber / secondnumber;
                cout << result <<endl;
            }
        break;
        default: cout << "Invalid operator entered.\n";
    }                     
    return 0;      
}
