#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int playerLives = 3;
	const string gameTitle = "My Game";
	string playerName = "Hero";
	string playerName2 = "Hero";

	cout << gameTitle << endl;
	cout << "Player Lives:" << playerLives << endl;
	cout << "Player " << playerName << endl;
	cout << playerName.length() << endl;
	cout << playerName[0] << endl;

	if (playerName == playerName2)
	{
		cout << " Are Equal" << endl;
	}
	else
	{
		cout << "Are Not Equal" << endl;
	}

	for (char& letter : playerName)
	{
		letter = tolower(letter);
	}

	cout << playerName << endl;

	
	return 0;
		 
}
