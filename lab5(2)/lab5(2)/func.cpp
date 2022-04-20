#include "Head.h"


void fill_arr(int* arr, int size)
{

    short j1=0, j2=size-1;
    short dd=1;
    int z = 0;
    int k = 1;


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
           if ((j < j1) || (j > j2))
                *(arr + i * size + j) = k++;
            else
                *(arr + i * size + j) = 0;
        
        
        if ((z == 0) || (z == 3))
        {
            j1 += dd;
            j2 -= dd;
        }
        if (j1 + 1 == j2)
            z++;
        if (z == 2)
        {
            z++;
            dd = -dd;
        }

        if (j1 == j2) dd = -dd;
    }
}

void print_arr(int* arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(4) << *(arr + i * size + j);
        }
        cout << endl << endl;
    }
}



void alloc_mat(int**& m, int size)
{
    m = new int* [size];
    for (int i = 0; i < size; i++)
    {
        *(m + i) = new int[size];
    }
}

void release_mat(int**& m, int size)
{
    for (int i = 0; i < size; i++)
        delete[] * (m + i);

    delete[] m;
}

void fill_mat(int** m, int size) {
  
    short j1 = 0, j2 = size - 1;
    short dd = 1;
    int z = 0;
    int k = 1;


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            if ((j < j1) || (j > j2))
                *(*(m + i) + j) = k++;
            else
                *(*(m + i) + j) = 0;


        if ((z == 0) || (z == 3))
        {
            j1 += dd;
            j2 -= dd;
        }
        if (j1 + 1 == j2)
            z++;
        if (z == 2)
        {
            z++;
            dd = -dd;
        }

        if (j1 == j2) dd = -dd;
    }
}
void print_mat(int** m, int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(4) << *(*(m + i) + j);
        }
        cout << endl << endl;
    }
}
