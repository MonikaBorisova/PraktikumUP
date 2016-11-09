// week5.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	cout << "Vuvedete chislo ";
	cin >> n;
	while (n >= 0)
	{
		sum += n;
		n--;
	}
	cout << sum;
	system("pause");
    return 0;

}

