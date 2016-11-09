// week5.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
    int x, y;
	int sum = 1;
	cout << "Vuvedete 2 celi chisla." << endl;
	cin >> x >> y;

	while (x <= y)
	{
		sum *= x;
		x++;
	}
	cout << "Proizvedenieto im e:" << sum << endl;
	system("pause");
    return 0;
}

