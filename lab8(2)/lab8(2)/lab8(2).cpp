#include "Windows.h"
#include <iostream>
#include "strukt.h"
#include "Head.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char fname[] = "OS.txt";
	OS* head = nullptr;
	while (1) {
		int a;
		cout << "1. ������� ������ �� ������� �����\n2. ������� ������ �� ���������� �����\n3. ������� ������\n4. ����� �� ��������\n5. �������� � ������\n6. ��������\n7. ����������\n8. ������ � ����\n9. �������� ������ ������ �� �����\n10.�����\n";
		cin >> a;
		switch (a) {
		case 1:
			head = create_list_by_hand();
			system("cls");
			break;

		case 2:
			head = create_list_random();
			system("cls");
			break;

		case 3:
			if (head == NULL) {
				printf("%s\n", "list is null");
				system("pause");
				system("cls");
				break;
			}
			print_list(head);
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			cout << "����� �� ��������\n 1 - �������� OS\n 2 - ��� SYBD\n 3 - ���.����� ������� ������\n 4 - ���.����� ����������� ������\n 5- ��������������� ����\n> ";
			int b;
			cin >> b;
			switch (b)
			{
			case 1:
				if (head == NULL) {
					printf("%s\n", "list is null");
					system("pause");
					system("cls");
					break;
				}
				cout << "������� �������� OS: ";
				char Os[20];
				cin >> Os;
				search_by_Os(head, Os);
				cout << "\n";
				system("pause");
				system("cls");
				break;

			case 2:
				if (head == NULL) {
					printf("%s\n", "list is null");
					system("pause");
					system("cls");
					break;
				}
				cout << "������� SYBD: ";
				char sybd[20];
				cin >> sybd;
				search_by_sybd(head, sybd);
				cout << "\n";
				system("pause");
				system("cls");
				break;

			case 3:
				if (head == NULL) {
					printf("%s\n", "list is null");
					system("pause");
					system("cls");
					break;
				}
				cout << "������� ���.����� ������� ������: ";
				int vint;
				cin >> vint;
				search_by_vint(head, vint);
				cout << "\n";
				system("pause");
				system("cls");
				break;

			case 4:
				if (head == NULL) {
					printf("%s\n", "list is null");
					system("pause");
					system("cls");
					break;
				}
				cout << "������� ���.����� ����������� ������: ";
				int ozy;
				cin >> ozy;
				search_by_ozy(head, ozy);
				cout << "\n";
				system("pause");
				system("cls");
				break;

			case 5:
				if (head == NULL) {
					printf("%s\n", "list is null");
					system("pause");
					system("cls");
					break;
				}
				cout << "������� ��������������� ����: ";
				int dolar;
				cin >> dolar;
				search_by_ozy(head, dolar);
				cout << "\n";
				system("pause");
				system("cls");
				break;
			}
			break;
		case 5:
			system("cls");
			cout << " 1 - �������� � ������\n 2 - �������� � �����\n 3 - �������� ����� ��������� ��������\n > ";
			int c;
			cin >> c;
			switch (c) {

			case 1:
				add_to_begin(&head);
				system("pause");
				system("cls");
				break;
			case 2:
				add_to_end(head);
				system("pause");
				system("cls");
				break;
			case 3:
				if (head == NULL) {
					printf("%s\n", "list is null");
					system("pause");
					system("cls");
					break;
				}
				add_after_element(head);
				system("pause");
				system("cls");
				break;
			}
			break;
		case 6:
			system("cls");
			cout << " 1 - ������� ������ �������\n 2 - ������� ��������� �������\n 3 - ������� �������� �������\n > ";
			int d;
			cin >> d;
			switch (d) {
			case 1:
				if (head == NULL) {
					printf("%s\n", "list is null");
					system("pause");
					system("cls");
					break;
				}
				delete_first(&head);
				system("pause");
				system("cls");
				break;
			case 2:
				if (head == NULL) {
					printf("%s\n", "list is null");
					system("pause");
					system("cls");
					break;
				}
				delete_last(&head);
				system("pause");
				system("cls");
				break;
			case 3:
				if (head == NULL) {
					printf("%s\n", "list is null");
					system("pause");
					system("cls");
					break;
				}
				delete_element(&head);
				system("pause");
				system("cls");
				break;
			}
			break;
		case 7:
			if (head == NULL) {
				printf("%s\n", "list is null");
				system("pause");
				system("cls");
				break;
			}
			sort(head);
			system("pause");
			system("cls");
			break;
		case 8:
			if (head == NULL) {
				printf("%s\n", "list is null");
				system("pause");
				system("cls");
				break;
			}
			input_in_file(head);
			system("pause");
			system("cls");
			break;

		case 9:

			head = read_from_file();

			system("pause");
			system("cls");
			break;

		case 10:
			exit(0);

		}
	}
}


