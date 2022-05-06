#include "Header.h"
#include <iostream>
using namespace std;
void FeelMas(int* mas, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(mas + i) = rand() % 100;
	}
}
void PrintMas(int* mas, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << *(mas + i) << "  ";
	}
}
void WriteF1(int* mas, int s, const char* fname)
{
	FILE* f1;
	fopen_s(&f1, fname, "wb");
	fwrite(mas, sizeof(int), s, f1);
	fclose(f1);
}
int SumElement(int* mas2, int s, const char* fname) {
	FILE* f;
	int sum = 0;
	fopen_s(&f, fname, "rb");
	for (int i = 0; i < s; i++)
	{
		fread(&*(mas2 + i), sizeof(int), 1, f);
		if ((i + 1) % 2 == 0)
			sum += *(mas2 + i);
	}
	fclose(f);
	return sum;
}