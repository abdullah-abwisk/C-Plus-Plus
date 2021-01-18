#include <iostream>
#include <string>
using namespace std;

class phone 
{
    public:
        int price;
        string brand;
        string model;
        string processor;
        int back_camera;

        void get_values()
        {
            cout << "What is the price of the phone in Rs.? Rs. ";
            cin >> price;
            cout << "What is the brand name: ";
            cin >> brand;
            cout << "What is the model no: ";
            cin >> model;
            cout << "Which processor is used: ";
            cin >> processor;
            cout << "How many MP is the back camera: ";
            cin >> back_camera;
        }
        void display_values()
        {
            cout << "The phone's price is Rs." << price << endl;
            cout << "The phone's brand is " << brand << endl;
            cout << "The phone's model is " << model << endl;
            cout << "The phone's processor is " << processor << endl;
            cout << "The back camera is " << back_camera << "MPs." << endl;
        }
};

int main() 
{
    phone abdullah;
    abdullah.get_values();
    abdullah.display_values();

    return 0;
}