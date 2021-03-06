#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	system("color F0");
	struct Name
	{
		char surname[21];
		char name[15];
		char second[21];
	};
	struct Date
	{
		int day;
		int month;
		int year;
	};
	struct Employee
	{
		Name n;
		char position[21];
		float salary;
		Date bday;
	};
	int n, i, q;
	do {
		cout << "Input the quantity of employees of the company: ";
		cin >> n;
		system("cls");
		Employee* empl = new Employee[n];
		for (i = 0; i < n; i++)
		{
			cout << i + 1 << ")" << endl;
			cout << "Input the surname of the " << i + 1 << " employee: " << endl;
			cin >> empl[i].n.surname;
			cout << "Input the name of the " << i + 1 << " employee: " << endl;
			cin >> empl[i].n.name;
			cout << "Input the second name of the " << i + 1 << " employee: " << endl;
			cin >> empl[i].n.second;
			cout << "Input the day of birth of the " << i + 1 << " eployee: " << endl;
			cin >> empl[i].bday.day;
			while ((empl[i].bday.day < 1) || (empl[i].bday.day > 31))
			{
				while (!(empl[i].bday.day))
				{
					cout << "Ты даун";
					cin >> empl[i].bday.day;
				}
				cout << "Not right significance of the day. Try again. The significance must be not more than 31. ";
				cin >> empl[i].bday.day;
			}
			cout << "Input the month of birth of the " << i + 1 << " eployee: " << endl;
			cin >> empl[i].bday.month;
			while ((empl[i].bday.month < 1) || (empl[i].bday.month > 12))
			{
				cout << "Not right significance of the month. Try again. The significance must be not more than 12. ";
				cin >> empl[i].bday.month;

			}
			while ((empl[i].bday.month == 2) & (empl[i].bday.day > 28))
			{
				cout << "It can't be more than 28 days in February. Please input significances again. " << endl;
				cout << "The day of birth: ";
				cin >> empl[i].bday.day;
				cout << "The month of birth: ";
				cin >> empl[i].bday.month;
			}
			cout << "Input the year of birth of the " << i + 1 << " employee: " << endl;
			cin >> empl[i].bday.year;
			while ((empl[i].bday.year < 1920) || (empl[i].bday.year > 2003))
			{
				cout << "Not right significance of the year. Try again. The significance must be not more than 2003, because employees can't be younger than 16 y.o. ";
				cin >> empl[i].bday.year;
			}

			cout << "Input the position of the " << i + 1 << " employee: " << endl;
			cin >> empl[i].position;
			cout << "Input the salary of the " << i + 1 << " employee in hryvnia: ";
			cin >> empl[i].salary;
			while (empl[i].salary < 0)
			{
				cout << "The salary can't be under 0. Try again. ";
				cin >> empl[i].salary;
			}

			system("cls");
		}
		int m;
		cout << "Input the month in which employees information about you want to see were born: ";
		cin >> m;
		while ((m > 12) || (m < 1))
		{
			cout << "The number of month can't be more than 12. Try again. ";
			cin >> m;
		}
		for (i = 0; i < n; i++)
		{
			if (m == empl[i].bday.month)
			{
				cout << i + 1 << ") " << empl[i].n.surname << " " << empl[i].n.name << " " << empl[i].n.second << endl;
				cout << empl[i].bday.day << "." << empl[i].bday.month << "." << empl[i].bday.year << endl;
				cout << "Position: " << empl[i].position << endl;
				cout << "Salary: " << empl[i].salary << " hryvnia" << endl;

			}
		}
		system("pause");
		system("cls");
		cout << "Do you want to try again? Input '1' if 'yes' and '0' if 'no'. ";
		cin >> q;
	} while (q == 1);
	system("pause");
}
