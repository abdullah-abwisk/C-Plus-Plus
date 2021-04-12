#include <iostream>
using namespace std;

struct student
{
    int rollno;
    char name[20];
    float cgpa;
    int semester;
};

int main()
{
    student Wisal;

    //input
    cin >> Wisal.rollno;
    cin >> Wisal.name;
    cin >> Wisal.cgpa;
    cin >> Wisal.semester;

    //output
    cout << Wisal.rollno << endl;
    cout << Wisal.name << endl;
    cout << Wisal.cgpa << endl;
    cout << Wisal.semester << endl;

    return 0;
}