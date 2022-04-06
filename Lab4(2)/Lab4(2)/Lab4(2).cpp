#include "windows.h"
#include <iostream>
#include "Head.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int size, nsize;
	cout << "������� ������ ������� (�� 30-�� ���������) -> ";
	cin >> size;
	int* arr1 = new int[size];
	int choice;
	if (size < 1 || size > 30) cout << "������" << endl, exit(0);
	cout << "��������� ������: " << endl;
	element(arr1, size);
	print(arr1, size);
	nsize = get_size(arr1, size);
	int* arr2 = new int[nsize];
	while (true) {
		cout << "1 - ���������� ������ \n2 - ������������� ������\n3 - ���������� ������ ������\n4 - �����\n -->";
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			cout << "��������� ������: " << endl;
			print(arr1, size);
			break;
		case 2:
			system("cls");
			cout << "��������������� ������: " << endl;
			sort(arr1, arr2, size);
			
			break;
		case 3:
			system("cls");
			if (nsize < 1) { cout << "��� ������������� ��������� "; break; }
			sort(arr1, arr2, size);
			cout << "������ ������: " << endl;
			print(arr2, nsize);
		case 4:
			break;
		default:
			system("cls");
			cout << "Error";
			break;
		}
		if (choice == 4)break;
	}
	delete[] arr1;
	delete[] arr2;
}