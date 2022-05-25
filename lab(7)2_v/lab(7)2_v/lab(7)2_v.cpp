#include "windows.h"
#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    const char fname[] = "File.bin";
    int sum;
    WriteFile(fname);
    PrintFile(fname);
    cout << endl;
    cout << endl;
    sum = Sum(fname);
    cout << "Sum = " << sum << endl << endl;
    FindMin(fname);
    PrintFile(fname);
    cout << endl;
}