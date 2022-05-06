#include "S.h"





void print_menu()
{
    system("cls");
    printf("Что мы будем делать?\n");
    printf("1 - Ввод с экрана \n   ");
    printf("2 - Ввод случайным образом\n");
    printf("3 - Вывести запись\n");
    printf("4 - Вывести полный список\n");
    printf("5 - Стереть данные\n");
    printf("6 - Выйти\n");
    printf(">");
}

int get_variant() {
    int variant;
    cin >> variant;
    if (variant < 1 || variant > 6)
    {
        cout << "Ошибка, введите числа в диапозоне 1-4" << endl;
        return 0;
    }
    else
        return variant;
}
void menu()
{
    int N;
    int variant;
	short f; 
    do
    {
        print_menu();
        variant = get_variant();
		switch (variant)
		{
		case 1:
		{

			while (true)
			{
				system("cls");
				cout << " 1 - Добавить запись в начало файла\n 2 - Добавить в конец файла\n 3 - В меню\n -->";
				cin >> f;
				if (f != 3)
				{
					InputFirmByHand(fname, f);
				}
				else
				{
					system("cls");
					break;
				}
			}
			break;
		case 3:
			system("cls");
			f = 2;
			PrintOneFirm(fname);
			cout << endl << endl;
			break;
		case 4:
			system("cls");
			f = 1;
			PrintFirm(fname);
			cout << endl << endl;
			break;
		case 2:
			system("cls");
			while (true) {
				system("cls");
				cout << " 1 - Добавить запись в начало файла\n 2 - Добавить в конец файла\n 3 - В меню\n -->";
				cin >> f;
				if (f != 3) {
					InputFirmRandom(fname, f);
					cout << endl << "Запись успешно добавлена" << endl;
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
			cout << "Данные стерты" << endl;
			break;
		case 0:
			exit(0);
			break;
		default:
			system("cls");
			cout << "Ошибка" << endl;
			break;
		}

		}

	}
}

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	char fname[] = "Firms.txt";

    menu();

    return 0;
}
