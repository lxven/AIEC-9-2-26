#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int playerLives = 3;
	const string gameTitle = "My Game";
	string playerName = "Hero";

	cout << gameTitle << endl;
	cout << "Player Lives:" << playerLives << endl;
	cout << "Player " << playerName << endl;
	cout << playerName.length() << endl;
	cout << playerName[0] << endl;

	
	return 0;
		 
}
