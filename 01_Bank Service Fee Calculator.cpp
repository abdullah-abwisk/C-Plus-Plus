#include <iostream>
using namespace std;

int main()
{
    float accountbalance, chequefee, servicefee;
    int no_of_cheques;
    const int bankcharges = 10, extracharge = 15;
    cout << "Enter your account balance: ";
    cin >> accountbalance;
    cout << "Enter the number of cheques: ";
    cin >> no_of_cheques;
    if (accountbalance < 0)
    {
        cout << "Urgent: Account is overdrawn.";
    }
    else
    {
        if (no_of_cheques < 0)
        {
            cout << "Invalid number of cheques entered;";
        }
        else if (no_of_cheques < 20)
            chequefee = 0.10;
        else if (no_of_cheques < 40)
            chequefee = 0.08;
        else if (no_of_cheques < 60)
            chequefee = 0.06;
        else
            chequefee = 0.04;                              
    
        if (accountbalance < 400)
        {
            servicefee = bankcharges + chequefee + extracharge;
        }
        else
        {
            servicefee = bankcharges + chequefee;
        }
        cout << "Total service fee for this month is: " << servicefee << endl;
    }
    return 0;    
        
}
