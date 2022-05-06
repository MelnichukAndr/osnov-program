#define _CRT_SECURE_NO_WARNINGS
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

void WriteF1(const char* fname, int* mas1, const int s)
{
	FILE* f1;
	fopen_s(&f1, fname, "wt");
	for (int i = 0; i < s; i++)
	{
		fprintf(f1, "  %d", mas1[i]);
	}
	fclose(f1);
}
void WriteF2(const char* fname, const char* f2name, int* mas2, const int s) {
	FILE* f1;
	FILE* f2;
	fopen_s(&f1, fname, "rt");
	fopen_s(&f2, f2name, "wt");
	for (int i = 0; i < s; i++)
	{
		fscanf(f1, "%d", &*(mas2 + i));
	}
	for (int i = 0; i < s; i++)
	{
		fprintf(f2, "  %d", *(mas2 + i));
	}
	fclose(f1);
	fclose(f2);
}
void PrintMas(int* mas, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << *(mas + i) << "  ";
	}
	cout << endl;
}
void PrintVar(int x, char* f2name) {
	FILE* f;
	fopen_s(&f, f2name, "rt");
	while (!feof(f)) {
		fscanf(f, "%d", &x);
		cout << x << "  ";
	}
	fclose(f);
}