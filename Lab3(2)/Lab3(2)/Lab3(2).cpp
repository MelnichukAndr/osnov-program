#include "windows.h"
#include <iostream>
#include "Head.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	const int csize = 20;
	int nsize, size;
	int arr[csize];
	int arr2[csize];
	cout << "Введите размер массива (до 20-ти элементов) -> ";
	cin >> size;
	if (size < 1 || size >20) cout << "Ошибка" << endl, exit(0);
	cout << "Начальный массив: " << endl;
	element(arr, size);
	print(arr, size);
	sort(arr, size);
	nsize = get_size(arr, size);
	if (nsize < 1) cout << "Нет отрецательных четных элементов ", exit(0);
	second_Array(arr, arr2, size);
	cout << "Второй массив: " << endl;
	print(arr2, nsize);
	cout << endl << endl;
}
