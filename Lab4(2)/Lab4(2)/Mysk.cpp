#include <iostream>
#include "Head.h"
using namespace std;
void element(int* arr1, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr1 + i) = rand() % 201 - 100;
	}
}
void print(int* arr1, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << *(arr1 + i) << "   ";
	}
	cout << endl;

}
void sort(int* arr1, int* arr2, int size)
{
	
	int chet = 0;
	int nochet = 0;
	for (int i = 0; i < size; i++)
	{
		if ((*(arr1 + i) > 0) && (*(arr1 + i) % 2 == 0))
			chet++;

	}
	cout << "четные положительные  " << chet << "    ";
	cout << endl;
	for (int i = 0; i < size; i++)
	{

		if (*(arr1 + i) % 2 == 0)
			cout << "";
		else
			if (*(arr1 + i) < 0)
				nochet++;


	}
	cout << "нечетные отрецательные  " << nochet << "   ";
	cout << endl;
	

	for (int i = 0, j = 0; i < size; i++)
	{
		if ((*(arr1 + i) < 0) && (*(arr1 + i) % 2 == 0))
		{
			*(arr2 + j) = *(arr1 + i);
			j++;
		}
	}
}

int get_size(int* arr1, int size)
{
	int newsize = 0;
	for (int i = 0; i < size; i++)
	{
		if ((*(arr1 + i) < 0) && (*(arr1 + i) % 2 == 0))
			newsize++;
	}
	return newsize;
}

//void second_Array(int* arr, int* arr2, int size)
//{
//	for (int i = 0, j = 0; i < size; i++)
//	{
//		if ((*(arr + i) < 0) && (*(arr + i) % 2 == 0))
//		{
//			*(arr2 + j) = *(arr + i);
//			j++;
//		}
//	}
//}