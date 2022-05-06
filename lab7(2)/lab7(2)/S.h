#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <string.h>
#include <ctime>
#include "strukts.h"

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

void InputFirmByHand(char* fname, short fb);
void InputFirmRandom(char* fname, short fb);
void PrintFirm(char* fname);
void PrintOneFirm(char* fname);
void ClearData(char* fname);