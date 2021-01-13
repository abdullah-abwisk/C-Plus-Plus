#include <iostream>
#include <string>
using namespace std;

string winner(string, string);

int main()
{
	string playerone, playertwo;
	cout << "Enter player 1:";
	cin >> playerone;
	cout << "Enter player 2:";
	cin >> playertwo;
	
	cout << winner(playerone, playertwo) << endl;
	
	return 0;	
}

string winner(string playerone, string playertwo)
{
	if (playerone == "rock" && playertwo == "paper")
		return "Player 2 wins";
	if (playerone == "paper" && playertwo == "rock")
		return "Player 1 wins";
	if (playerone == "scissor" && playertwo == "rock")
		return "Player 2 wins";
	if (playerone == "rock" && playertwo == "scissor")
		return "Player 1 wins";	
	if (playerone == "paper" && playertwo == "scissor")
		return "Player 2 wins";
	if (playerone == "scissor" && playertwo == "paper")
		return "Player 1 wins";	
	if (playerone == playertwo)
		return "No winner";		
}
