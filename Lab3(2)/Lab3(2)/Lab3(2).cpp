#include "windows.h"
#include <iostream>
#include "Head.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	const int csize = 20;
	int nsize, size;
	int arr[csize];
	int arr2[csize];
	cout << "������� ������ ������� (�� 20-�� ���������) -> ";
	cin >> size;
	if (size < 1 || size >20) cout << "������" << endl, exit(0);
	cout << "��������� ������: " << endl;
	element(arr, size);
	print(arr, size);
	sort(arr, size);
	nsize = get_size(arr, size);
	if (nsize < 1) cout << "��� ������������� ������ ��������� ", exit(0);
	second_Array(arr, arr2, size);
	cout << "������ ������: " << endl;
	print(arr2, nsize);
	cout << endl << endl;
}
