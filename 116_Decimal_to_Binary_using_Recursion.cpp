#include <iostream>
using namespace std;

void Bin(int x)
{
    if(x > 0)
    {
        Bin(x / 2);
        cout << x % 2;
    }
}

int main()
{
    cout << "Enter the decimal:";
    int x;
    cin >> x; 
    Bin(x);

    return 0;
}