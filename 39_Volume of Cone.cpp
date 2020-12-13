#include <iostream>
using namespace std;

int main()
{
    float Pi=3.1415, volume;
    int r, h;
    cout << "Enter the radius:";
    cin >> r;
    cout << "Enter the height:";
    cin >> h;
    volume = (Pi*r*r*h)/3;
    cout << "The volume of cone is: " << volume <<endl;
    return 0;
}
