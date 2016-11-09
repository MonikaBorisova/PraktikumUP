// week4.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	
	int n;
	cout << "Vuvedete chislo n";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i*i + 3 * i << " ";
	}
	system("pause");
    return 0;
}

