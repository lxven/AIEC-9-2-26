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

