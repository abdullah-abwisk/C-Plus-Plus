#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, discriminant, x_one, x_two;
	bool imaginary = false;
	cout << "Welcome to the quadratic formula by Abdullah Khan\n\n";
	cout << "Enter a:";
	cin >> a;
	cout << "Enter b:";
	cin >> b;
	cout << "Enter c:";
	cin >> c;
	cout << endl << endl;
	discriminant = (b*b) - (4*a*c);
	if(discriminant < 0)
		imaginary = true;
	
	if(imaginary)
	{
		discriminant *= -1;
		cout << "x1 = " << -b << "+" << sqrt(discriminant) << "i\n     ________\n\n         " << 2*a << endl << endl;
		cout << "________________________\n";
		cout << "x2 = " << -b << "-" << sqrt(discriminant) << "i\n     ________\n\n         " << 2*a << endl << endl;
	}
	else
	{
		x_one = ((b * -1) + sqrt(discriminant))/(2 * a);
		x_two = ((b * -1) - sqrt(discriminant))/(2 * a);
		cout << "x1 = " << x_one << endl << endl;
		cout << "x2 = " << x_two << endl << endl;
	}	
			
}
