#include "Head.h"

#define ARRAY

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int size;

#ifdef ARRAY
    cout << "������� ����������� ������� > ";
    cin >> size;
    if (size <= 0 || size > 10)
    {
        cout << "������� �������� �� 1 �� 10";
    }

    int* arr = new int[size * size];

    fill_arr(arr, size);
    cout << "����������� ���������� ������\n";
    print_arr(arr, size);
    buble_sort(arr, size);
    cout << "\n";

    cout << "\n";
    cout << "������ �� ������\n";
    sort_arr(arr, size);
    cout << "\n\n";


    cout << "\n\n";



    delete[]arr, arr = nullptr;

#else
    int size2;


    cout << "������� ����������  > ";
    cin >> size2;

    int** matrix = nullptr;

    alloc_mat(matrix, size2);

    fill_mat(matrix, size2);
    cout << "����������� �������\n";
    print_mat(matrix, size2);

    buble2_sort(matrix, size2);
    cout << "\n\n";

    cout << "������� �� ������\n";
    sort_mat(matrix, size2);

    release_mat(matrix, size2);
#endif

}
