#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

void count_digit_alphabet_spaces(char [], string);

int main()
{
    char str[150];
    string string_input;
	cout << "Enter the string : ";
	getline(cin,string_input); 
	fstream str_input_write;
	str_input_write.open("Count.txt" , ios::out);
	if(str_input_write)
	{
		str_input_write << str;
		str_input_write.close();
	}
	else
	{
		cout << "Error";
	}
	strcpy(str, string_input.c_str());
	
	count_digit_alphabet_spaces(str, string_input);
	
    return 0;
}

void count_digit_alphabet_spaces(char str[], string string_input)
{
	int cntr_alphabets = 0,cntr_digits = 0,cntr_spaces = 0;
//	string str;
	fstream str_input_read;
	str_input_read.open("Count.txt" , ios::in);
	for(int i = 0; str[i] != '\0'; i++)
		str_input_read >> str[i];
	cout << "read sucessfully";
	str_input_read.close();
	
	for(int i=0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
		{
			cntr_spaces++;
		}
		else if((str[i] >= 'a' && str[i] <='z') || (str[i] >='A' && str[i] <='Z'))
		{
			cntr_alphabets++;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			cntr_digits++;
		}
	}
	
	fstream write_count;
	write_count.open("Count.txt" , ios::out);
	write_count << "The string is "<<str<<"\nThe number of Digits are "<<cntr_digits <<"\nThe number of alphabets are "<<cntr_alphabets<<"\nThe number of spaces are "<<cntr_spaces<<endl;
	write_count.close();
	
}
