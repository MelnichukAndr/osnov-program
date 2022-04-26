#include<Windows.h>
#include <iostream>
#include "Header_b.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int size, a;
	cout << "������� ������ N * N (�� 5)--> ";
	cin >> size;
	if (size < 1 || size > 5) cout << "������� ������ N * N (�� 5)-->  ", exit(0);
	int** arr = new int* [size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = new int[size];
	}
	element(arr, size);
	print(arr, size);
	int (*fun_ptr)(int**, int);
	while (true) {
		cout << "\n\n1 - ���������� �����(+)\n2 - ���������� ������������(-)\n0 - �����\n--> ";
		cin >> a;
		switch (a) {
		case 1:
			system("cls");
			print(arr, size);
			fun_ptr = sum;
			if (fun_ptr(arr, size) == 0) cout << endl << "��� ������������� �����";
			cout << endl << "Sum:\t" << fun_ptr(arr, size);
			break;
		case 2:
			system("cls");
			print(arr, size);
			fun_ptr = mult;
			if (fun_ptr(arr, size) == 0) cout << endl << "��� ������������� �����";
			else cout << endl << "Mult:\t" << fun_ptr(arr, size);
			break;
		case 0:
			exit(0);
		default:
			system("cls");
			cout << "������" << endl;
			break;
		}
	}
	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}