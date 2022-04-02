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
void sort(int* arr, int size) 
{
	int chet = 0;
	int nochet = 0;
	for (int i = 0; i < size; i++)
	{
		if ((*(arr + i) > 0) && (*(arr + i) % 2 == 0))
			chet++;
			
	}
	cout << "четные положительные  " << chet << "    ";
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		
		if (*(arr + i) % 2 == 0)
			cout << "";
		else
			if (*(arr + i) < 0)
			 nochet++;
		
			
	}
	cout << "нечетные отрецательные  " << nochet << "   ";
	cout << endl;
}

int get_size(int* arr, int size)
{
	int newsize = 0;
	for (int i = 0; i < size; i++)
	{
		if ((*(arr + i) < 0) && (*(arr + i) % 2 == 0))
			newsize++;
	}
	return newsize;
}

void second_Array(int* arr, int* arr2, int size)
{
	for (int i = 0, j = 0; i < size; i++)
	{
		if ((*(arr + i) < 0) && (*(arr + i) % 2 == 0))
		{
			*(arr2 + j) = *(arr + i);
			j++;
		}
	}
}