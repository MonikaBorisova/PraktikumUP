// week4.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	/*�� �� ������ ��������, ����� ������� �� ������������ ��� ���� ����� a, b � c.
���������� �� ��������� ���� ���������� ���������� ��� ������ a, b � c � ���
���������� �� �� �������� ����� ��: ������������, ����������� ��� ������������.
	*/
	double a, b, c;
	cout << "Vuvedete tri celi chisla."<<endl;
	cin >> a >> b >> c;
	if (a + b > c&&a + c > b&&b + c > a)
	{
		if (a == b&&b == c)
		{
			cout << "Ravnostranen." << endl;
		}
		else if (a == b&&b != c || a == c&&c != b || b == c&&c != a)
		{
			cout << "Ravnobedren" << endl;
		}
		else
			cout << "Raznostranen." << endl;
	}
	else
		cout << "Nqma takuv triugulnik"<<endl;
	system("pause");
    return 0;
}

