#include <iostream>
#include "Head.h"
using namespace std;
void element(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 201 - 100;
	}
}
void print(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << "   ";
	}
	cout << endl;
}
void funct(int* arr, int size, int* sum, int* count) {
	for (int i = 0; i < size; i++)
	{
		if (*arr < 0) {
			*sum += *arr;
			(*count)++;
		}
		arr++;
	}
}