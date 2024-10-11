#include <conio.h>
#include <iostream>
#include <vector>

using namespace std;

struct Employee {
	int ID = 0;
	string FirstName;
	string LastName;
	float HoursWorked = 0.0f;
	float HourlyRate = 0.0f;
};

int main()
{
	vector<Employee> employees;
	cout << "Enter the number of employees: \n";
	int numEmp;
	cin >> numEmp;
	employees.resize(numEmp);
	for (int i = 0; i < numEmp; i++)
	{
		cout << "Enter ID for Employee " << i + 1 << ": \n";
		cin >> employees[i].ID;
		cout << "Enter first name for Employee " << i + 1 << ": \n";
		cin >> employees[i].FirstName;
		cout << "Enter last name for Employee " << i + 1 << ": \n";
		cin >> employees[i].LastName;
		cout << "Enter hours worked for Employee " << i + 1 << ": \n";
		cin >> employees[i].HoursWorked;
		cout << "Enter per hour rate for Employee " << i + 1 << ": \n";
		cin >> employees[i].HourlyRate;

	}

	cout << "Pay report \n\n ----------\n\n";
	float total = 0;
	for (int i = 0; i < numEmp; i++)
	{
		float payout = employees[i].HoursWorked * employees[i].HourlyRate; \
			cout << employees[i].ID << " . " << employees[i].FirstName << " " << employees[i].LastName << " worked " << employees[i].HoursWorked << " hours at " << employees[i].HourlyRate << "$ per hour and earned " << payout << " this week.\n\n";
		total += payout;
	}

	cout << "Total payout for all employees: " << total << "\n";

	(void)_getch();


	return 0;
}
