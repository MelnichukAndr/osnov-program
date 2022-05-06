#pragma once
#include "S.h"


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
    Firms firm;
    Firms temp;
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

void HandEndList(FILE* f) {
	Firms firm;
	int n;
	fseek(f, 0, SEEK_END);
	for (int i = 0; i < 10; i++)
	{

		cout << i + 1 << ") " << "Введите: операционную систему, СУБД, мин.объем внешней памяти, мин.объем оперативной памяти, приблизительную цену " << endl;
		cin >> firm.name;
		if (strcmp(firm.name, "stop") == 0) break;
		fprintf(f, "\n%20s   ", firm.name);
		cin >> firm.sc >> firm.cnt >> firm.sq >> firm.sa;
		fprintf(f, "%11s   ", firm.sc);
		fprintf(f, "%28d  %32d  %24d ", firm.cnt, firm.sq, firm.sa);
	}
}
void HandStartList(FILE* f, char* fname) {
	Firms firm;
	Firms temp;
	int n;
	FILE* ft;
	fopen_s(&ft, "Temp.txt", "w+");
	for (i = 0; i < 10; i++)
	{

		cout << i + 1 << ") " << "Введите: операционную систему, СУБД, мин.объем внешней памяти, мин.объем оперативной памяти, приблизительную цену " << endl;
		cin >> firm.name;
		if (strcmp(firm.name, "stop") == 0) break;
		fprintf(f, "\n%20s   ", firm.name);
		cin >> firm.sc >> firm.cnt >> firm.sq >> firm.sa;
		fprintf(f, "%11s   ", firm.sc);
		fprintf(f, "%28d  %32d  %24d ", firm.cnt, firm.sq, firm.sa);
	}
	fseek(f, 0, SEEK_SET);
	while (!feof(f)) {
		fscanf(f, "%s   %s   %d   %d  %d", &temp.name, &temp.sc, &temp.cnt, &temp.sq, &temp.sa);
		fprintf(ft, "\n%20s  %11s  %28d  %32d  %24d ", temp.name, &temp.sc, &temp.cnt, &temp.sq, &temp.sa);
	}
	fclose(f);
	fclose(ft);
	remove(fname);
	rename("Temp.txt", fname);
}
void RandomEndList(FILE* f) {
	Firms firm;
	int n, i, m;
	char names[11] = { "OS/2", "Windows/NT","SCO/Unix", "iOS", "TOS","ARX","Zeta","AIS","ITS","BE/OS" };
	char sign[11] = { "DB2","SQLServer","Oracle","Core/Data","PostgreSQL","Redis","MongoDB","PostgreSQL","MySQL","Access" };
	fseek(f, 0, SEEK_END);
	cin >> n;
	if (n > 10) n = 10;
	else if (n < 0) n = 0;
	for (i = 0; i < n; i++)
	{
		m = rand() % 3 + 8;
		ch[5] = rand() % 26 + 65;
		for (int j = 6; j < m; j++)
		{
			ch[j] = rand() % 26 + 97;
		}
		strcpy_s(firm.name, ch);
		fprintf(f, "\n%20s   ", firm.name);
		strcpy_s(firm.sc, ch);
		fprintf(f, "\n%11s   ", firm.sc);
		firm.cnt = (rand()) / 50 + 25;
		fprintf(f, "%28d   ", firm.cnt);
		firm.sq = (rand()) / 300 + 150;
		fprintf(f, "%32d", firm.sq);
		firm.sa = (rand()) / 4000 + 1000;
		fprintf(f, "%24d", firm.sa);
		for (int n = 5; n < 10; n++)
		{
			ch[i] = ' ';
		}
	}


}
void RandomStartList(FILE* f, char* fname) {
	FILE* ft;
	Firms firm;
	Firms temp;
	int n, i, m;
	char names[11] = { "OS/2", "Windows/NT","SCO/Unix", "iOS", "TOS","ARX","Zeta","AIS","ITS","BE/OS" };
	char sign[11] = { "DB2","SQLServer","Oracle","Core/Data","PostgreSQL","Redis","MongoDB","PostgreSQL","MySQL","Access" };
	fseek(f, 0, SEEK_END);
	cin >> n;
	if (n > 10) n = 10;
	else if (n < 0) n = 0;
	for (i = 0; i < n; i++)
	{
		m = rand() % 3 + 8;
		ch[5] = rand() % 26 + 65;
		for (int j = 6; j < m; j++)
		{
			ch[j] = rand() % 26 + 97;
		}
		strcpy_s(firm.name, ch);
		fprintf(f, "\n%20s   ", firm.name);
		strcpy_s(firm.sc, ch);
		fprintf(f, "\n%11s   ", firm.sc);
		firm.cnt = (rand()) / 50 + 25;
		fprintf(f, "%28d   ", firm.cnt);
		firm.sq = (rand()) / 300 + 150;
		fprintf(f, "%32d", firm.sq);
		firm.sa = (rand()) / 4000 + 1000;
		fprintf(f, "%24d", firm.sa);
		for (int n = 5; n < 10; n++)
		{
			ch[i] = ' ';
		}
	}
	fseek(f, 0, SEEK_SET);
	while (!feof(f)) {
		fscanf(f, "%s   %s   %d   %d  %d", &temp.name, &temp.sc, &temp.cnt, &temp.sq, &temp.sa);
		fprintf(ft, "\n%20s  %11s  %28d  %32d  %24d ", temp.name, &temp.sc, &temp.cnt, &temp.sq, &temp.sa);
	}
	fclose(f);
	fclose(ft);
	remove(fname);
	rename("Temp.txt", fname);
}

void PrintFirm(char* fname) {
	Firms firm;
	FILE* f;
	fopen_s(&f, fname, "rt");
	if (!f) { cout << endl << "Ôàéëà íå ñóùåñòâóåò " << endl; return; }
	else if (getc(f) == EOF) { cout << endl << "Ôàéë ïóñò" << endl; return; }
	cout << "-----------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "|Конфигурация програмных средств информационных систем                                                                            |\n";
	cout << "|---------------------------------------------------------------------------------------------------------------------------------|\n";
	cout << "| Операционная система |   С У Б Д   | Мин.объем внешней памяти (MB)| Мин.объем оперативной памяти (MB)| Приблизительная цена ($) |\n";
	cout << "|----------------------|-------------|------------------------------|----------------------------------|--------------------------|\n";
	/* вывод строк фактических данных */
	while (!feof(f)) {
		fscanf(f, "%s   %s   %d   %d  %d", &temp.name, &temp.sc, &temp.cnt, &temp.sq, &temp.sa);
		fprintf(ft, "%20s  |  %11s  |  %28d  |  %32d  |  %24d ", temp.name, &temp.sc, &temp.cnt, &temp.sq, &temp.sa);
	}
	/* вывод примечаний */
	printf("|---------------------------------------------------------------------------------------------------------------------------------|\n");
	printf("| Примечание: принималась цена лицензии на 8 пользователей                                                                        |\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");

	fclose(f);
}
void PrintOneFirm(char* fname) {
	Firms firm;
	FILE* f;
	short n = 0;
	fopen_s(&f, fname, "rt");
	if (!f) { cout << endl << "Ôàéëà íå ñóùåñòâóåò " << endl; return; }
	else if (getc(f) == EOF) { cout << endl << "Ôàéë ïóñò" << endl; return; }
	cout << "Âûáåðèòå íîìåð --> ";
	cin >> n;
	system("cls");
	cout << "-----------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "|Конфигурация програмных средств информационных систем                                                                            |\n";
	cout << "|---------------------------------------------------------------------------------------------------------------------------------|\n";
	cout << "| Операционная система |   С У Б Д   | Мин.объем внешней памяти (MB)| Мин.объем оперативной памяти (MB)| Приблизительная цена ($) |\n";
	cout << "|----------------------|-------------|------------------------------|----------------------------------|--------------------------|\n";
	if (n < 1) { system("cls"); cout << "Òàêîé çàïèñè íå ñóùåñòâóåò" << endl; fclose(f); return; }
	fseek(f, 0, SEEK_SET);
	while (n > 0) {
		if (fgetc(f) == EOF) {
			system("cls"); cout << "Òàêîé çàïèñè íå ñóùåñòâóåò" << endl; fclose(f); return;
		}
		fscanf(f, "%s   %s   %d   %d  %d", &temp.name, &temp.sc, &temp.cnt, &temp.sq, &temp.sa);
		n--;
	}
	fprintf(ft, "%20s  |  %11s  |  %28d  |  %32d  |  %24d ", temp.name, &temp.sc, &temp.cnt, &temp.sq, &temp.sa);
	printf("|---------------------------------------------------------------------------------------------------------------------------------|\n");
	printf("| Примечание: принималась цена лицензии на 8 пользователей                                                                        |\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	fclose(f);
}

void ClearData(char* fname)
{
	remove(fname);
}

//void sort(int N, table arr[])
//{
//
//
//    struct table x;
//    for (int i = 0; i < N - 1; i++)
//    {
//        int m = i;
//        for (int j = i + 1; j < N; j++)
//        {
//            if (strcmp(arr[m].name, arr[j].name) > 0) m = j;
//        }
//        if (m > i)
//        {
//            strcpy_s(x.name, arr[i].name);
//            strcpy_s(x.sc, arr[i].sc);
//            x.cnt = arr[i].cnt;
//            x.sq = arr[i].sq;
//            x.sa = arr[i].sa;
//
//            strcpy_s(arr[i].name, arr[m].name);
//            strcpy_s(arr[i].sc, arr[m].sc);
//            arr[i].cnt = arr[m].cnt;
//            arr[i].sq = arr[m].sq;
//            arr[i].sa = arr[m].sa;
//
//
//            strcpy_s(arr[m].name, x.name);
//            strcpy_s(arr[m].sc, x.sc);
//            arr[m].cnt = x.cnt;
//            arr[m].sq = x.sq;
//            arr[m].sa = x.sa;
//        }
//
//    }
//
//}

