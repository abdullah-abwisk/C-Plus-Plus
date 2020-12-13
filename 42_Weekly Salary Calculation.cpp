/* Weekly Salary Calculation Question 2 : Assignment 2
   Written by Abdullah Khan : DS-N : 20I-0894          */
   
#include <iostream>
using namespace std;

int main()
{
    int total_hours_worked, overtime_hours;
    float base_pay_per_hour, weekly_total_pay;
    cout << "Enter your base pay per hour: ";
    cin >> base_pay_per_hour;
    /* checking if base pay is greater than
       the minimum requirement set by the state */
    if (base_pay_per_hour >= 8.00)
    {
	weekly_total_pay = 0.00;
	cout << "Enter the number of hours you have worked: ";
	cin >> total_hours_worked;
	/* checking whether total hours worked include overtime hours
	   and whether they are less than 60 and greater than 0       */
	if (total_hours_worked <= 40 && total_hours_worked > 0)
	{
	    weekly_total_pay = total_hours_worked * base_pay_per_hour;
	    cout << "Your total pay is: " << weekly_total_pay << endl;
	    cout << "Your overtime is: 0 hrs" << endl;
	}
	else if (total_hours_worked <= 60 && total_hours_worked > 40)
	{
            overtime_hours = total_hours_worked - 40;
            weekly_total_pay = (base_pay_per_hour * 40) + (base_pay_per_hour * 1.5 * overtime_hours);
            cout << "Your total pay is: " << weekly_total_pay << endl;
            cout << "Your overtime is: " << overtime_hours << " hrs." << endl;
	}    
        else
        {
            cout << "Invalid number of work hours entered.";
        }    
    }        
    else
    {
        cout << "Base pay is less than the minimum wage requirement.";
    }    
    return 0;
}
