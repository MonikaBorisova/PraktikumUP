// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int p, q;
	bool isPrime;
	cout << "Vuvedi dve celi chisla , kato purvoto e po-malko ot vtoroto";
	cin >> p >> q;
	if (p < q)
	{
		for (p; p <= q; p++)
		{
			isPrime = true;
		
		for (int i = 2; i < p && isPrime; i++)
		{
			isPrime = p%i;
		}
		if (isPrime)
			cout << p << " ";
	}
}
	else
		cout << " Vuvedi drygo chislo";
    return 0;
}

