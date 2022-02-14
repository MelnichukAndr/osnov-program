// lab1(2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
    char sc;
    char cnt[12];
    float sq;
}
arr[10];

void input(int N, table arr[])
{
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << ") " << "�������: ������������ �������, ����, ���.����� ������� ������, ���.����� ����������� ������, ��������������� ���� " << endl;
        cin >> arr[i].name >> arr[i].sc >> arr[i].cnt >> arr[i].sq;
    }
}
void random(int N, table arr[])
{
    srand(time(0));
    string symbol[3] = { 'T','�','�' };
    string names[10] = { "���������", "����","�����", "�����", "�����","��������","������","������","��������","������" };
    string sign[10] = { "0-100","0-10","0-20","15-30","35-50","40-70","10-40","0-25","75-100","15-65" };
    for (int i = 0; i < N; i++)
    {
        strcpy_s(arr[i].name, names[rand() % 10].c_str());
        strcpy_s(arr[i].cnt, sign[rand() % 10].c_str());
        arr[i].sc = symbol[rand() % 3];
        arr[i].sq = (double)(rand()) / RAND_MAX * 100;
    }
}

void print(int N, table arr[])
{
    cout << "---------------------------------------------------\n";
    cout << "|   ������������ ����������������� �����������    |\n";
    cout << "|-------------------------------------------------|\n";
    cout << "| ��������    | ��� | ��������� (%)  | �����������|\n";
    cout << "|             |     |                |            |\n";
    cout << "|-------------|-----|----------------|------------|\n";

    for (int i = 0; i < N; i++)
    {
        printf("| %-11s | %-3c | %-14s | %-10.3f |\n", arr[i].name, arr[i].sc, arr[i].cnt, arr[i].sq);
    }
    cout << "---------------------------------------------------\n";
    cout << "|-------------------------------------------------|\n";
    cout << "|  ����������: � - �������,                       |\n";
    cout << "|              � - ����������������� ���������,   |\n";
    cout << "|              � - ������ ���������               |\n";
    cout << "---------------------------------------------------\n";
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

void print_menu()
{
    system("cls");  // ������� �����
    printf("��� �� ����� ������?\n");
    printf("1. ��������� ��������� �������\n");
    printf("2. ��������� ��������� ��������\n");
    printf("3. ������������� ���������\n");
    printf("4. ������������ ���������\n");
    printf("5. �����\n");
    printf(">");
}

int get_variant() {
    int variant;
    cin >> variant;
    if (variant < 1 || variant > 5)
    {
        cout << "������, ������� ����� � ��������� 1-5" << endl;
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
            cout << "������� ����� ���������? --> ";
            cin >> N;
            input(N, arr);
        }break;

        case 2:
        {
            cout << "������� ����� ���������? --> ";
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
