#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void countnotA()
{
	int count = 0;
	char character[50];
	fstream input;
	input.open("STORY.txt", ios::in);
	if(input)
	{
		while(! input.eof())
		{
			input.getline(character, 50);
			if(character[0] != 'A')
				count++;	
		}
		input.close();
	}
	else
		cout << "Unable to open file for write\n";
		
	cout << count << endl;	
}

int main()
{
	string firstline = "The rose is red.", secondline = "A girl is playing there.", thirdline = "There is a playground.", fourthline = "An aeroplane is in the sky.", fifthline = "Numbers are not allowed in the password.";
	fstream output;
	output.open("STORY.txt", ios::out);
	if(output)
	{
		output << firstline << endl;
		output << secondline << endl;
		output << thirdline << endl;
		output << fourthline << endl;
		output << fifthline;
		output.close();
	}
	else
		cout << "Unable to open file for write\n";
		
	countnotA();		
		
	return 0;
}
