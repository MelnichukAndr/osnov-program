﻿// lab6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;

int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	long n;              /* параметр ряда */
	double dbln;         /* параметр ряда в форме с плавающей точкой */
	double sum = 0;        /* сумма членов ряда */
	double term;         /* значение текущего члена */
	const double eps = 0.000001;  /* предел точности */	          
	short k1 = 1;          /* pow(-1,n)*/
	  /* основной цикл; в модификациях вычисляются
		 следующие значения  pow(-1,n)*/
	for (n = 0; ; n++, k1 = -k1) {
		/* преобразование n в форму с плавающей точкой */
		dbln = n;
		/* вычисление очередного члена */
		term = k1 * (dbln + 1) / (dbln * dbln + 2 * dbln + 1 );
		/* проверка достижения предела точности */
		if (fabs(term) >= eps)
			/* если не достигнут - накопление суммы */
			sum += term;
		/* если достигнут - выход из цикла */
		else break;

		/* если 10 членов - вывод суммы */
		if (n == 9)
			printf("Сумма 10 членов ряда = %10.7lf\n", sum);
	}
	/* конец основного цикла */
	/* вывод окончательной суммы */
	printf("Полная сумма ряда = %10.7lf\n", sum);
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