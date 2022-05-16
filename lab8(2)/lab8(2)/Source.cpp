#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include "strukt.h"
#include "Head.h"
#include <iostream>
using namespace std;


OS* create_list_by_hand()
{
	OS* ptr, * head, * previous;

	head = previous = ptr = new OS;
	int N = 0;

	cout << "Введите: операционную систему, СУБД, мин.объем внешней памяти, мин.объем оперативной памяти, приблизительную цену \n";
	cin >> ptr->Os >> ptr->sybd >> ptr->vint >> ptr->ozy >> ptr->dolor;

	char c = 'y';

	while (N < 20 && c == 'y')
	{
		ptr = new OS;

		if (head == nullptr)
			head = ptr; // если нет элементов в списке, то первый элемент становится первым
		else
			previous->next = ptr; // предыдущий указывает на текущий

		previous = ptr; // предыдущий становится текущим

		cin >> ptr->Os >> ptr->sybd >> ptr->vint >> ptr->ozy >> ptr->dolor;

		cout << "Fill the next one?(y/other key)\n";
		c = _getch();
		++N;
	}
	previous->next = nullptr; //конец списка
	return head;
}



OS* create_list_random()
{
	OS* ptr, * head, * previous;

	head = previous = ptr = new OS;
	

	int N;
	cout << "Enter N: ";
	cin >> N;
	string names[10] = { "OS/2", "Windows/NT","SCO/Unix", "iOS", "TOS","ARX","Zeta","AIS","ITS","BE/OS" };
	string sign[10] = { "DB2","SQLServer","Oracle","Core/Data","PostgreSQL","Redis","MongoDB","PostgreSQL","MySQL","Access" };

	
		strcpy_s(ptr->Os, names[rand() % 10].c_str());
		strcpy_s(ptr->sybd, sign[rand() % 10].c_str());
		ptr->vint = (rand()) / 50 + 25;

		ptr->ozy = (rand()) / 300 + 150;
		ptr->dolor = (rand()) / 4000 + 1000;


	--N;

	for (int i = 0; i < N; i++)
	{
		ptr = new OS; // выделяем память под следующий элемент
		if (head == nullptr)
			head = ptr; // если нет элементов в списке, то первый элемент становится первым
		else
			previous->next = ptr; // предыдущий указывает на текущий

		previous = ptr; // предыдущий указатель становится текущим


		strcpy_s(ptr->Os, names[rand() % 10].c_str());
		strcpy_s(ptr->sybd, sign[rand() % 10].c_str());
		ptr->vint = (rand()) / 50 + 25;

		ptr->ozy = (rand()) / 300 + 150;
		ptr->dolor = (rand()) / 4000 + 1000;
	}
	previous->next = nullptr;
	return head;
}





void print_list(OS* head) {
	OS* ptr = head;
	while (ptr != nullptr)
	{
		printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd,  ptr->vint,  ptr->ozy,  ptr->dolor);
		ptr = ptr->next;
	}
	cout << "\n";
}


OS* search_by_Os(OS* head, char* Os) {
	OS* ptr = head;
	while (ptr)
	{
		if (strcmp(ptr->Os, Os) == 0)
			printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
		ptr = ptr->next;
	}
	return nullptr;
}
OS* search_by_sybd(OS* head, char* sybd) {
	OS* ptr = head;
	while (ptr)
	{
		if (strcmp(ptr->sybd, sybd) == 0)
			printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
		ptr = ptr->next;
	}
	return nullptr;
}
OS* search_by_vint(OS* head, int vint) {
	OS* ptr = head;
	while (ptr) {
		if (round(ptr->vint * 10) / 10 == vint)
			printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
		ptr = ptr->next;
	}
	return nullptr;
}
OS* search_by_ozy(OS* head, int ozy) {
	OS* ptr = head;
	while (ptr) {
		if (round(ptr->ozy * 10) / 10 == ozy)
			printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
		ptr = ptr->next;
	}
	return nullptr;
}


OS* search_by_dolor(OS* head, int dolor) {
	OS* ptr = head;
	while (ptr) {
		if (round(ptr->dolor * 10) / 10 == dolor)
			printf("\n[ %-20s  %11s  %28d    %32d    %24d  ]", ptr->Os, ptr->sybd, ptr->vint, ptr->ozy, ptr->dolor);
		ptr = ptr->next;
	}
	return nullptr;
}



void add_to_begin(OS** head) {
	OS* ptr = new OS;
	cout << "\nВведите материал и хар-ки:\n";
	cin >> ptr->Os >> ptr->sybd >> ptr->vint >> ptr->ozy >> ptr->dolor;
	ptr->next = *head; // первый элемент становится вторым
	*head = ptr; // первый элемент становится первым
}
void add_to_end(OS* head) {
	OS* ptr = head;
	OS* previous = nullptr;

	while (ptr)
	{
		previous = ptr;
		ptr = ptr->next;
	}
	ptr = new OS;
	cout << "\nВведите материал и хар-ки:\n";
	cin >> ptr->Os >> ptr->sybd >> ptr->vint >> ptr->ozy >> ptr->dolor;
	previous->next = ptr; // предыдущий указывает на текущий
	ptr->next = nullptr; // конец списка
}

void add_after_element(OS* head)
{
	OS* ptr = head;
	OS* previous = head;
	char name[12];
	cout << "\nВведите название материала: ";
	cin >> name;
	while (ptr)
	{
		if (strcmp(previous->Os, name) == 0)
		{
			ptr = new OS;
			ptr->next = previous->next; // предыдущий указывает на текущий
			previous->next = ptr; // предыдущий становится текущим
			cout << "\nВведите материал и хар-ки:\n";
			cin >> ptr->Os >> ptr->sybd >> ptr->vint >> ptr->ozy >> ptr->dolor;
			break;
		}

		previous = ptr; // предыдущий становится текущим
		ptr = ptr->next; // текущий становится следующим

	}
}
void delete_first(OS** head) 
{
	OS* ptr = *head;
	*head = ptr->next;
	delete ptr;
}
void delete_last(OS** head) {
	OS* ptr = *head;
	OS* previous = nullptr;
	while (ptr->next) {
		previous = ptr;
		ptr = ptr->next;
	}
	if (previous == nullptr) {
		delete_first(head);
		return;
	}
	previous->next = nullptr;
	delete ptr;
}
void delete_element(OS** head) {
	OS* ptr = *head;
	OS* previous = nullptr;
	char name[11];
	cout << "\nВведите название материала: ";
	cin >> name;
	if (strcmp(ptr->Os, name) == 0) {
		delete_first(head);
		system("cls");
		return;
	}
	while (ptr) {
		if (strcmp(ptr->Os, name) == 0) {
			previous->next = ptr->next;
			delete ptr;
			system("cls");
			return;
		}
		else {
			previous = ptr;
			ptr = ptr->next;
		}
	}
}

void sort(OS* head) {
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

void input_in_file(OS* head) {
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

OS* read_from_file() {
	OS* ptr, * head, * previous;
	ptr = head = previous = new OS;
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
	return head;

}



