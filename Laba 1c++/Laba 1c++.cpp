#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{

	struct employee
	{
		string SecondName;
		string Name;
		string Patronymic;
		string Rank;
		unsigned int  Payday;
		unsigned short date[3];
	};

	const int arrSize =  2;
	employee mass[arrSize];

	cout << "Введите информацию о работниках" << endl;

	for(int i=0;i<arrSize;i++)
	{ 
		cout << "Input Second Name" << endl;
		cin >> mass[i].SecondName;
		cout << "Input  Name" << endl;
		cin >> mass[i].Name;
		cout << "Input Patronomic" << endl;
		cin >> mass[i].Patronymic;
		cout << "Input Rank" << endl;
		cin >> mass[i].Rank;
		cout << "Input Payday" << endl;
		cin >> mass[i].Payday;
		cout << "Input number";
		cin >> mass[i].date[0];
		cout << "Input month";
		cin >> mass[i].date[1];
		cout << "Input year";
		cin >> mass[i].date[2];
	
	
	
	
	}
	for (int i = 0; i < arrSize; i++)
	{
		if (mass[i].date[1] == 5)
		{
			cout << mass[i].SecondName << endl;
			cout << mass[i].Name << endl;
			cout << mass[i].Patronymic << endl;
			cout << mass[i].Rank << endl;
			cout << mass[i].Payday << endl;
			cout << mass[i].date[0] + "." << mass[i].date[1] + "." + mass[i].date[2] << endl;
		}
	}
}