// week4.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()

	int num;
	cout << "Enter a number." << endl;
	cin >> num;
	if (num >= 5 && num <= 20)
	{
		switch (num % 2 == 0)
		{
		case 0:
			cout << "Odd" << endl;
			break;
		case 1:
			cout << "Even" << endl;
			break;
		}
		system("pause");
	}
    return 0;
}

