#include "Windows.h"
#include <iostream>
#include "Header.h"
using namespace std;
void Func(char* str1, char* str2, const int max_len)
{
	int k, t;
	while (true)
	{
		cout << "С какой позиции заменять" << endl;
		cin >> k;
		if (strl(str1) <= k) {
			cout << "Строка количественно не может быть меньше или равной вводимой позиции" << endl;
			system("pause");
			continue;
		}
		cout << "Задайте кол-во символов перекрытия" << endl;
		cin >> t;
		if (strl(str1) <= t) {
			cout << "Строка количественно не может быть меньше или равной символов перекрытия" << endl;
			system("pause");
			continue;
		}
		for (int i = 0; i < k; i++) str1++;
		for (int i = 0; i < t; i++) 
		{
			*str1 = *str2;
			str1++;
			str2++;

		}
		*str1 = '\0';
		break;
	}
}
int strl(const char* str)
{
	
		const char* st = str;
		//assert(str != NULL);
		//assert(st != NULL);
		while (*str != '\0')
		{
			str++;
		}
		return str - st;
}