#include "windows.h"
#include <iostream>
#include "Head.h"

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	const int csize=20;
	int* sum = 0, count = 0;
	cout << "������� ������ �������(�� 20) -> ";
	cin >> size;
	if (size < 1 || size > 20) "������ ", exit(0);
	int* arr[csize];
	int* start_arr = arr;
	int a;
	cout << "��������� ������: " << endl;
	element(arr, size);
	print(arr, size);
	while (true) {
		cout << "\n\n1 - ������������� �����\n2 - ���������� �����\n3 - ��� ������������� ���������\n4 - ������ ����������\n5 - ��������� �� ���������\n6 - � ���� ������� � ����������� �����������\n --> ";
		cin >> a;
		switch (a) {
		case 1:
			system("cls");
			arr = start_arr;
			print(arr, size);
			// ������������� �����
			cout << endl << "������������� �����" << endl;
			sum = 0, count = 0;
			for (int i = 0; i < size; i++)
			{
				if (*(arr + i) < 0)
					sum += *(arr + i), count++;
			}
			cout << "����� ������������� ���������: " << sum << endl;
			cout << "���-�� ������������� ���������: " << count << endl;
			break;
		case 2:
			system("cls");
			arr = start_arr;
			print(arr, size);
			// ���������� �����
			cout << endl << "���������� �����" << endl;
			sum = 0, count = 0;
			for (int i = 0; i < size; i++)
			{
				if (*arr < 0)
					sum += *arr, count++;
				arr++;
			}
			cout << "����� ������������� ���������: " << sum << endl;
			cout << "���-�� ������������� ���������: " << count << endl;
		case 3:
			system("cls");
			arr = start_arr;
			print(arr, size);
			// ��� ������������� ���������
			cout << endl << "��� ������������� ���������: " << endl;
			sum = 0, count = 0;
			for (arr = start_arr; arr < start_arr + size; arr++)
			{
				if (*arr < 0)
					sum += *arr, count++;
			}
			cout << "����� ������������� ���������: " << sum << endl;
			cout << "���-�� ������������� ���������: " << count << endl;
			break;
		case 4:
			system("cls");
			arr = start_arr;
			print(arr, size);
			// ������ ����������
			cout << endl << "����� ������ ����������: " << endl;
			sum = 0, count = 0;
			int* p_arr[SIZE];
			for (int i = 0; i < size; i++)
			{
				p_arr[i] = &arr[i];
			}
			for (int i = 0; i < size; i++)
			{
				if (*p_arr[i] < 0)
					sum += (*p_arr[i]), count++;
			}
			cout << "����� ������������� ���������: " << sum << endl;
			cout << "���-�� ������������� ���������: " << count << endl;
			break;
		case 5:
			system("cls");
			arr = start_arr;
			print(arr, size);
			//��������� �� ���������
			cout << endl << "��������� �� ���������" << endl;
			sum = 0, count = 0;
			int** pp;
			for (int i = 0; i < size; i++)
			{
				pp = &arr;
				if (**pp < 0)
					sum += **pp, count++;
				arr++;
			}
			cout << "����� ������������� ���������: " << sum << endl;
			cout << "���-�� ������������� ���������: " << count << endl;
			break;
		case 6:
			system("cls");
			arr = start_arr;
			print(arr, size);
			//� ���� ������� � ����������� �����������
			cout << endl << "� ���� ������� � ����������� �����������" << endl;
			sum = 0, count = 0;
			funct(arr, size, &sum, &count);
			cout << "����� ������������� ���������: " << sum << endl;
			cout << "���-�� ������������� ���������: " << count << endl;
			break;
		case 0:
			break;
		default:
			system("cls");
			cout << "������" << endl;
			break;
		}
		if (a == 0) break;
	}
	arr = start_arr;
	delete[] arr;
}