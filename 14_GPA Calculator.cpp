#include <iostream>
using namespace std;

int main()
{
    char grade_entered, loop;
    float G_P_A;
    int GPA_4, GPA_3, GPA_2, GPA_1, GPA_0;
    GPA_4 = GPA_3 = GPA_2 = GPA_1 = GPA_0 = 0;
    cout << "Do you want to enter a grade? Press y: ";
    cin >> loop;
    while (loop == 'y')
    {
        cout << "Please enter your grade: ";
        cin >> grade_entered;
        switch (grade_entered)
        {
            case 'A':
                G_P_A = 4.0;
                cout << "Your GPA is 4.0\n";
                GPA_4++;
            break;
            case 'B':
                G_P_A = 3.0;
                cout << "Your GPA is 3.0\n";
                GPA_3++;
            break;
            case 'C':
                G_P_A = 2.0;
                cout << "Your GPA is 2.0\n";
                GPA_2++;
            break;
            case 'D':
                G_P_A = 1.0;
                cout << "Your GPA is 1.0\n";
                GPA_1++;
            break;
            case 'F':
                G_P_A = 0.0;
                cout << "Your GPA is 0.0\n";
                GPA_0++;
            break;
            defaut:
                cout << "You entered wrong grade.\n";    
        } 
        cout << "Do you want to enter another grade? Press y: ";
        cin >> loop;   
    }
    cout << "Total students who got 4.0 are: " << GPA_4 << endl;
    cout << "Total students who got 3.0 are: " << GPA_3 << endl;
    cout << "Total students who got 2.0 are: " << GPA_2 << endl;
    cout << "Total students who got 1.0 are: " << GPA_1 << endl;
    cout << "Total students who got 0.0 are: " << GPA_0 << endl;
    return 0;
}    
