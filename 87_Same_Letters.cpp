#include<iostream>
using namespace std;

int word_count(char word_1[], char word_2[]);

int main()
{
	int words_same;
	char word_1[20], word_2[20];
	cout << "\nEnter the First Word : ";
	cin >> word_1;
	cout << "\nEnter the Second Word : ";
	cin >> word_2;
	words_same = word_count(word_1, word_2);
	cout << "\nThe amount of Letters Same are : " << words_same;
	return 0;
}
int word_count(char word_1[], char word_2[])
{
	int words_same = 0, already_matched = 0, used, used_count = 0;
	bool matching = false;
	for(int i = 0; word_1[i] != '\0' ; i++)
	{
		
		for(int j = 0 ; word_2[j] != '\0' ; j++)
		{
			if(word_1[i] == word_2[j])
			{
				words_same++;
				if(used_count < 1)
				{
					used = word_1[i];
					used_count++;
				}
				break;
			}
		}
		if (used == word_1[i])
			already_matched++;
		continue;	
	}

	return words_same - already_matched;
}
