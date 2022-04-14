#include <iostream>
#include "Header.h"
using namespace std;
void element(int* start_arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(start_arr + i) = rand() % 201 - 100;
	}
}
void print(int* start_arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << *(start_arr + i) << "   ";
	}
	cout << endl;
}
void funct(int* start_arr, int size, int sum, int count) {
	for (int i = 0; i < size; i++)
	{
		if (*(start_arr + i) < 0) {
			sum += *(start_arr + i);
			(count)++;
		}
		
	}
	cout << "Сумма отрицательных элементов: " << sum << endl;
	cout << "Кол-во отрицательных элементов: " << count << endl;
}