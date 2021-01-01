#include <iostream>
#include <cmath>
using namespace std;

bool fittest(float*, float*, float*);

int main()
{
	cout << "This program returns 0 if rectangle does not \nfit in the cirle and 1 if it fits.\n\n";
	float *height, *width, *radius;
	float h, w, r;
	cout << "Enter height of the rectangle: ";
	cin >> h;
	cout << "Enter width of the rectangle: ";
	cin >> w;
	cout << "Enter radius of the circle: ";
	cin >> r;
	
	cout << fittest(&h, &w, &r) << endl;
	
	return 0;
}

bool fittest(float *height, float *width, float *radius)
{
	float halfdiagonal;
	halfdiagonal = (sqrt((*height * *height) + (*width * *width))) / 2;
	if (halfdiagonal <= *radius)
		return true;
	else
		return false;	
}
