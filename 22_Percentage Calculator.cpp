#include <iostream>
using namespace std;

int main()
{
    int marks_1, marks_2, marks_3, marks_4, marks_5;
    float percentage;
    cout << "Enter marks of first subject:";
    cin >> marks_1;
    cout << "Enter marks of second subject:";
    cin >> marks_2;
    cout << "Enter marks of third subject:";
    cin >> marks_3;
    cout << "Enter marks of fourth subject:";
    cin >> marks_4;
    cout << "Enter marks of fifth subject:";
    cin >> marks_5;
    percentage=(marks_1+marks_2+marks_3+marks_4+marks_5)/5;
    cout << "Percentage is:" << percentage << endl;
    return 0;
}
