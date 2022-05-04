#define _CRT_NO_WARNINGS_
#include "Windows.h"
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int max_len = 160;
    char str1[max_len], str2[max_len];
    int a;
    while (true) {
        system("cls");
        cout << "Введите первую строку: ";
        gets_s(str1);
        if (strlen(str1) < 2) {
            cout << "Строка должна состоять, хотя бы из двух символа" << endl;
            system("pause");
            continue;
        }
        cout << "Введите вторую строку: ";
        gets_s(str2);
        if (strlen(str2) < 2) {
            cout << "Строка должна состоять, хотя бы из двух символа" << endl;
            system("pause");
            continue;
        }
        cout << "\n1 - вставить первую строку во вторую\n2 - вставить вторую строку в первую\n3 - Выход\n--> ";
        cin >> a;
        cin.clear();
        cin.ignore();
        switch (a) {
        case 1:
            Func(str2, str1, max_len);
            puts(str2);
            system("pause");
            break;
        case 2:
            Func(str1, str2, max_len);
            puts(str1);
            system("pause");
            break;
        case 3:
            exit(0);
        default:
            cout << endl << "Введите от 1 до 3" << endl;
        }
    }
}