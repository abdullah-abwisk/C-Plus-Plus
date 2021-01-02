#include <iostream>
#include <fstream>
#include <string.h>
#include <algorithm>

using namespace std;

void copyupper();

int main()
{
	string line = "Abdullah";
	fstream lower;
	lower.open("FIRST.txt", ios::out);
	if(lower)
	{
		lower << line;
		lower.close();
	}
	else
		cout << "Cannot open file in write mode\n";
	
	copyupper(); 
	
	return 0;
}

void copyupper()
{
	string line;
	fstream readlower;
	fstream writeupper;
	readlower.open("FIRST.txt", ios::in);
	readlower >> line;
	cout << line << endl;
	transform(line.begin(), line.end(), line.begin(), ::toupper);
	writeupper.open("SECOND.txt", ios::out);
	writeupper << line;
	writeupper.close();
	readlower.close();
	cout << line << endl;
}
