//#define _CRT_SECURE_NO_WARNINGS
#include "struct.h"
#include "Head.h"
OS* head = nullptr;
OS* tail = nullptr;
int main() 
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (1) 
	{
		int a;
		cout << "1. ������� ������ �� ������� �����\n2. ������� ������ �� ���������� �����\n3. ������� ������\n4. ����� �� ��������\n5. �������� � ������\n6. ��������\n7. ����������\n8. ������ � ����\n9. �������� ������ ������ �� �����\n10.�����\n";
		cin >> a;
		switch (a) 
		{
		case 1:
			create_list_by_hand();
			system("cls");
			break;

		case 2:
			create_list_random();
			system("cls");
			break;

		case 3:
			
			if (head == NULL) {
				printf("%s\n", "list is null");
				system("pause");
				system("cls");
				break;
			}
			int f;
			do {
				system("cls");
				cout << " ������ ������\n 1 - ����� ������ � ������\n 2 - ����� ������ � �����\n 0 - � ����\n > ";

				cin >> f;

				switch (f) {
				case 1:
					print_list_begin(head);
					system("pause");
					system("cls");
					break;
				case 2:
					print_list_end(tail);
					system("pause");
					system("cls");
					break;

				}
			} while (f != 0);

			system("cls");
			break;

		case 4:
			system("cls");
			if (head == NULL)
			{
				printf("%s\n", "list is null");
				system("pause");
				system("cls");
				break;
			}
			int b, g;
			do 
			{
				system("cls");
				cout << "����� �� ��������\n 1 - ����� � ������\n 2 - ����� � �����\n 0 - � ����\n > ";
				cin >> b;
				if (b == 1) 
				{
					cout << "����� �� ��������\n 1 - �������� OS\n 2 - ��� SYBD\n 3 - ���.����� ������� ������\n 4 - ���.����� ����������� ������\n 5- ��������������� ����\n> ";
					int g;
					cin >> g;
					switch (g) 
					{
					case 1:
						if (head == NULL) 
						{
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
						if (head == NULL) 
						{
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
						if (head == NULL) 
						{
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
						if (head == NULL) 
						{
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
						if (head == NULL) 
						{
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
			}
				if (b == 2) 
				{
					system("cls");
					cout << "����� �� ��������\n 1 - �������� OS\n 2 - ��� SYBD\n 3 - ���.����� ������� ������\n 4 - ���.����� ����������� ������\n 5- ��������������� ����\n> ";
					int g;
					cin >> g;
					switch (g)
					{
					case 1:
						if (head == NULL)
						{
							printf("%s\n", "list is null");
							system("pause");
							system("cls");
							break;
						}
						cout << "������� �������� OS: ";
						char Os[20];
						cin >> Os;
						search_by_Os(tail, Os);
						cout << "\n";
						system("pause");
						system("cls");
						break;

					case 2:
						if (head == NULL)
						{
							printf("%s\n", "list is null");
							system("pause");
							system("cls");
							break;
						}
						cout << "������� SYBD: ";
						char sybd[20];
						cin >> sybd;
						search_by_sybd(tail, sybd);
						cout << "\n";
						system("pause");
						system("cls");
						break;

					case 3:
						if (head == NULL)
						{
							printf("%s\n", "list is null");
							system("pause");
							system("cls");
							break;
						}
						cout << "������� ���.����� ������� ������: ";
						int vint;
						cin >> vint;
						search_by_vint(tail, vint);
						cout << "\n";
						system("pause");
						system("cls");
						break;

					case 4:
						if (head == NULL)
						{
							printf("%s\n", "list is null");
							system("pause");
							system("cls");
							break;
						}
						cout << "������� ���.����� ����������� ������: ";
						int ozy;
						cin >> ozy;
						search_by_ozy(tail, ozy);
						cout << "\n";
						system("pause");
						system("cls");
						break;

					case 5:
						if (head == NULL)
						{
							printf("%s\n", "list is null");
							system("pause");
							system("cls");
							break;
						}
						cout << "������� ��������������� ����: ";
						int dolar;
						cin >> dolar;
						search_by_ozy(tail, dolar);
						cout << "\n";
						system("pause");
						system("cls");
						break;
					}
				}
			} while (b != 0);

			system("cls");
			break;

		case 5:
			system("cls");
			int c;
			do {
				system("cls");
				cout << " 1 - �������� � ������\n 2 - �������� � �����\n 3 - �������� ����� ��������� ��������\n 0 - � ����\n > ";
				cin >> c;
				switch (c) {
					if (head == NULL) {
						printf("%s\n", "list is null");
						system("pause");
						system("cls");
						break;
					}
				case 1:
					add_to_begin();
					system("pause");
					system("cls");
					break;
				case 2:
					add_to_end();
					system("pause");
					system("cls");
					break;
				case 3:
					add_after_element();
					system("pause");
					system("cls");
					break;
				}
			} while (c != 0);
			system("cls");
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
				delete_first();
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
				delete_last();
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
				delete_element();
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
			sort();
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
			input_in_file();
			system("pause");
			system("cls");
			break;

		case 9:
			read_from_file();
			system("pause");
			system("cls");
			break;
		case 10:
			exit(0);
		}
	}
}