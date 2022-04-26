#include <iomanip>
#include <iostream>
#include "Header_b.h"
using namespace std;

void element(int** arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			*(*(arr + i) + j) = rand() % 21 - 10;
		}
	}
}
void print(int** arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << setw(4) << *(*(arr + i) + j);
		}
		cout << endl;
	}
	cout << endl;
}
int sum(int** arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (*(*(arr + i) + j) > 0)
				sum += *(*(arr + i) + j);
		}
	}
	return sum;
}
int mult(int** arr, int size) {
	int mult = 1, count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (*(*(arr + i) + j) < 0)
				mult *= *(*(arr + i) + j), count++;
		}
	}
	if (count == 0) return 0;
	return mult;
}