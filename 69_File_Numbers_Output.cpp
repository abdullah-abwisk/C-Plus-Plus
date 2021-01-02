#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream numbers;
	numbers.open("NOTES.txt", ios::out);
	if(numbers)
	{
		for (int i = 1; i <= 100; i++)
		{
			numbers << i << "\n";
		}
		numbers.close();
	}
	else
		cout << "Failed to open file in write mode\n";
		
	cout << "Successfully written 1 to 100 in NOTES.txt\n";
	
	return 0;
}
