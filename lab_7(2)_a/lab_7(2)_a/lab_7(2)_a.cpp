#include "windows.h"
#include "Header.h"
#include <iostream>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    const int s = 10;
    int mas1[s];
    int mas2[s];
    int x = 0;
    char fname[] = "f1.txt";
    char f2name[] = "f2.txt";
    FeelMas(mas1, s);
    WriteF1(fname, mas1, s);
    WriteF2(fname, f2name, mas2, s);
    cout << "Mas1:  ";
    PrintMas(mas2, s);
    cout << endl;
    cout << "x: ";
    PrintVar(x, fname);
    cout << endl;
}
