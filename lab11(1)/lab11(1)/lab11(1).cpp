#include <iostream>
using namespace std;
#define n 10


double sredar(int i, int arr[])
{
	static int k;
	static int sym;
	static int rez;
	if (arr[i] >= 0);
	{
		sredar(i+1, arr );
			k++;
	}
	for (i = 0; i < n; arr[i++]);
	{
		sym += arr[i];
	}
	rez = sym / (i /*+ 1*/ - k);
}


void print_menu()
{
	system("cls");
	printf("��� �� ����� ������?\n");
	printf("1 ��������� ��������� �������\n");
	printf("2 ��������� ��������� ��������\n");
	printf(">");
}
int get_variant() {
	int variant;
	cin >> variant;
	if (variant < 1 || variant > 2)
	{
		cout << "������, ������� ����� � ��������� 1-2" << endl;
		return 0;
	}
	else
		return variant;
}
int main()
{
	srand(time(0));
	setlocale(0, "rus");
	
	int i;
	int arr[n];
	int variant;
	print_menu();
	variant = get_variant();
	if (variant == 1)
		for (i = 0; i < n; i++)
			cin >> arr[i];
	else
		if (variant == 2)
		{
			for (i = 0; i < n; arr[i++] = rand() % 20 - 10);
		}

	cout << "��������� ������" << endl;
	for (i = 0; i < n; cout << arr[i++] << " ");
	cout << endl << endl;
	cout << "������� �������������� " << sredar(i, arr) << endl;
	return 0;
}