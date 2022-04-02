#include "windows.h"
#include <iostream>
#include "Head_b.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    const int size = 20;
    int a;
    int startsize = 0;
    srand(time(0));
    int Asize, Bsize = 0, Csize = 0, Dsize = 0;
    cout << "Введите размер массива(до 20) -> ";
    cin >> Asize;
    int A[size];
    int A2[size];
    int B[size];
    int C[size];
    int D[size];
    if (Asize < 1 || Asize > size) cout << "Ошибка ", exit(0);
    cout << "Массив A: " << endl;
    element(A, Asize);
    cop(A, A2, Asize);
    print(A, Asize);
    Bsize = get_size_b(A, Asize);
    getelement_B(A, B, Asize);
    Csize = get_size_c(A, Asize);
    getelement_C(A, C, Asize);
    Dsize = get_size_d(A, Asize);
    getelement_D(A, D, Asize);
    EditArray(A, D, Dsize, &startsize);
    EditArray(A, B, Bsize, &startsize);
    EditArray(A, C, Csize, &startsize);
    while (true) {
        cout << "0 - Напечатать A\n1 - Напечатать B\n2 - Напечатать C\n3 - Напечатать D\n4 - Напечатать отредактированный массив A\n5 - Напечатать все\n9 - Выход\n -->";
        cin >> a;
        switch (a) {
        case 0:
            system("cls");
            cout << endl;
            cout << "Массив A: ";
            print(A2, Asize);
            break;
        case 1:
            system("cls");
            if (Bsize == 0) cout << "нет отрицательных чисел ";
            cout << endl;
            cout << "Массив B: ";
            print(B, Bsize);
            break;
        case 2:
            system("cls");
            if (Csize == 0) cout << "нет положительных чисел ";
            cout << endl;
            cout << "Массив C: ";
            print(C, Csize);
            break;
        case 3:
            system("cls");
            if (Dsize == 0) cout << "нет 0 ";
            cout << endl;
            cout << "Массив D: ";
            print(D, Dsize);
            break;
        case 4:
            system("cls");
            cout << "Массив A: " << endl;
            print(A, Asize);
            break;
        case 5:
            system("cls");
            cout << "Начальный A: ";
            cout << endl;
            print(A2, Asize);
            cout << "Массив B: ";
            cout << endl;
            print(B, Bsize);
            cout << "Массив C: ";
            cout << endl;
            print(C, Csize);
            cout << "Массив D: ";
            cout << endl;
            print(D, Dsize);
            cout << "Массив A: ";
            cout << endl;
            print(A, Asize);
            break;
        case 9:
            exit(0);
        default:
            cout << endl << "Ошибка", exit(0);
        }
    }
    cout << endl << endl;
}