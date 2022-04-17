#include "windows.h"
#include <iostream>
#include "Header.h"

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	const int csize = 20;
	int sum = 0, count = 0;
	int size;
	cout << "Введите размер массива(до 20) -> ";
	cin >> size;
	if (size < 1 || size > 20) "Ошибка ", exit(0);
	int arr[csize];
	int* start_arr = arr;
	int a;
	cout << "Начальный массив: " << endl;
	element(start_arr, size);
	print(start_arr, size);
	while (true) {
		cout << "\n\n1 - Относительный адрес\n2 - Абсолютный адрес\n3 - Без использования адресации\n4 - Массив указателей\n5 - Указатель на указатель\n6 - В виде функции с параметрами указателями\n --> ";
		cin >> a;
		switch (a) {
		case 1:
			system("cls");
			start_arr = arr;
			print(start_arr, size);
			// Относительный адрес
			cout << endl << "Относительный адрес" << endl;
			sum = 0, count = 0;
			for (int i = 0; i < size; i++)
			{
				if (*(start_arr + i) < 0)
					sum += *(start_arr + i), count++;
			}
			cout << "Сумма отрицательных элементов: " << sum << endl;
			cout << "Кол-во отрицательных элементов: " << count << endl;
			break;
		case 2:
			system("cls");
			start_arr = arr;
			print(start_arr, size);
			// Абсолютный адрес
			cout << endl << "Абсолютный адрес" << endl;
			sum = 0, count = 0;
			for (int i = 0; i < size; i++, start_arr++)
			{
				if (*start_arr < 0)
					sum += *start_arr, count++;
				
			}
			cout << "Сумма отрицательных элементов: " << sum << endl;
			cout << "Кол-во отрицательных элементов: " << count << endl;
		case 3:
			system("cls");
			start_arr = arr;
			print(start_arr, size);
			// Без использования адресации
			cout << endl << "Без использования адресации: " << endl;
			sum = 0, count = 0;
			for (start_arr = arr; start_arr <arr + size; start_arr++)
			{
				if (*start_arr < 0)
					sum += *start_arr, count++;
			}
			cout << "Сумма отрицательных элементов: " << sum << endl;
			cout << "Кол-во отрицательных элементов: " << count << endl;
			break;
		case 4:
			system("cls");
			start_arr = arr;
			print(start_arr, size);
			// Массив указателей
			cout << endl << "Через массив указателей: " << endl;
			sum = 0, count = 0;
			int* p_arr[csize];
			for (int i = 0; i < size; i++)
			{
				p_arr[i] = &start_arr[i];
			}
			for (int i = 0; i < size; i++)
			{
				if (*p_arr[i] < 0)
					sum += (*p_arr[i]), count++;
			}
			cout << "Сумма отрицательных элементов: " << sum << endl;
			cout << "Кол-во отрицательных элементов: " << count << endl;
			break;
		case 5:
			system("cls");
			start_arr = arr;
			print(start_arr, size);
			//Указатель на указатель
			cout << endl << "Указатель на указатель" << endl;
			sum = 0, count = 0;
			int** pp;
			for (int i = 0; i < size; i++, start_arr++)
			{	
				pp = &start_arr;
				if (**pp < 0)
					sum += **pp, count++;
				
			}
			cout << "Сумма отрицательных элементов: " << sum << endl;
			cout << "Кол-во отрицательных элементов: " << count << endl;
			break;
		case 6:
			system("cls");
			start_arr = arr;
			print(start_arr, size);
			//В виде функции с параметрами указателями
			cout << endl << "В виде функции с параметрами указателями" << endl;
			sum = 0, count = 0;
			funct(start_arr, size, sum, count);
			
			break;
		case 0:
			break;
		default:
			system("cls");
			cout << "Ошибка" << endl;
			break;
		}
		if (a == 0) break;
	}

}