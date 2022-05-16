#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include "Windows.h"
#include <iomanip>
#include "struct.h"
void create_list_by_hand();
void create_list_random();
void search_by_Os(OS* p, char* Os);
void search_by_sybd(OS* p, char* sybd);
void search_by_vint(OS* p, int vint);
void search_by_ozy(OS* p, int ozy);
void search_by_dolor(OS* p, int dolor);
void read_from_file();
void print_list_end(OS* head);
void print_list_begin(OS* tail);
void add_to_begin();
void add_to_end();
void add_after_element();
void delete_first();
void delete_last();
void delete_element();
void sort();
void input_in_file();

