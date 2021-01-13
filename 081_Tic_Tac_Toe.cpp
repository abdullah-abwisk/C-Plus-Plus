#include <iostream>
using namespace std;
void coutgrid(char []);
#define max_turns 9
int main()
{
	char playagain;
	int position, turns;
	cout << "Welcome to Tic-Tac-Toe by Abdullah Khan\n\n";
	do
	{
		char array[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
		coutgrid(array);
		turns = 0;
		while (turns < max_turns)
		{
			cout << "\n\nPlayer X, please enter your position: ";
			cin >> position;
			array[position - 1] = 'X';
			turns++;
			coutgrid(array);
			if ((array[0] == 'X' && array[1] == 'X' && array[2] == 'X') || (array[3] == 'X' && array[4] == 'X' && array[5] == 'X') || (array[6] == 'X' && array[7] == 'X' && array[8] == 'X') || (array[0] == 'X' && array[3] == 'X' && array[6] == 'X') || (array[1] == 'X' && array[4] == 'X' && array[7] == 'X') || (array[2] == 'X' && array[5] == 'X' && array[8] == 'X') || (array[0] == 'X' && array[4] == 'X' && array[8] == 'X') || (array[2] == 'X' && array[4] == 'X' && array[6] == 'X'))
			{
				cout << "\n\nX is the winner.\n\n";
				break;
			}
			if (turns < max_turns)
			{
				cout << "\n\nPlayer O, please enter your position: ";
				cin >> position;
				array[position - 1] = 'O';
				turns++;
				coutgrid(array);
			}
			if ((array[0] == 'O' && array[1] == 'O' && array[2] == 'O') || (array[3] == 'O' && array[4] == 'O' && array[5] == 'O') || (array[6] == 'O' && array[7] == 'O' && array[8] == 'O') || (array[0] == 'O' && array[3] == 'O' && array[6] == 'O') || (array[1] == 'O' && array[4] == 'O' && array[7] == 'O') || (array[2] == 'O' && array[5] == 'O' && array[8] == 'O') || (array[0] == 'O' && array[4] == 'O' && array[8] == 'O') || (array[2] == 'O' && array[4] == 'O' && array[6] == 'O'))
			{
				cout << "\n\nO is the winner.\n\n";
				coutgrid(array);
				break;
			}
			if(turns == max_turns)
			{
				cout << "\n\nThe match is drawn\n\n";
				coutgrid(array);
				break;
			}
		}
		cout << "\n\nDo you want to play again? (Press y for yes and n for no): ";
		cin >> playagain;
	} while (playagain == 'y');
	return 0;
}
void coutgrid(char array[9])
{
	cout << "\n|'" << array[0] << "'  '" << array[1] << "'  '" << array[2] << "'|\n|'" << array[3] << "'  '" << array[4] << "'  '" << array[5] << "'|\n|'" << array[6] << "'  '" << array[7] << "'  '" << array[8] << "'|\n";
}
