// week4.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{

	int number;
	int proizvedenie = 1;
	int a;
	int sum = 0;
	cout << "Enter a number:" << endl;
	cin >> number;

	while (number > 0) {
		a = number % 10;
		number /= 10;
		proizvedenie *= a;
		sum += a;
	}

	
	if (proizvedenie >= 100 && proiz <= 999) {
		cout << "YES " << proizvedenie-sum << endl;
	}
	else {
		cout << "NO " << proizvedenie << endl;
	}
	system("pause");
    return 0;
}

