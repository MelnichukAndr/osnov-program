#include "S.h"





void print_menu()
{
    system("cls");
    printf("��� �� ����� ������?\n");
    printf("1 - ���� � ������ \n   ");
    printf("2 - ���� ��������� �������\n");
    printf("3 - ������� ������\n");
    printf("4 - ������� ������ ������\n");
    printf("5 - ������� ������\n");
    printf("6 - �����\n");
    printf(">");
}

int get_variant() {
    int variant;
    cin >> variant;
    if (variant < 1 || variant > 6)
    {
        cout << "������, ������� ����� � ��������� 1-4" << endl;
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
				cout << " 1 - �������� ������ � ������ �����\n 2 - �������� � ����� �����\n 3 - � ����\n -->";
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
				cout << " 1 - �������� ������ � ������ �����\n 2 - �������� � ����� �����\n 3 - � ����\n -->";
				cin >> f;
				if (f != 3) {
					InputFirmRandom(fname, f);
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
}

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	char fname[] = "Firms.txt";

    menu();

    return 0;
}
