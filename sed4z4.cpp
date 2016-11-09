// week4.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{ 
	int n, value;
	int bigMin = std::numeric_limits<int>::min();
	cout << "Kolko chisla shte vuvedete: ";
	cin >> n;
	if (n>0)
	{
		for (int i = 0; i<n; i++)
		{
			cin >> value;
			if (value > bigMin && value < 0)
				bigMin = value;
		}
	}
	if (bigMin == std::numeric_limits<int>::min())
		cout << "Ne bqha vuvedeni otricatelni chisla";
	else
		cout << bigMin;
	system("pause");
    return 0;
}

