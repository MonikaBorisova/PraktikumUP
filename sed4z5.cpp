// week4.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
    int n;
	cin >> n;
	int fact = 1;
	for (int i = 1;i <= n;i++)
	{
		fact *= i;
	}
	cout << fact << endl;
	system("pause");
    return 0;
}

