#include <windows.h>
#include <iostream>
#include <string>
#include <string.h>
#include <ctime>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

struct table
{
    char name[12];
    char sc[12];
    int cnt;
    int sq;
    int sa;
}
arr[10];

void input(int N, table arr[])
{
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << ") " << "Введите: операционную систему, СУБД, мин.объем внешней памяти, мин.объем оперативной памяти, приблизительную цену " << endl;
        cin >> arr[i].name >> arr[i].sc >> arr[i].cnt >> arr[i].sq >> arr[i].sa;
    }
}
void random(int N, table arr[])
{
    srand(time(0));
   
    string names[10] = { "OS/2", "Windows/NT","SCO/Unix", "iOS", "TOS","ARX","Zeta","AIS","ITS","BE/OS" };
    string sign[10] = { "DB2","SQLServer","Oracle","Core/Data","PostgreSQL","Redis","MongoDB","PostgreSQL","MySQL","Access" };
    for (int i = 0; i < N; i++)
    {
        strcpy_s(arr[i].name, names[rand() % 10].c_str());
        strcpy_s(arr[i].sc, sign[rand() % 10].c_str());
        arr[i].cnt = (rand()) /  50 + 25;
        
        arr[i].sq = (rand()) /  300 + 150;
        arr[i].sa = (rand()) / 4000 + 1000;
    }
}

void print(int N, table arr[])
{
    cout << "-----------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "|Конфигурация програмных средств информационных систем                                                                            |\n";
    cout << "|---------------------------------------------------------------------------------------------------------------------------------|\n";
    cout << "| Операционная система |   С У Б Д   | Мин.объем внешней памяти (MB)| Мин.объем оперативной памяти (MB)| Приблизительная цена ($) |\n";
    cout << "|----------------------|-------------|------------------------------|----------------------------------|--------------------------|\n";
    /* вывод строк фактических данных */
    for (int i = 0; i < N; i++)
    {
        printf("| %20s | %11s | %28d | %32d | %24d |\n", arr[i].name, arr[i].sc, arr[i].cnt, arr[i].sq, arr[i].sa);
    }
    /* вывод примечаний */
    printf("|---------------------------------------------------------------------------------------------------------------------------------|\n");
    printf("| Примечание: принималась цена лицензии на 8 пользователей                                                                        |\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
}

void sort(int N, table arr[])
{
    struct table x;
    for (int i = 0; i < N - 1; i++)
    {
        int m = i;
        for (int j = i + 1; j < N; j++)
        {
            if (strcmp(arr[m].name, arr[j].name) > 0) m = j;
        }
        if (m > i)
        {
            strcpy_s(x.name, arr[i].name);
            strcpy_s(x.sc, arr[i].sc);
            x.cnt = arr[i].cnt;
            x.sq = arr[i].sq;
            x.sa = arr[i].sa;

            strcpy_s(arr[i].name, arr[m].name);
            strcpy_s(arr[i].sc, arr[m].sc);
            arr[i].cnt = arr[m].cnt;
            arr[i].sq = arr[m].sq;
            arr[i].sa = arr[m].sa;


            strcpy_s(arr[m].name, x.name);
            strcpy_s(arr[m].sc, x.sc);
            arr[m].cnt = x.cnt;
            arr[m].sq = x.sq;
            arr[m].sa = x.sa;
        }
    }
}

void print_menu()
{
    system("cls");  
    printf("Что мы будем делать?\n");
    printf("1 Заполнить структуру вручную\n");
    printf("2 Заполнить структуру рандомно\n");
    printf("3 Отсортировать структуру\n");
    printf("4 Расспечатать структуру\n");
    printf("5 Выход\n");
    printf(">");
}

int get_variant() {
    int variant;
    cin >> variant;
    if (variant < 1 || variant > 5)
    {
        cout << "Ошибка, введите числа в диапозоне 1-5" << endl;
        return 0;
    }
    else
        return variant;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    bool answer;
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
            cout << "Сколько строк заполнять? --> ";
            cin >> N;
            random(N, arr);
        }break;

        case 3:
        {
            sort(N, arr);
        }break;

        case 4:
        {
            print(N, arr);
        }break;
        }
        if (variant != 5)
        {
            system("pause");
        }
    } while (variant != 5);

    return 0;
}
