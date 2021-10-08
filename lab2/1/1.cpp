﻿

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	char name1[11] = "OS/2", name2[11] = "Windows/NT", name3[11] = "SCO/Unix", 
		 name4[11] = "DB2", name5[11] = "SQLServer", name6[11] = "Oracle"; 
	int cnt1 = 130, cnt2 = 230, cnt3 = 110,
		cnt4=22, cnt5=24, cnt6=48,
		cnt7=3343, cnt8= 2685, cnt9= 3745;
	
	/* Введение фактических данных*/
	printf("1. введите:  операционную систему,  субд,  мин.объем внешней памяти (mb),  мин.объем оперативной памяти (mb) >");
	scanf("%s %s %d %d %d", name1, name4, &cnt1, &cnt4, &cnt7);
	printf("2. введите: операционную систему,  субд,  мин.объем внешней памяти (mb),  мин.объем оперативной памяти (mb) >");
	scanf("%s %s %d %d %d", name2, name5, &cnt2, &cnt5, &cnt8);
	printf("3. введите: операционную систему,  субд,  мин.объем внешней памяти (mb),  мин.объем оперативной памяти (mb) >");
	scanf("%s %s %d %d %d", name3, name6, &cnt3, &cnt6, &cnt9);

	/* Вывод таблицы */
	/* вывод заголовков */
	printf("---------------------------------------------------------------------------------------------------------------------------------\n");
	printf("|Конфигурация програмных средств информационных систем                                                                          |\n");
	printf("|-------------------------------------------------------------------------------------------------------------------------------|\n");
	printf("| Операционная система |  С У Б Д  | Мин.объем внешней памяти (MB)| Мин.объем оперативной памяти (MB)| Приблизительная цена ($) |\n");
	printf("|----------------------|-----------|------------------------------|----------------------------------|--------------------------|\n");
	/* вывод строк фактических данных */
	printf("| %20s | %9s | %28d | %32d | %24d |\n", name1, name4, cnt1, cnt4, cnt7);
	printf("| %20s | %9s | %28d | %32d | %24d |\n", name2, name5, cnt2, cnt5, cnt8);
	printf("| %20s | %9s | %28d | %32d | %24d |\n", name3, name6, cnt3, cnt6, cnt9);
	/* вывод примечаний */
	printf("|-------------------------------------------------------------------------------------------------------------------------------|\n");
	printf("| Примечание: принималась цена лицензии на 8 пользователей                                                                      |\n");
	printf("---------------------------------------------------------------------------------------------------------------------------------\n");
	return 0;
}
