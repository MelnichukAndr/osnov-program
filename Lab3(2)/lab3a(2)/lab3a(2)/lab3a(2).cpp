#include "windows.h"
#include <iostream>
#include "Head.h"

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	const int csize=20;
	int* sum = 0, count = 0;
	cout << "Введите размер массива(до 20) -> ";
	cin >> size;
	if (size < 1 || size > 20) "Ошибка ", exit(0);
	int* arr[csize];
	int* start_arr = arr;
	int a;
	cout << "Начальный массив: " << endl;
	element(arr, size);
	print(arr, size);
	while (true) {
		cout << "\n\n1 - Относительный адрес\n2 - Абсолютный адрес\n3 - Без использования адресации\n4 - Массив указателей\n5 - Указатель на указатель\n6 - В виде функции с параметрами указателями\n --> ";
		cin >> a;
		switch (a) {
		case 1:
			system("cls");
			arr = start_arr;
			print(arr, size);
			// Относительный адрес
			cout << endl << "Относительный адрес" << endl;
			sum = 0, count = 0;
			for (int i = 0; i < size; i++)
			{
				if (*(arr + i) < 0)
					sum += *(arr + i), count++;
			}
			cout << "Сумма отрицательных элементов: " << sum << endl;
			cout << "Кол-во отрицательных элементов: " << count << endl;
			break;
		case 2:
			system("cls");
			arr = start_arr;
			print(arr, size);
			// Абсолютный адрес
			cout << endl << "Абсолютный адрес" << endl;
			sum = 0, count = 0;
			for (int i = 0; i < size; i++)
			{
				if (*arr < 0)
					sum += *arr, count++;
				arr++;
			}
			cout << "Сумма отрицательных элементов: " << sum << endl;
			cout << "Кол-во отрицательных элементов: " << count << endl;
		case 3:
			system("cls");
			arr = start_arr;
			print(arr, size);
			// Без использования адресации
			cout << endl << "Без использования адресации: " << endl;
			sum = 0, count = 0;
			for (arr = start_arr; arr < start_arr + size; arr++)
			{
				if (*arr < 0)
					sum += *arr, count++;
			}
			cout << "Сумма отрицательных элементов: " << sum << endl;
			cout << "Кол-во отрицательных элементов: " << count << endl;
			break;
		case 4:
			system("cls");
			arr = start_arr;
			print(arr, size);
			// Массив указателей
			cout << endl << "Через массив указателей: " << endl;
			sum = 0, count = 0;
			int* p_arr[SIZE];
			for (int i = 0; i < size; i++)
			{
				p_arr[i] = &arr[i];
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
			arr = start_arr;
			print(arr, size);
			//Указатель на указатель
			cout << endl << "Указатель на указатель" << endl;
			sum = 0, count = 0;
			int** pp;
			for (int i = 0; i < size; i++)
			{
				pp = &arr;
				if (**pp < 0)
					sum += **pp, count++;
				arr++;
			}
			cout << "Сумма отрицательных элементов: " << sum << endl;
			cout << "Кол-во отрицательных элементов: " << count << endl;
			break;
		case 6:
			system("cls");
			arr = start_arr;
			print(arr, size);
			//В виде функции с параметрами указателями
			cout << endl << "В виде функции с параметрами указателями" << endl;
			sum = 0, count = 0;
			funct(arr, size, &sum, &count);
			cout << "Сумма отрицательных элементов: " << sum << endl;
			cout << "Кол-во отрицательных элементов: " << count << endl;
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
	arr = start_arr;
	delete[] arr;
}