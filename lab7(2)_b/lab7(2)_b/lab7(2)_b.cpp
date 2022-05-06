#include "windows.h"
#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int s = 10;
    int sum;
    int mas1[s];
    int mas2[s];
    const char* fname = "f1.bin";
    FeelMas(mas1, s);
    PrintMas(mas1, s);
    cout << endl;
    WriteF1(mas1, s, fname);
    sum = SumElement(mas2, s, fname);
    PrintMas(mas2, s);
    cout << endl;
    cout << "Sum = " << sum << endl;
}
