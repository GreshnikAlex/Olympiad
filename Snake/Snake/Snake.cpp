#include "pch.h"
#include "conio.h"
#include <iostream>

using namespace std;

int main()
{
	int N, R, C;

	cout << "Enter: ";
	cin >> N;

	R = N / 10;
	C = N % 10;

	if (R*C < 90)
	{

	}
	else
		cout << "Failed!!!";

	_getch();
}