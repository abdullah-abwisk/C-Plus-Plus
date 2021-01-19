#include <iostream>
using namespace std;

int main()
{
    int firstnumber, secondnumber;
    cout << "Enter first number: ";
    cin >> firstnumber;
    cout << "Enter second number: ";
    cin >> secondnumber;
    (firstnumber % 2 == 0) ? cout << "Number 1 is even.\n" : cout << "Number 1 is odd.\n";
    (secondnumber % 2 == 0) ? cout << "Number 2 is even.\n" : cout << "Number 2 is odd.\n";
    (firstnumber % secondnumber == 0) ? cout << "Number 1 is completely divisible by number 2.\n" : cout << "Number 1 is not completely divisible by number 2.\n";
    return 0;
}
