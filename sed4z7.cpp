// week4.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	char x, y;
	int n;
	cout << "Vuvedi dva simvola:";
	cin >> x >> y;
	cout << "Vuvedi broi reda:";
	cin >> n;
	for (int i = 1; i<n; i++)
	{
		for (int j = 0; j<i; j++)
		{
			cout << x;
		}
		for (int j = n; j>i; j--)
		{
			cout << y;
		}
		cout << " " << endl;
	}
	system("pause");
    return 0;
}

