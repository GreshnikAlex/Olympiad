#include "pch.h"
#include "conio.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string symbols = "abcdefgh";
	int value1, value2, amount = 0;
	string str;

	cin >> str;

	value1 = symbols.find(str[0]) + 1; //Находим значение по вертикале
	value2 = (int)str[1] - 48; //Находим значение по горизонтали

	//Верх
	if (value1 - 2 > 0 && value2 - 1 > 0)//Лево
		amount++;
	if (value1 - 2 > 0 && value2 + 1 < 9)//Право
		amount++;
	
	//Право
	if (value1 - 1 > 0 && value2 + 2 < 9)//Верх
		amount++;
	if (value1 + 1 < 9 && value2 + 2 < 9)//Низ
		amount++;
	
	//Низ
	if (value1 + 2 < 9 && value2 - 1 > 0)//Лево
		amount++;
	if (value1 + 2 < 9 && value2 + 1 < 9)//Право
		amount++;
	
	//Лево
	if (value1 - 1 > 0 && value2 - 2 > 0)//Верх
		amount++;
	if (value1 + 1 < 9 && value2 - 2 > 0)//Низ
		amount++;
	
	cout << amount;
	_getch();
}