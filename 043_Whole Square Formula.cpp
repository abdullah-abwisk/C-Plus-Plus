#include <iostream>
using namespace std;

int main()
{
    int a, b, c, whole_square;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;
    cout << "Enter third number:";
    cin >> c;
    whole_square=a*a+b*b+c*c+(a*b+b*c+c*a)*2;
    cout << "The whole square of these numbers is:" << whole_square << endl;
    return 0;
}
