﻿// lab6(b).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double k = 0.0;
    int c = 0;
    int j = 0;
    int i = 0;
    while (k < 10)
        {
            srand(time(0));
            int a = rand() % 10;
            int b = rand() % 10;
            k = k + 1;
            printf("решите пример\n");
            j = a * b;
            printf("%1d", a); printf(" * "); printf("%1d", b); printf(" = "); scanf("%3d", &c);
            if (j == c)
                {
                    printf("паравильное решение\n");
                    i = i + 1;
                }
            else
                {
                    printf("непаравильное решение\n");
                    printf("паравильное решение %3d\n",j);
                }
        }
        printf("ваша оценка %d\n\n\n\n\n\n",i);
           
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