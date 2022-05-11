#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include "strukts.h"
#include "S.h"
#include <iostream>
using namespace std;

void HandEndList(FILE* f) {
	OS os;
	int n;
	fseek(f, 0, SEEK_END);
	for (n = 0; n < 10; n++)
	{
		cout << n + 1 << ") " << "Введите: операционную систему, СУБД, мин.объем внешней памяти, мин.объем оперативной памяти, приблизительную цену " << endl;
		cin >> os.Os;
		if (strcmp(os.Os, "stop") == 0) break;
		fprintf(f, "\n%-20s    %11s  ", os.Os, os.sybd);
		cin >> os.vint >> os.ozy >> os.dolor;
		fprintf(f, "%28d    %32d    %24d    ", os.vint, os.ozy, os.dolor);
		
	}
}
void HandStartList(FILE* f, char* fname) {
	OS os;
	OS  temp;
	int n;
	FILE* ft;
	fopen_s(&ft, "Temp.txt", "w+");
	for (n = 0; n < 10; n++)
	{
		cout << n + 1 << ") " << "Введите: операционную систему, СУБД, мин.объем внешней памяти, мин.объем оперативной памяти, приблизительную цену " << endl;
		cin >> os.Os;
		if (strcmp(os.Os, "stop") == 0) break;
		cin >> os.vint >> os.ozy >> os.dolor;
		fprintf(ft, "\n%-20s  %11s  %28d    %32d    %24d    ", os.Os, os.sybd, os.vint, os.ozy, os.dolor);
	}
	fseek(f, 0, SEEK_SET);
	while (!feof(f)) {
		fscanf(f, "%s   %s   %d   %d  %d", temp.Os, temp.sybd, temp.vint, temp.ozy, &temp.dolor);
		fprintf(ft, "\n%-20s   %11s   %28d   %32d   %24d  ", temp.Os, temp.sybd, temp.vint, temp.ozy, &temp.dolor);
	}
	fclose(f);
	fclose(ft);
	remove(fname);
	rename("Temp.txt", fname);
	
}
void RandomEndList(FILE* f) {
	OS os;
	fseek(f, 0, SEEK_END);
	string names[10] = { "OS/2", "Windows/NT","SCO/Unix", "iOS", "TOS","ARX","Zeta","AIS","ITS","BE/OS" };
	string sign[10] = { "DB2","SQLServer","Oracle","Core/Data","PostgreSQL","Redis","MongoDB","PostgreSQL","MySQL","Access" };
	
	int N;
	cout << "Enter N: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		strcpy_s(os.Os, names[rand() % 10].c_str());
		strcpy_s(os.sybd, sign[rand() % 10].c_str());
		os.vint = (rand()) / 50 + 25;

		os.ozy = (rand()) / 300 + 150;
		os.dolor = (rand()) / 4000 + 1000;
		fprintf(f, "\n%-20s    %11s   %28d    %32d    %24d    ", os.Os, os.sybd, os.vint, os.ozy, os.dolor);
	}
		
}
void RandomStartList(FILE* f, char* fname) {
	FILE* ft;
	OS os;
	OS  temp;
	fopen_s(&ft, "Temp.txt", "w+");
	string names[10] = { "OS/2", "Windows/NT","SCO/Unix", "iOS", "TOS","ARX","Zeta","AIS","ITS","BE/OS" };
	string sign[10] = { "DB2","SQLServer","Oracle","Core/Data","PostgreSQL","Redis","MongoDB","PostgreSQL","MySQL","Access" };

	int N;
	cout << "Enter N: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		strcpy_s(os.Os, names[rand() % 10].c_str());
		strcpy_s(os.sybd, sign[rand() % 10].c_str());
		os.vint = (rand()) / 50 + 25;

		os.ozy = (rand()) / 300 + 150;
		os.dolor = (rand()) / 4000 + 1000;
		fprintf(ft, "\n%-20s    %11s   %28d    %32d    %24d    ", os.Os, os.sybd, os.vint, os.ozy, os.dolor);
	}

	fseek(f, 0, SEEK_SET);
	while (!feof(f)) {
		fscanf(f, "%s   %s   %d   %d  %d", &temp.Os, &temp.sybd, &temp.vint, &temp.ozy, &temp.dolor);
		fprintf(ft, "\n%-20s   %11s   %28d   %32d   %24d  ", temp.Os, temp.sybd, temp.vint, temp.ozy, &temp.dolor);
	}
	fclose(f);
	fclose(ft);
	remove(fname);
	rename("Temp.txt", fname);
}
void InputFirmByHand(char* fname, short fb) {
	FILE* f;
	fopen_s(&f, fname, "r+t");
	if (!f) {
		fopen_s(&f, fname, "w+");
		fb = 2;
	}
	else if (getc(f) == EOF)
		fb = 2;
	if (fb != 1) {
		HandEndList(f);
	}
	if (fb == 1) {
		HandStartList(f, fname);
	}
	fclose(f);
}
void InputFirmRandom(char* fname, short fb) {
	OS os;
	OS  temp;
	FILE* f;
	FILE* ft;
	fopen_s(&f, fname, "r+");
	if (!f) {
		fopen_s(&f, fname, "w+");
		fb = 2;
	}
	else if (getc(f) == EOF)
		fb = 2;
	if (fb != 1) {
		RandomEndList(f);
	}
	if (fb == 1) {
		RandomStartList(f, fname);
	}
	fclose(f);
}
void PrintFirm(char* fname) {
	OS os;
	FILE* f;
	short n = 0;
	fopen_s(&f, fname, "rt");
	cout << "-----------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "|Конфигурация програмных средств информационных систем                                                                            |\n";
	cout << "|---------------------------------------------------------------------------------------------------------------------------------|\n";
	cout << "| Операционная система |   С У Б Д   | Мин.объем внешней памяти (MB)| Мин.объем оперативной памяти (MB)| Приблизительная цена ($) |\n";
	cout << "|----------------------|-------------|------------------------------|----------------------------------|--------------------------|\n";
	while (!feof(f)) {
		
		fscanf(f, "%s    %s   %d    %d    %d    ", &os.Os, &os.sybd, &os.vint, &os.ozy, &os.dolor);
		printf("|%-20s | %11s | %28d | %32d | %24d|\n", os.Os, os.sybd, os.vint, os.ozy, os.dolor);
	}
	printf("|---------------------------------------------------------------------------------------------------------------------------------|\n");
	printf("| Примечание: принималась цена лицензии на 8 пользователей                                                                        |\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	fclose(f);
}
void PrintOneFirm(char* fname) {
	OS os{};
	FILE* f;
	
	fopen_s(&f, fname, "rt");

	int N = 0;
	cout << "What line to display?";
	cout << "\nEnter N: ";
	cin >> N;
	if (N < 1) {
		system("cls"); cout << "Enter number, bigger then 0\n"; fclose(f); return;
	}

	system("cls");
	cout << "-----------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "|Конфигурация програмных средств информационных систем                                                                            |\n";
	cout << "|---------------------------------------------------------------------------------------------------------------------------------|\n";
	cout << "| Операционная система |   С У Б Д   | Мин.объем внешней памяти (MB)| Мин.объем оперативной памяти (MB)| Приблизительная цена ($) |\n";
	cout << "|----------------------|-------------|------------------------------|----------------------------------|--------------------------|\n";
	for (; N - 1 >= 0; ) {

		fscanf(f, "%s    %s   %d    %d    %d    ", &os.Os, &os.sybd, &os.vint, &os.ozy, &os.dolor);
		N--;
	}
	printf("|%-20s | %11s | %28d | %32d | %24d|\n", os.Os, os.sybd, os.vint, os.ozy, os.dolor);
	printf("|---------------------------------------------------------------------------------------------------------------------------------|\n");
	printf("| Примечание: принималась цена лицензии на 8 пользователей                                                                        |\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	fclose(f);

	if (f != NULL)fclose(f);
}

void ClearData(char* fname)
{
	remove(fname);
}