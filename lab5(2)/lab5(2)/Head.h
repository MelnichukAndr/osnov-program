#pragma once
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <time.h>

using namespace std;

void fill_arr(int* a, int size);
void print_arr(int* a, int size);



void alloc_mat(int**& m, int size);
void release_mat(int**& m, int size);

void fill_mat(int** m, int size);
void print_mat(int** m, int size);
