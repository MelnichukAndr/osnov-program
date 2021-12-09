// lab9(a).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"

#include <time.h>
#include <iomanip>
#include <cstdlib >

using namespace std;


int main(void)
{
	setlocale(0, "rus");
	srand(time(0));
	const int N = 100, M = 100;
	int Ar[N][M];
	int str, col;
	int a;
	/* текущие индексы */
	while(true)
	{
		cout << "В чем состоит задача?" << endl;
		cout << "Задать матрицу и макс елемент переставить в начало(1)" << endl;
		cout << "Задать матрицу и мин елемент переставить в конец(2)" << endl;
		cout << "Выйти из программы (0)" << endl;
		cin >> a;

	
		if (a == 1)
		{
			cout << "Введите кол-во строк (1-100): ";
			cin >> str;
			if (str > 100 || str < 1)

			{
				cout << endl;
				cout << "Введите значение кол-во строк в диапозоне (1-100)";
				return 0;
			}

			cout << "Введите кол-во столбцов (1-100): ";
			cin >> col;
			if (col > 100 || col < 1)

			{
				cout << endl;
				cout << "Введите значение кол-во столбцов в диапозоне (1-100)";
				return 0;
			}



			for (int i = 0; i < str; i++)
			{
				if (i % str)
					cout << endl;

				for (int j = 0; j < col; j++)
				{
					Ar[i][j] = rand() % 100;
					cout << setw(3) << Ar[i][j];
				}
			}


			int  max;
			int r;
			for (int i = 0; i < col; i++)
			{
				max = 0;
				for (int j = 1; j < str; j++)
				{
					if (Ar[i][max] < Ar[i][j])

						max = j;

					
				}
				r = Ar[i][0];
				Ar[i][0] = Ar[i][max];
				Ar[i][max] = r;
			}
			cout << endl;
			cout << "Перераспределенная матрица" << endl;


			for (int i = 0; i < str; i++)
			{
				for (int j = 0; j < col/*-1*/; j++)
				{
					cout << setw(3) << Ar[i][j];
				}
				/*cout << setw(3) << Ar[i][col - 1] << endl;*/
				cout << endl;
			}
			cout << endl;
		}
		
			if (a == 2)
			{
				cout << "Введите кол-во строк (1-100): ";
				cin >> str;
				if (str > 100 || str < 1)

				{
					cout << endl;
					cout << "Введите значение кол-во строк в диапозоне (1-100)";
					return 0;
				}

				cout << "Введите кол-во столбцов (1-100): ";
				cin >> col;
				if (col > 100 || col < 1)

				{
					cout << endl;
					cout << "Введите значение кол-во столбцов в диапозоне (1-100)";
					return 0;
				}


				for (int i = 0; i < str; i++)
				{
					if (i % str)
						cout << endl;

					for (int j = 0; j < col; j++)
					{
						Ar[i][j] = rand() % 100;
						cout << setw(3) << Ar[i][j];
					}
					
				}
				int min;
				int c;
				for (int j = 0; j < col; j++)
				{
					min = 0;
					for (int i = 1; i < str; i++)
					{
						if (Ar[min][j] > Ar[i][j])
							min = i;


					}
					c = Ar[str-1][j];
					Ar[str-1][j] = Ar[min][j];
					Ar[min][j] = c;
				}


				cout << endl;
				cout << "Перераспределенная матрица" << endl;


				for (int i = 0; i < str; i++)
				{
					for (int j = 0; j < col/*-1*/; j++)
					{
						cout << setw(3) << Ar[i][j];
					}
					/*cout << setw(3) << Ar[i][col - 1] << endl;*/
					cout << endl;
				}
				cout << endl;
			
			}
			
				if (a == 0)
				{
					
						cout << endl;
						cout << "Выход из программы, нажмите любую клавишу..." << endl;
						cout << endl << endl;
						return 0;
					
				}
	}

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
