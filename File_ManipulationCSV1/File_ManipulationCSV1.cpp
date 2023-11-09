#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Date: 11/7/23

int main()
{
	// creates a csv file and takes user input to create an employee csv file
	string id;
	string full_name;
	string age;

	//the ios::app checks if the file already exists, if it does, then it adds onto it, 
	// but if it doesnt, then it creates a new file
	ofstream CSV_File("employees.csv");
	cout << "Employee Data Entry" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the information for Employee #" << i + 1 << endl;
		cout << "Enter their ID: ";
		cin >> id;
		cin.ignore();
		cout << "Enter their full name: ";
		getline(cin, full_name);
		cout << "Enter their age: ";
		cin >> age;
		CSV_File << id << ", " << full_name << ", " << age << endl;

	}
	CSV_File.close();
}
