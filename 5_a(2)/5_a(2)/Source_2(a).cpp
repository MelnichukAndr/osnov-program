#include <iostream>
#include <iomanip>
#include "Header5_2(a).h"
using namespace std;
void FeelArray(int** arr, const int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            *(*(arr + i) + j) = rand() % 10;
        }
    }
}

void PrintArray_one(int* arr, const int size) {
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << *(arr + i);
    }
    cout << endl;
}

void PrintArray_two(int** arr, const int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(4) << *(*(arr + i) + j);
        }
        cout << endl;
    }
    cout << endl;
}

int* Func(int** arr, int size, int* minarr, int* maxarr, int* sum, int* mult) {
    const short s = 2;
    int* sub_arr = new int[s];
    for (int i = 0; i < size; i++)
    {
        *(maxarr + i) = INT_MIN;
        for (int j = 0; j < size; j++)
        {
            if (*(*(arr + i) + j) > *(maxarr + i)) {
                *(maxarr + i) = *(*(arr + i) + j);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        *(minarr + i) = INT_MAX;
        for (int j = 0; j < size; j++)
        {
            if (*(*(arr + j) + i) < *(minarr + i)) {
                *(minarr + i) = *(*(arr + j) + i);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                *sum += *(*(arr + i) + j);
            if (i + j == size - 1)
                *mult *= *(*(arr + i) + j);
        }
    }
    *(sub_arr) = *sum;
    *(sub_arr + 1) = *mult;
    return sub_arr;
}