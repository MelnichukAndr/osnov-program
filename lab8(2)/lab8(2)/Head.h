#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include "Windows.h"
#include <iomanip>
#include "strukt.h"
OS* create_list_by_hand();
OS* create_list_random();
OS* search_by_Os(OS* head, char* Os);
OS* search_by_sybd(OS* head, char* sybd);
OS* search_by_vint(OS* head, int vint);
OS* search_by_ozy(OS* head, int ozy);
OS* search_by_dolor(OS* head, int dolor);
OS* read_from_file();
void print_list(OS* head);
void add_to_begin(OS** head);
void add_to_end(OS* head);
void add_after_element(OS* head);
void delete_first(OS** head);
void delete_last(OS** head);
void delete_element(OS** head);
void sort(OS* head);
void input_in_file(OS* head);
