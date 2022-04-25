#include <windows.h>
#include <iostream>
#include <iomanip>
#include "Header5_2(a).h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    system("color B");
    int size, sum = 0, mult = 1, s = 2, a;
    cout << "Введите размер N * N(до 5-ти)-> ";
    cin >> size;
    if (size < 1) cout << "Размерность слишком маленькая", exit(0);
    else if (size > 5) cout << "Размерность слишком большая", exit(0);
    int** arr = new int* [size];
    int* minarr = new int[size];
    int* maxarr = new int[size];
    int* s_arr;
    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }
    FeelArray(arr, size);
    PrintArray_two(arr, size);
    s_arr = Func(arr, size, minarr, maxarr, &sum, &mult);
    while (true) {
        cout << "\n\n1 - Вывести minarr\n2 - Вывести maxarr\n3 - Вывести функцию по заданию\n0 - Выход\n--> ";
        cin >> a;
        switch (a) {
        case 1:
            system("cls");
            PrintArray_two(arr, size);
            cout << endl;
            cout << "Minarr:  ";
            PrintArray_one(minarr, size);
            break;
        case 2:
            system("cls");
            PrintArray_two(arr, size);
            cout << endl;
            cout << "Maxarr:  ";
            PrintArray_one(maxarr, size);
            break;
        case 3:
            system("cls");
            PrintArray_two(arr, size);
            cout << endl;
            cout << "Sum =  " << *s_arr << endl;
            cout << "Mult = " << *(s_arr + 1) << endl;
            break;
        case 0:
            exit(0);
        default:
            system("cls");
            cout << endl << "Error" << endl;
            break;
        }
    }

    for (int i = 0; i < size; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] minarr;
    delete[] maxarr;
    delete[] s_arr;
}