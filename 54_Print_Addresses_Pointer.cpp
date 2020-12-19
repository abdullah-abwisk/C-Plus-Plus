#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int *ptrA, *ptrB;	
	cout << "Enter a:";
	cin >> a;
	cout << "Enter b:";
	cin >> b;
	ptrA = &a;
	ptrB = &b;
	cout << "The address of a is: " << ptrA << endl;
	cout << "The address of b is: " << ptrB << endl;
	
	return 0;
}
