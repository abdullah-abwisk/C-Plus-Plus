#include <iostream>
using namespace std;

#define wSmall 2
#define wBig 5

int smallchocs(int, int, int);

int main()
{
	int nSmall, nBig, order, num_small;
	cout << "Enter the number of available small chocolates: ";
	cin >> nSmall;
	cout << "Enter the number of available big chocolates: ";
	cin >> nBig;
	cout << "Enter the total weight of order (in grams): ";
	cin >> order;
	nSmall = smallchocs(nSmall, nBig, order);
	cout << nSmall;
	return 0;
}

int smallchocs(int nSmall, int nBig, int order)
{
	int num_small = -1, num_big = 0, loop;
	for (loop = 0; wBig * num_big <= order, num_big <= nBig; loop++)
	{
		num_big++;
	}
	num_big--;
	order -= num_big * wBig;
	if(order % 2 == 0 && order != 0 && nSmall * wSmall >= order)
	{
		for (loop = 0; num_small * wSmall <= order; loop++)
		{
			num_small++;
		}
	}
	else if(order % 2 == 1)
		return num_small;		
	
	return --num_small;
}
