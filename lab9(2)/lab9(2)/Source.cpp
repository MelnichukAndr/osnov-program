#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include "struct.h"
#include "Head.h"
#include <iostream>
using namespace std;


extern struct OS* head, * tail;

void create_list_by_hand()
{
	OS* ptr, * previous;

	previous = nullptr;
	do {
		ptr = new OS;
		cout << "¬ведите: операционную систему, —”Ѕƒ, мин.объем внешней пам€ти, мин.объем оперативной пам€ти, приблизительную цену \n";
		cin >> ptr->Os >> ptr->sybd >> ptr->vint >> ptr->ozy >> ptr->dolor;;

		ptr->prev = previous;
		if (previous != nullptr)
			previous->next = ptr;
		else
			head = ptr;
		previous = ptr;
		
	} while (_getch() != 27);

	tail = ptr;
	tail->next = nullptr;
}


void create_list_random()
{
	OS* ptr, * previous;

	head = previous = ptr = new OS;
	previous = nullptr;


	int N;
	cout << "Enter N: ";
	cin >> N;
	string names[10] = { "OS/2", "Windows/NT","SCO/Unix", "iOS", "TOS","ARX","Zeta","AIS","ITS","BE/OS" };
	string sign[10] = { "DB2","SQLServer","Oracle","Core/Data","PostgreSQL","Redis","MongoDB","PostgreSQL","MySQL","Access" };

	for (int i = 0; i < N; i++)
	{
		ptr = new OS;
		strcpy_s(ptr->Os, names[rand() % 10].c_str());
		strcpy_s(ptr->sybd, sign[rand() % 10].c_str());
		ptr->vint = (rand()) / 50 + 25;
		ptr->ozy = (rand()) / 300 + 150;
		ptr->dolor = (rand()) / 4000 + 1000;

		ptr->prev = previous;
		if (previous != nullptr)
			previous->next = ptr;
		else
			head = ptr;
		previous = ptr;
	}

	tail = ptr;
	tail->next = nullptr;
}


void print_list_begin(OS* head) {
	OS* ptr = head;
	while (ptr != nullptr)
	{
		printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
		ptr = ptr->next;
	}
	cout << "\n";
}
void print_list_end(OS* tail) {
	OS* ptr = tail;
	while (ptr != nullptr)
	{
		printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
		ptr = ptr->prev;
	}
	cout << "\n";
}
void search_by_Os(OS* p, char* Os) {
	OS* ptr = p;
	if (ptr == head)
	{
		while (ptr)
		{
			if (strcmp(ptr->Os, Os) == 0)
				printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
			ptr = ptr->next;
		}
	}
	else
	{
		while (ptr)
		{
			if (strcmp(ptr->Os, Os) == 0)
				printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
			ptr = ptr->prev;
		}
	}
}
void search_by_sybd(OS* p, char* sybd) {
	OS* ptr = p;
	if (ptr == head)
	{
		while (ptr)
		{
			if (strcmp(ptr->sybd, sybd) == 0)
				printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
			ptr = ptr->next;
		}
	}
	else
	{
		while (ptr)
		{
			if (strcmp(ptr->sybd, sybd) == 0)
				printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
			ptr = ptr->prev;
		}
	}
}
void search_by_vint(OS* p, int vint) {
	OS* ptr = p;
	if (ptr == head) {
		while (ptr)
		{
			if (round(ptr->vint * 10) / 10 == vint)
				printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
			ptr = ptr->next;
		}
	}
	else
	{
		while (ptr)
		{
			if (round(ptr->vint * 10) / 10 == vint)
				printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
			ptr = ptr->prev;
		}
	}
}
void search_by_ozy(OS* p, int ozy) {
	OS* ptr = p;
	if (ptr == head)
	{
		while (ptr)
		{
			if (round(ptr->ozy * 10) / 10 == ozy)
				printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
			ptr = ptr->next;
		}
	}
	else
	{
		while (ptr) {
			if (round(ptr->ozy * 10) / 10 == ozy)
				printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
			ptr = ptr->prev;
		}
	}
}

void search_by_dolor(OS* p, int dolor) {
	OS* ptr = p;
	if (ptr == head)
	{
		while (ptr)
		{
			if (round(ptr->dolor * 10) / 10 == dolor)
				printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
			ptr = ptr->next;
		}
	}
	else
	{
		while (ptr) {
			if (round(ptr->dolor * 10) / 10 == dolor)
				printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
			ptr = ptr->prev;
		}
	}
}

void add_to_begin() {
	OS* ptr = new OS;
	cout << "\n¬ведите материал и хар-ки:\n";
	cin >> ptr->Os >> ptr->sybd >> ptr->vint >> ptr->ozy >> ptr->dolor;
	ptr->prev = nullptr;
	ptr->next = head; // первый элемент становитс€ вторым
	head->prev = ptr;
	head = ptr; // первый элемент становитс€ первым
}


void add_to_end() {
	OS* ptr = head;
	OS* previous = nullptr;

	while (ptr)
	{
		previous = ptr;
		ptr = ptr->next;
	}
	ptr = new OS;
	cout << "\n¬ведите материал и хар-ки:\n";
	cin >> ptr->Os >> ptr->sybd >> ptr->vint >> ptr->ozy >> ptr->dolor;

	previous->next = ptr; // предыдущий указывает на текущий
	ptr->prev = previous;
	ptr->next = nullptr; // конец списка
	tail = ptr;

}


void add_after_element()
{
	OS* ptr = head;
	OS* previous = head;
	char name[12];
	cout << "\n¬ведите название материала: ";
	cin >> name;
	while (ptr)
	{
		if (strcmp(previous->Os, name) == 0)
		{
			ptr = new OS;
			ptr->next = previous->next; // предыдущий указывает на текущий
			previous->next->prev = ptr; // предыдущий становитс€ текущим
			ptr->prev = previous; 
			previous->next = ptr;
			cout << "\n¬ведите материал и хар-ки:\n";
			cin >> ptr->Os >> ptr->sybd >> ptr->vint >> ptr->ozy >> ptr->dolor;
			break;
		}

		previous = ptr; // предыдущий становитс€ текущим
		ptr = ptr->next; // текущий становитс€ следующим

	}
}

void delete_first()
{
	OS* ptr = head;
	head = ptr->next;
	head->prev = NULL;
	free(ptr);
	ptr = head;
}

void delete_last() {
	OS* ptr = head;
	OS* previous = nullptr;
	while (ptr->next) {
		previous = ptr;
		ptr = ptr->next;
	}
	if (previous == nullptr) {
		delete_first();
		return;
	}
	previous->next = nullptr;
	tail = previous;
	free(ptr);

}


void delete_element() 
{
	OS* ptr = head;
	OS* previous = nullptr;
	char name[11];
	cout << "\n¬ведите название материала: ";
	cin >> name;
	if (strcmp(ptr->Os, name) == 0) {
		delete_first();
		system("cls");
		return;
	}
	while (ptr) {
		if (strcmp(ptr->Os, name) == 0)
		{
			if (ptr->next == nullptr)
			{
				previous->next = nullptr;
				tail = previous;
				free(ptr);
				system("cls");
				return;
			}
			ptr->next->prev = ptr->prev;
			ptr->prev->next = ptr->next;
			free(ptr);
			system("cls");
			return;
		}
		else 
		{
			previous = ptr;
			ptr = ptr->next;
		}
	}
}

void sort() {
	OS* left = head;
	OS* right = head->next;
	while (left->next) { // пока не дошли до конца списка
		while (right) {
			if ((strcmp(left->Os, right->Os) > 0)) { // если левый больше правого по алфавиту
				swap(left->Os, right->Os);
				swap(left->sybd, right->sybd);
				swap(left->vint, right->vint);
				swap(left->ozy, right->ozy);
				swap(left->dolor, right->dolor);
			}
			right = right->next; // переходим к следующему элементу
		}
		left = left->next; // переходим к следующему элементу
		right = left->next; // переходим к следующему элементу
	}
}


void input_in_file() {
	OS* ptr = head;

	FILE* f;
	char fname[] = "OS.txt";
	fopen_s(&f, fname, "wt");

	while (ptr)
	{
		fprintf(f, "\n %-20s  %11s  %28d    %32d    %24d  ", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
		ptr = ptr->next;
	}
	fclose(f);
}

void read_from_file() {
	OS* ptr, * head, * previous;
	ptr = head = previous = new OS;
	head->prev = nullptr;
	FILE* f;
	char fname[] = "OS.txt";
	fopen_s(&f, fname, "rt");

	fscanf(f, " %s %s %d %d %d", &ptr->Os, &ptr->sybd, &ptr->vint, &ptr->ozy, &ptr->dolor);
	while (!feof(f)) {
		ptr = new OS;
		fscanf(f, " %s %s %d %d %d", &ptr->Os, &ptr->sybd, &ptr->vint, &ptr->ozy, &ptr->dolor);
		previous->next = ptr;
		previous = ptr;
	}
	ptr->next = nullptr;
	cout << "Done!" << endl;
	fclose(f);


}

