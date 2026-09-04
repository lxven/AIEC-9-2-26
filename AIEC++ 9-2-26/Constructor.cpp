#include <iostream>
#include <string>
using namespace std;


class Student
{
private:
	string name;
	int studentID;
	double gpa;

public:
	// Default constructor
	Student()
	{
		name = "Unknown";
		studentID = 0;
		gpa = 0.0;

	}
	// Second constructor
	Student(string studentName, int id)
	{
		name = studentName;
		studentID = id;
		gpa = 0.0;
	}

	// Display student information
	void displayInfo()
	{
		cout << "Student Name: " << name << endl;
		cout << "Student ID: " << studentID << endl;
		cout << "GPA: " << gpa << endl;
	}

	int main()
	{
		Student student1;
		Student Student2("Lxven", 1234);

		cout << "Student 1:" << endl;
		student1.displayInfo();

		cout << "Sudent 2:" << endl;
		Student2.displayInfo();
	}
};