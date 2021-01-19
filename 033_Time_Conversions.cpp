#include <iostream>
using namespace std;

int main()
{
    int seconds, hours, minutes, second_rem;
    cout << "Enter time in seconds:";
    cin >> seconds;
    hours=seconds/3600;
    minutes=seconds/60-(hours*60);
    seconds=seconds%60;
    cout << hours << " hours : " << minutes << " minutes : " << seconds << "seconds" << endl; 
    return 0;
}
