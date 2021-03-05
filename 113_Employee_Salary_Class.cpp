#include <iostream>
using namespace std;

class Employee{
    private:
        int number_of_hours;
        float salary; 
    public:
        void getInfo(float sal, int hours){
            salary = sal;
            number_of_hours = hours;
        }    
        void AddSal(){
            if(salary < 500.0){
                salary += 10.0;
                cout << "$10 added to employee salary.\n";
            }
        }
        void AddWork(){
            if(number_of_hours > 6){
                salary += 5.0;
                cout << "$5 added to employee salary.\n";
            }
        }
        void showInfo(){
            cout << "The salary is " << salary << endl;
            cout << "The number of hours worked are " << number_of_hours << endl;
        }
};

int main(){
    float sal;
    int hours;
    cout << "Enter employee salary: ";
    cin >> sal;
    cout << "Enter working hours: ";
    cin >> hours;
    Employee Wisal;
    Wisal.getInfo(sal, hours);
    Wisal.AddSal();
    Wisal.AddWork();
    Wisal.showInfo();

    return 0;
}