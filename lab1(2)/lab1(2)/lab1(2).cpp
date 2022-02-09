// lab1(2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <windows.h>
#include <iostream>
#include <string>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

struct table
{
    char name[12];
    char sc[10];
    double cnt;
    double sq;
    double sa;
}
arr[10];

int input()
{
    int n;
    for (n = 0; n < 6; n++)
    {
        cout << n + 1 << " " << "Введите: операционную систему, СУБ, мин.объем внешней памяти (MB), мин.объем оперативной памяти (MB), приблизительную цену ($) >" << endl;
        cin >> arr[n].name >> arr[n].sc >> arr[n].cnt >> arr[n].sq >> arr[n].sa;
    }
    return n;
}

void print(int n)
{
    cout << "---------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "|Конфигурация програмных средств информационных систем                                                                          |\n";
    cout << "|-------------------------------------------------------------------------------------------------------------------------------|\n";
    cout << "| Операционная система |  С У Б Д  | Мин.объем внешней памяти (MB)| Мин.объем оперативной памяти (MB)| Приблизительная цена ($) |\n";
    cout << "|----------------------|-----------|------------------------------|----------------------------------|--------------------------|\n";

    for (int i = 0; i < n; i++)
    {
        printf("| %20s | %9s | %28d | %32d | %24d |\n", arr[i].name, arr[i].sc, arr[i].cnt, arr[i].sq, arr[i].sa);
    }
    cout << "|-------------------------------------------------------------------------------------------------------------------------------|\n";
    cout << "| Примечание: принималась цена лицензии на 8 пользователей                                                                      |\n";
    cout << "---------------------------------------------------------------------------------------------------------------------------------\n";
}

void sort(int n)
{
    struct table x;
    for (int i = 0; i < n - 1; i++)
    {
        int m = i;
        for (int j = i + 1; j < n; j++)
        {
            /* если текущий элемент > минимального, он становится минимальным */
            if (strcmp(arr[m].name, arr[j].name) > 0) m = j;
        }
        if (m > i)
        {
            /* перестановка элементов */
            strcpy_s(x.name, arr[i].name);
            x.sc = arr[i].sc;
            strcpy_s(x.cnt, arr[i].cnt);
            x.sq = arr[i].sq;

            strcpy_s(arr[i].name, arr[m].name);
            arr[i].sc = arr[m].sc;
            strcpy_s(arr[i].cnt, arr[m].cnt);
            arr[i].sq = arr[m].sq;


            strcpy_s(arr[m].name, x.name);
            arr[m].sc = x.sc;
            strcpy_s(arr[m].cnt, x.cnt);
            arr[m].sq = x.sq;
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;

    n = input();
    sort(n);
    print(n);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
