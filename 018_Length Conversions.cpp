#include <iostream>
using namespace std;

int main()
{
    int inches, feets, inches_rem;
    float yards;
    cout << "Enter length in inches:";
    cin >> inches;
    feets=inches/12;
    inches_rem=inches%12;
    cout << "Length\tFeets:" << feets << "\tInches:" << inches_rem << endl;
    yards=inches/36;
    cout << "Length in yards is:" << yards << endl;
    return 0;
}
