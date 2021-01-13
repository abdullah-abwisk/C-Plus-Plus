#include <iostream>
using namespace std;

void display(int marks[][5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Student " << i + 1 << ": " << endl;
		for (int j = 0; j < 5; j++)
			cout << "\tMarks in subject " << j + 1 << "= " << marks[i][j] << endl;
	}
}

int main()
{
	int marks[5][5];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			cout << "Enter Student " << i + 1 << ", marks " << j + 1 << ": ";
			cin >> marks[i][j];
		}
		
	display(marks);
	
	return 0;
}
