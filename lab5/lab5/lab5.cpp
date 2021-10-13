﻿// lab5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "windows.h"
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y; /* координаты точки */
	while (true)
	{
		system("cls");
		/* ввод координат */
		printf("Введите координату x >");
		scanf("%lf", &x);
		printf("Введите координату y >");
		scanf("%lf", &y);
		/* вывод только что введенных значений */
		printf("x=%1.3lf;  y=%1.3lf\n", x, y);
		/* проверка условий */
		if ((y<=1) && (y>0) && (x>0)
			&& (x * x + y * y >= 1) && (x<=1))
			printf("Точка попадает в область\n");
		else printf("Точка не попадает в область\n");
		printf("Для продолжения нажмите любую клавишу");
		_getch();
	}

	return 0;
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