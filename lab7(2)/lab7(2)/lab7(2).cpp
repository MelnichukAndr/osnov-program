
#include "Windows.h"
#include <iostream>
#include "strukts.h"
#include "S.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int a;
	char fname[] = "Os.txt";
	short f;
	while (true) {
		cout << " 1 - ���� � ������ \n 2 - ���� ��������� �������\n 3 - ������� ������\n 4 - ������� ������ ������\n 5 - ������� ������\n 0 - �����\n";
		cout << "-> ";
		cin >> a;
		switch (a) {
		case 1:
			while (true) {
				system("cls");
				cout << " 1 - �������� ������ � ������ �����\n 2 - �������� � ����� �����\n 3 - � ����\n -->";
				cin >> f;
				if (f != 3) {
					InputOSByHand(fname, f);
				}
				else {
					system("cls");
					break;
				}
			}
			break;
		case 3:
			system("cls");
			f = 2;
			PrintOneOS(fname);
			cout << endl << endl;
			break;
		case 4:
			system("cls");
			f = 1;
			PrintOS(fname);
			cout << endl << endl;
			break;
		case 2:
			system("cls");
			while (true) {
				system("cls");
				cout << " 1 - �������� ������ � ������ �����\n 2 - �������� � ����� �����\n 3 - � ����\n -->";
				cin >> f;
				if (f != 3) {
					InputOSRandom(fname, f);
					cout << endl << "������ ������� ���������" << endl;
					system("pause");
				}
				else {
					system("cls");
					break;
				}
			}
			break;
		case 5:
			system("cls");
			ClearData(fname);
			cout << "������ ������" << endl;
			break;
		case 0:
			exit(0);
			break;
		default:
			system("cls");
			cout << "������" << endl;
			break;
		}
	}
}