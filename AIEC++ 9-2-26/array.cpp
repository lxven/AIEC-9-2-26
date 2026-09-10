#include <iostream>
#include <string>
using namespace std;

int main()
{
	int scores[5] = { 10,20,30,40,50 };
	int values[4] = { 5,10,15,20 };
	int numbers[3] = { 7,14,21 };

	scores[0] = 10;
	scores[4] = 50;
	values[1] = 10;
	numbers[0] = 7;
	numbers[1] = 14;
	numbers[2] = 21;

	cout << " # " << scores[0] << endl;
	cout << " # " << scores[4] << endl;
	cout << " # " << values[1] << endl;
	cout << " # " << numbers[0] << endl;
	cout << " # " << numbers[1] << endl;
	cout << " # " << numbers[2] << endl;

	return 0;

}