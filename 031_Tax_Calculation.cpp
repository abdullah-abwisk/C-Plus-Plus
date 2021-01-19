#include <iostream>
using namespace std;

int main()
{
    int price_1, price_2, qty_1, qty_2;
    float amount_bf_tax, amount_af_tax;
    cout << "Enter price of first product:";
    cin >> price_1;
    cout << "Enter quantity of first product:";
    cin >> qty_1;
    cout << "Enter price of second product:";
    cin >> price_2;
    cout << "Enter quantity of second product:";
    cin >> qty_2;
    amount_bf_tax=price_1*qty_1+price_2*qty_2;
    amount_af_tax=amount_bf_tax*0.9;
    cout << "Total cost before tax is:" << amount_bf_tax << endl;
    cout << "Total cost after tax is:" << amount_af_tax << endl;
    return 0; 
}
