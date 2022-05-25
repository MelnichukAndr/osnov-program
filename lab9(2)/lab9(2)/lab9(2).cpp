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
		cout << "1. Создать список по ручному вводу\n2. Создать список по случайному вводу\n3. Вывести список\n4. Поиск по названию\n5. Добавить в список\n6. Удаление\n7. Сортировка\n8. Запись в файл\n9. Создание нового списка из файла\n10.Выход\n";
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
				cout << " Печать списка\n 1 - Вывод списка с начала\n 2 - Вывод списка с конца\n 0 - В меню\n > ";

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
				cout << "Выбор по критерию\n 1 - поиск с начала\n 2 - поиск с конца\n 0 - В меню\n > ";
				cin >> b;
				if (b == 1) 
				{
					cout << "Выбор по критерию\n 1 - название OS\n 2 - его SYBD\n 3 - мин.объем внешней памяти\n 4 - мин.объем оперативной памяти\n 5- приблизительную цену\n> ";
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
						cout << "Введите название OS: ";
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
						cout << "Введите SYBD: ";
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
						cout << "Введите мин.объем внешней памяти: ";
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
						cout << "Введите мин.объем оперативной памяти: ";
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
						cout << "Введите приблизительную цену: ";
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
					cout << "Выбор по критерию\n 1 - название OS\n 2 - его SYBD\n 3 - мин.объем внешней памяти\n 4 - мин.объем оперативной памяти\n 5- приблизительную цену\n> ";
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
						cout << "Введите название OS: ";
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
						cout << "Введите SYBD: ";
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
						cout << "Введите мин.объем внешней памяти: ";
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
						cout << "Введите мин.объем оперативной памяти: ";
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
						cout << "Введите приблизительную цену: ";
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
				cout << " 1 - Добавить в начало\n 2 - Добавить в конец\n 3 - Добавить после заданного элемента\n 0 - В меню\n > ";
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
			cout << " 1 - Удалить первый элемент\n 2 - Удалить последний элемент\n 3 - Удалить заданный элемент\n > ";
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