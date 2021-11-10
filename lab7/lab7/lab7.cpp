﻿// lab7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	short n;        /* параметр внешнего цикла */
	double x, y;    /* абсцисса и ордината графика */
	short h;        /* позиция точки на экране */
	float temp = 0;
	/* внешний цикл - для 5 периодов */
	for (n = 0; n < 5; n++) {
		/* вывод заголовка таблицы */
		printf("|   x   |      y     |\n");
		printf("|-------|------------|\n");
		/* внутренний цикл для одного периода */
		for (x = 0; x < 4; x += 0.25) {
			
			if (x < 1) y = 0;
			
			else if (x < 2) y =(x-2)*(x-2)-1;
			
			else if (x < 3) y = -1;

			else if (x < 4)  y = (x - 3) * (x - 3) - 1;

			
			printf("| %5.2lf | %10.7lf |", x + n * 4, y);
			
			h = (y + 1) * 6;			
			
			
			for (; h > 0; h--) printf(" ");
			printf("*\n");
		} 
	 
		printf("Нажмите клавишу Enter...");
		getchar();
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