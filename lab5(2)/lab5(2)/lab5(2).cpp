#include "Head.h"

#define ARRAY

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int size;

#ifdef ARRAY
    cout << "Введите размерность массива > ";
    cin >> size;
    if (size <= 0 || size > 10)
    {
        cout << "Введите значение от 1 до 10";
    }

    int* arr = new int[size * size];

    fill_arr(arr, size);
    cout << "Изначальный одномерный массив\n";
    print_arr(arr, size);
    buble_sort(arr, size);
    cout << "\n";

    cout << "\n";
    cout << "Массив по заднию\n";
    sort_arr(arr, size);
    cout << "\n\n";


    cout << "\n\n";



    delete[]arr, arr = nullptr;

#else
    int size2;


    cout << "Введите количество  > ";
    cin >> size2;

    int** matrix = nullptr;

    alloc_mat(matrix, size2);

    fill_mat(matrix, size2);
    cout << "Изначальная матрица\n";
    print_mat(matrix, size2);

    buble2_sort(matrix, size2);
    cout << "\n\n";

    cout << "Матрица по заднию\n";
    sort_mat(matrix, size2);

    release_mat(matrix, size2);
#endif

}
