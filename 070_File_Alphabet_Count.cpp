#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void countchars();

int main()
{
	string output = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
	fstream strwrite;
	strwrite.open("OUT.txt", ios::out);
	if(strwrite)
	{
		strwrite << output;
		cout << "Successfully outputted string to OUT.txt\n";
		strwrite.close();
	}
	else
		cout << "Failed to open file in write mode\n";
	
	countchars();	
	
	return 0;
}

void countchars()
{
	int count = 0;
	char character;
	fstream strread;
	strread.open("OUT.txt", ios::in);
	if(strread)
	{
		while(! strread.eof())
		{
			strread >> character;
			count++;
		}
		strread.close();
	}
	else
		cout << "Cannot open file for read\n";
	
	cout << count << endl;	
}
