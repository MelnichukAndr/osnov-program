﻿#include "Head.h"


void fill_arr(int* arr, int size)
{

    short j1=0, j2=size-1;
    short dd=1;
    int z = 0;


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
           if ((j < j1) || (j > j2))
                *(arr + i * size + j) = rand() % 100;
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
        cout << endl;
    }
}


void sort_arr(int* arr, int size)
{
    short j1 = 0, j2 = size - 1;
    short dd = 1;
    int z = 0;
   
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)

                    if ((j < j1) || (j > j2))
                    {
                        if ((*(arr + i * size + j) != 0) && (*(arr + i+1 * size + j+1)!=0))
                           if (*(arr + i+1 * size + j+1) < *(arr + i * size + j))
                            swap(*(arr + i + 1 * size + j+1), *(arr + i * size + j));

                    }
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

                if (j1 == j2)
                    dd = -dd;

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
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            *(*(m + i) + j) = rand() % 100;
        }
    }
}
void print_mat(int** m, int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "    " << *(*(m + i) + j);
        }
        cout << endl;
    }
}
void buble2_sort(int** m, int size)
{

    for (int a = 0; a < size; a++)
    {
        for (int b = 0; b < size; b++)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    if (*(*(m + a) + b) < *(*(m + i) + j))
                    {
                        int temp = *(*(m + a) + b);
                        *(*(m + a) + b) = *(*(m + i) + j);
                        *(*(m + i) + j) = temp;
                    }
                }
            }
        }
    }
}

void sort_mat(int** m, int size)
{
    int i, j, k, edge, num = (size * size) - 1;
    int** m2 = nullptr;
    alloc_mat(m2, size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            *(*(m2 + i) + j) = *(*(m + i) + j);
        }
    }
    int** ptr = m2;

    for (k = 0; k < size / 2; k++) { //ñëîè

        edge = size - 1 - k;

        int b = edge;
        int z = 2;
        int h = 0;
        for (i = edge; i > k; i--)
            *(*(m + i) + k) = *(*(m2 + edge) + i);


        for (j = k; j < edge; j++, b--) {
            *(*(m + k) + j) = *(*(m2 + b) + h);
            h = 2;
        }

        for (i = k, b = edge - 1; i < edge; i++, num--)
            *(*(m + i) + edge) = *(*(m2 + b) + i);

        for (j = edge; j > k; j--, num--)
            *(*(m + edge) + j) = *(*(m2 + k) + j);
    }

    if (size % 2)
        *(*(m + size / 2) + size / 2) = **ptr;//öåíòàëüíûé ýëåìåíò

    for (i = 0; i < size; i++)
    {
        for (j = size - 1; j >= 0; j--) {
            printf("%6d", *(*(m + i) + j));
        }
        printf("\n");
    }

}