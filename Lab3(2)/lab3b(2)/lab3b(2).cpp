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
    cout << "������� ������ �������(�� 20) -> ";
    cin >> Asize;
    int A[size];
    int A2[size];
    int B[size];
    int C[size];
    int D[size];
    if (Asize < 1 || Asize > size) cout << "������ ", exit(0);
    cout << "������ A: " << endl;
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
        cout << "0 - ���������� A\n1 - ���������� B\n2 - ���������� C\n3 - ���������� D\n4 - ���������� ����������������� ������ A\n5 - ���������� ���\n9 - �����\n -->";
        cin >> a;
        switch (a) {
        case 0:
            system("cls");
            cout << endl;
            cout << "������ A: ";
            print(A2, Asize);
            break;
        case 1:
            system("cls");
            if (Bsize == 0) cout << "��� ������������� ����� ";
            cout << endl;
            cout << "������ B: ";
            print(B, Bsize);
            break;
        case 2:
            system("cls");
            if (Csize == 0) cout << "��� ������������� ����� ";
            cout << endl;
            cout << "������ C: ";
            print(C, Csize);
            break;
        case 3:
            system("cls");
            if (Dsize == 0) cout << "��� 0 ";
            cout << endl;
            cout << "������ D: ";
            print(D, Dsize);
            break;
        case 4:
            system("cls");
            cout << "������ A: " << endl;
            print(A, Asize);
            break;
        case 5:
            system("cls");
            cout << "��������� A: ";
            cout << endl;
            print(A2, Asize);
            cout << "������ B: ";
            cout << endl;
            print(B, Bsize);
            cout << "������ C: ";
            cout << endl;
            print(C, Csize);
            cout << "������ D: ";
            cout << endl;
            print(D, Dsize);
            cout << "������ A: ";
            cout << endl;
            print(A, Asize);
            break;
        case 9:
            exit(0);
        default:
            cout << endl << "������", exit(0);
        }
    }
    cout << endl << endl;
}