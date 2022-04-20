#pragma once
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <time.h>

using namespace std;

void fill_arr(int* a, int size);
void print_arr(int* a, int size);

void sort_arr(int*, int);

void alloc_mat(int**& m, int size);
void release_mat(int**& m, int size);

void fill_mat(int** m, int size);
void print_mat(int** m, int size);
void buble2_sort(int** m, int size);
void sort_mat(int** m, int size); 
