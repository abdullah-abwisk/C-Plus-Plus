#include <iostream>
using namespace std;
#include <string>

class laptop{
    private:
        string brand;
        string model;
        string processor;
        int ram;
        int ssd;
        string graphic_card;
    public:
        void set_values(){
            cout << "Enter brand: ";
            cin >> brand;
            cout << "Enter model: ";
            cin >> model;
            cout << "Enter processor: ";
            cin >> processor;
            cout << "Enter RAM: ";
            cin >> ram;
            cout << "Enter SSD storage size: ";
            cin >> ssd;
            cout << "Enter graphic card name: ";
            cin >> graphic_card;
            cout << "Successfully set description for this laptop.";
        }
        void show_values(){
            cout << "\nThis laptop is made by: " << brand;
            cout << "\nIt's model is: " << model;
            cout << "\nIt has " << processor << " processor.";
            cout << "\nIt has " << ram << "GB RAM.";
            cout << "\nIt has " << ssd << "GB of SSD storage.";
            cout << "\nIt has " << graphic_card << "Graphic Card.\n"; 
        }
};

int main(){
    laptop Abdullah;
    Abdullah.set_values();
    Abdullah.show_values();
    
    return 0;
}