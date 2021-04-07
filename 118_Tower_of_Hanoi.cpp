#include <iostream>
#include <iomanip>
using namespace std;

void ToH(int n, char S, char D, char A)
{
		if(n == 1)
			cout << "Move 1 from " << S << " to " << D << endl;
		else
		{
			ToH(n - 1, S, A, D);
			cout << "Move disk " << n << " from " << S << " to " << D << endl;
			ToH(n - 1, A, D, S);
		}
}


int main()
{
	ToH(4, 's', 'd', 'a');

    return 0;
}
