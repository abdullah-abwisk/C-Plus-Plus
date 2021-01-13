#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter any number: ";
    cin >> number;
    number=(((number*2)+10)/2)-number;
    cout << "Final number is:" << number << endl;
    return 0;
}
