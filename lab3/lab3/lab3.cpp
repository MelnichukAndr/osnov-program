﻿// lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <math.h>
int main(void) {
	/* параметры, которые вводятся */
	double x, y;
	/* параметры, которые задаются в программе */
	double a = 12.5,
		double t1, t2;   /* результаты */
	short ax;       /* рабочая переменная */

	printf("Введите x, y >");
	scanf("%lf %lf", &x, &y);

	ax = pow(a, 2);
	t1 = 1 / (4 * ax * pow(x, 2)) + 1 / (2 * ax * ax * x) + 1 / (2 * pow(ax, 3)) * log(y * y / x);

	ax = a * x;
	t2 = x / 2 + (1 / (2 * a)) * log(sin(ax) + cos(ax));

	printf("t1 = %lg\n", t1);
	printf("t2 = %lg\n", t2);
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
