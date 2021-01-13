#include <iostream>
using namespace std;

int main()
{
	char email[50];
	int atlocation;
	bool before = false, at = false, dotafterat = false, textafterat = false;
	cout << "Enter a valid email address: ";
	cin >> email;
	if (email[0] != '@' && email[0] != '.')
	{
		before = true;
		for (int i = 1; email[i] != '\0'; i++)
		{
			if (email[i] == '@')
			{
				atlocation = i;
				at = true;
			}
		}
		
		if (email[atlocation + 1] != '.')
			{
				textafterat = true;
			}
		
		for (int i = atlocation + 2; email[i] != '\0'; i++)
		{
			if (email[i] == '.' && email[i + 1] != '\0')
			{
				dotafterat = true;
			}
		}
	}
		
	if (before == true && at == true && dotafterat == true && textafterat == true)
		cout << "Valid mail address entered\n";
	else
		cout << "Invalid mail entered\n";
		
				
	return 0;
}
