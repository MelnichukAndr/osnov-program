#include "windows.h"
#include <iostream>
#include "Header.h"

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	const int csize = 20;
	int sum = 0, count = 0;
	int size;
	cout << "������� ������ �������(�� 20) -> ";
	cin >> size;
	if (size < 1 || size > 20) "������ ", exit(0);
	int arr[csize];
	int* start_arr = arr;
	int a;
	cout << "��������� ������: " << endl;
	element(start_arr, size);
	print(start_arr, size);
	while (true) {
		cout << "\n\n1 - ������������� �����\n2 - ���������� �����\n3 - ��� ������������� ���������\n4 - ������ ����������\n5 - ��������� �� ���������\n6 - � ���� ������� � ����������� �����������\n --> ";
		cin >> a;
		switch (a) {
		case 1:
			system("cls");
			start_arr = arr;
			print(start_arr, size);
			// ������������� �����
			cout << endl << "������������� �����" << endl;
			sum = 0, count = 0;
			for (int i = 0; i < size; i++)
			{
				if (*(start_arr + i) < 0)
					sum += *(start_arr + i), count++;
			}
			cout << "����� ������������� ���������: " << sum << endl;
			cout << "���-�� ������������� ���������: " << count << endl;
			break;
		case 2:
			system("cls");
			start_arr = arr;
			print(start_arr, size);
			// ���������� �����
			cout << endl << "���������� �����" << endl;
			sum = 0, count = 0;
			for (int i = 0; i < size; i++, start_arr++)
			{
				if (*start_arr < 0)
					sum += *start_arr, count++;
				
			}
			cout << "����� ������������� ���������: " << sum << endl;
			cout << "���-�� ������������� ���������: " << count << endl;
		case 3:
			system("cls");
			start_arr = arr;
			print(start_arr, size);
			// ��� ������������� ���������
			cout << endl << "��� ������������� ���������: " << endl;
			sum = 0, count = 0;
			for (start_arr = arr; start_arr <arr + size; start_arr++)
			{
				if (*start_arr < 0)
					sum += *start_arr, count++;
			}
			cout << "����� ������������� ���������: " << sum << endl;
			cout << "���-�� ������������� ���������: " << count << endl;
			break;
		case 4:
			system("cls");
			start_arr = arr;
			print(start_arr, size);
			// ������ ����������
			cout << endl << "����� ������ ����������: " << endl;
			sum = 0, count = 0;
			int* p_arr[csize];
			for (int i = 0; i < size; i++)
			{
				p_arr[i] = &start_arr[i];
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
			start_arr = arr;
			print(start_arr, size);
			//��������� �� ���������
			cout << endl << "��������� �� ���������" << endl;
			sum = 0, count = 0;
			int** pp;
			for (int i = 0; i < size; i++, start_arr++)
			{	
				pp = &start_arr;
				if (**pp < 0)
					sum += **pp, count++;
				
			}
			cout << "����� ������������� ���������: " << sum << endl;
			cout << "���-�� ������������� ���������: " << count << endl;
			break;
		case 6:
			system("cls");
			start_arr = arr;
			print(start_arr, size);
			//� ���� ������� � ����������� �����������
			cout << endl << "� ���� ������� � ����������� �����������" << endl;
			sum = 0, count = 0;
			funct(start_arr, size, sum, count);
			
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

}