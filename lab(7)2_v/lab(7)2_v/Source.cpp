#include "Header.h"
#include <iostream>
using namespace std;

void WriteFile(const char* fname)
{
	FILE* f;
	int x;
	fopen_s(&f, fname, "wb");
	for (int i = 0; i < 20; i++)
	{
		x = rand() % 100;
		fwrite(&x, sizeof(int), 1, f);
	}
	fclose(f);
}
void PrintFile(const char* fname) {
	FILE* f;
	int x;
	fopen_s(&f, fname, "rb");
	for (int i = 0; i < 20; i++)
	{
		fread(&x, sizeof(int), 1, f);
		cout << x << "  ";
	}
	fclose(f);
}
int Sum(const char* fname) {
	FILE* f;
	int x, sum = 0;
	fopen_s(&f, fname, "rb");
	fseek(f, 2 * sizeof(int), SEEK_SET);
	fread(&x, sizeof(int), 1, f);
	sum += x;
	fseek(f, 5 * sizeof(int), SEEK_SET);
	fread(&x, sizeof(int), 1, f);
	sum += x;
	fseek(f, 9 * sizeof(int), SEEK_SET);
	fread(&x, sizeof(int), 1, f);
	sum += x;
	fclose(f);
	return sum;
}
void FindMin(const char* fname) {
	FILE* f;
	int min, i_min = 0, i = 0;
	int x;
	fopen_s(&f, fname, "r+b");
	fread(&min, sizeof(int), 1, f);
	while (!feof(f)) {
		fread(&x, sizeof(int), 1, f);
		if (x < min) min = x, i_min = i;
		i++;
	}
	fseek(f, 0, SEEK_SET);
	fread(&x, sizeof(int), 1, f);
	i = 0;
	if (x == min) {
		fseek(f, i_min * sizeof(int), SEEK_SET);
		x = 999;
		fwrite(&x, sizeof(int), 1, f);
		fseek(f, 0, SEEK_END);
	}
	while (!feof(f)) {
		fread(&x, sizeof(int), 1, f);
		if (x == min) {
			fseek(f, (i_min + 1) * sizeof(int), SEEK_SET);
			x = 999;
			fwrite(&x, sizeof(int), 1, f);
			fseek(f, 0, SEEK_END);
			break;
		}
	}
	fclose(f);
}