#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "PhoneBook.h"
using namespace std;


int main()
{
	vector <Customer>vc1;
	vector <Customer>::iterator itr1;
	char ch = '\0';
	int s = 0;//search variable
	int p = 0;
	int u = 0;
	int swVar = 0;
	do
	{
		Customer c;

		c.AddCustomer();
		c.DisplayCustomer();
		vc1.push_back(c);
		cout << endl;
		//cout << vc1.capacity();
		cout << "\n----------------------------------------";
		cout << "\nPrint to file? 1/0 : ";
		cin >> p;
		
		if (p == 1)
		{
			c.PrintToFile(vc1 );
		}

		cout << "\nSearch in file? 1/0 : ";
		cin >> s;

		if (s == 1)
		{
			c.SearchCustomer(vc1);
		}

		cout << "Update in List 1/0??";
		cin >> u;
		if (u == 1)
		{
			c.UpdateCustomer(vc1);
		}
		
		cout << "\nAdd new Customer again? Press y to continue" << endl;
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');
	cout << "\nPopping Data...........";

	
	





	system("pause");
	return 0;
}