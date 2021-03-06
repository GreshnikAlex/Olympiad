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
		int Z = 10;

		//Создаём матрицу
		int **table = new int *[R];
		for (int i = 0; i < R; i++)
			table[i] = new int[C];

		//Заполняю матрицу значениями
		for (int i = 0; i < C; i++)
		{
			for (int j = 0; j < R; j++)
			{
				if (i % 2 == 0)
				{
					table[j][i] = Z;
					Z++;
				}
				else
				{
					if (j == 0)
						Z += R - 1;

					table[j][i] = Z;

					if (j < R - 1)
						Z--;
					else
						Z += R;
				}
			}
		}

		//Вывод матрицы на экран
		cout << endl;
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
				cout << table[i][j] << " ";

			cout << endl;
		}

		//Удаление матрицы из памяти
		for (int i = 0; i < R; i++)
			delete table[i];

		delete[]table;
	}
	else
		cout << "Failed!!!";

	_getch();
}