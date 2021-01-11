#include <iostream>
using namespace std;

bool isPrime(int);
void goldbachConjecture(int);

int main()
{
	int n;
	cout << "Enter an even number above 2: ";
	cin >> n;
	goldbachConjecture(n);
}

void goldbachConjecture(int n)
{
  if (n < 2 || n % 2) 
  	cout << "{}";
	for (int i = 2; i <= n / 2; i++)
		if (isPrime(i) && isPrime(n - i))
			cout << "{" << i << "," << n - i << "}";
}

bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false;
    return true; 
} 
