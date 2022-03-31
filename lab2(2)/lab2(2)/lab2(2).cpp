#include "V_OS.h"

table arr[10];

void menu()
{
    int N;
    int variant;
    do
    {
        print_menu();
        variant = get_variant();
        switch (variant)
        {
        case 1:
        {
            cout << "Сколько строк заполнять? --> ";
            cin >> N;
            input(N, arr);
        }break;

        case 2:
        {
            sort(N, arr);
        }break;

        case 3:
        {
            print(N, arr);
        }break;
        }
        if (variant != 4)
        {
            system("pause");
        }
    } while (variant != 4);
}


int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    menu();

    return 0;
}
