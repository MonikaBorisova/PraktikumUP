// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Vuvedete chislo mejdy 0 i 10" << endl;
	cin >> n;
	if (n > 0 && n < 10)
	{
		while (n <= 100)
		{
			if (n % 6 == 0) cout << n << " ";
			n++;

		}
	}
	else
		cout << "Vuvedi drygo chislo" << endl;

    return 0;
}

