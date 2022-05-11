#include "Windows.h"
#include <iostream>
#include "Header_v.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    int size, a;
    cout << "Введите размер N (до 20-ти) -->";
    cin >> size;
    if (size < 1 || size>20) cout << "Ошибка", exit(0);
    int* arr = new int[size];
    while (true) {
        cout << "\n1 - Пузырек\n2 - Пирамида\n3 - Выборка\n0 - Выход\n --> ";
        cin >> a;
        switch (a) {
        case 1:
            system("cls");
            element(arr, size);
            print(arr, size);
            cout << endl;
            ChoseSort(arr, size, BubbleSort);
            print(arr, size);
            break;
        case 2:
            system("cls");
            element(arr, size);
            print(arr, size);
            cout << endl;
            ChoseSort(arr, size, HeapSort);
            print(arr, size);
            break;
        case 3:
            system("cls");
            element(arr, size);
            print(arr, size);
            cout << endl;
            ChoseSort(arr, size, SelectionSort);
            print(arr, size);
            break;
        case 0:
            system("cls");
            exit(0);
        default:
            system("cls");
            cout << endl << "Error" << endl;
            break;
        }
    }
    delete[] arr, arr = nullptr;
}