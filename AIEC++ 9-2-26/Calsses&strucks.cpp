#include <iostream>
#include <string>
using namespace std;

struct gameCharacter
{
	string name;
	int health = 0;
	int level = 0;

};

class BankAccount
{
private:
	double balance = 0;
	int accountNumber = 0;

public:
	void deposit(double amount)
	{
		balance += amount;
	}
	double getBalance()
	{
		return balance;
	}
	void setAccountNumber(int number)
	{
		accountNumber = number;
	}
};

int main()
{
	gameCharacter character;
	character.name = "Lxven";
	character.health = 100;
	character.level = 10;
	 
	cout << "Character Name: " << character.name << endl;
	cout << "Health: " << character.health << endl;
	cout << "level:  " << character.level << endl;

	BankAccount account;

	account.setAccountNumber(1234);

	account.deposit(200);
	account.deposit(75);

	cout << "account Balance: $" << account.getBalance() << endl;

	return 0;
}