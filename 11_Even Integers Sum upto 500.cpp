#include <iostream>
using namespace std;

int main()
{
    int current_number = 2;
    int sum = 0;
    while (current_number <= 500)
    {
        sum += current_number;
        current_number += 2;
    }
    cout << "The sum of even integers from 0-500 is : " << sum << endl;
}
