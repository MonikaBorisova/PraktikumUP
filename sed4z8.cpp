// week4.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{ 
    int n, i, first = 0, second = 1,next;
	cin >> n;
	for (int i = 0;i <= n;i++)
	{
		cout << first << endl;
		next = first + second;
		first = second;
		second = next;
	}
	system("pause");
    return 0;
}

