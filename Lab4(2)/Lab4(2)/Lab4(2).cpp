#include "windows.h"
#include <iostream>
#include "Head.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int size, nsize;
	cout << "Введите размер массива (до 30-ти элементов) -> ";
	cin >> size;
	int* arr1 = new int[size];
	int choice;
	if (size < 1 || size > 30) cout << "Ошибка" << endl, exit(0);
	cout << "Начальный массив: " << endl;
	element(arr1, size);
	print(arr1, size);
	nsize = get_size(arr1, size);
	int* arr2 = new int[nsize];
	while (true) {
		cout << "1 - Напечатать массив \n2 - Отсортировать массив\n3 - Напечатать второй массив\n4 - Выйти\n -->";
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			cout << "Начальный массив: " << endl;
			print(arr1, size);
			break;
		case 2:
			system("cls");
			cout << "Отсортированный массив: " << endl;
			sort(arr1, arr2, size);
			
			break;
		case 3:
			system("cls");
			if (nsize < 1) { cout << "Нет положительных элементов "; break; }
			sort(arr1, arr2, size);
			cout << "Второй массив: " << endl;
			print(arr2, nsize);
		case 4:
			break;
		default:
			system("cls");
			cout << "Error";
			break;
		}
		if (choice == 4)break;
	}
	delete[] arr1;
	delete[] arr2;
}