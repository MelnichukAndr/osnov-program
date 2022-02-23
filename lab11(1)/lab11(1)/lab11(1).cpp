// lab11(1).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;




double sredar(int i, int arr[] )
{
	static int res = 0;
	static int size = 0;
	--i;
	if (arr[i] < 0)
	{
		if (i == -1) 
		{
			return(res) / size;
		}
		size++;
		res += arr[i];
	}
	return sredar(i, arr);
}


void print_menu()
{
	system("cls");
	printf("Что мы будем делать?\n");
	printf("1 Заполнить структуру вручную\n");
	printf("2 Заполнить структуру рандомно\n");
	printf(">");
}
int get_variant() {
	int variant;
	cin >> variant;
	if (variant < 1 || variant > 2)
	{
		cout << "Ошибка, введите числа в диапозоне 1-2" << endl;
		return 0;
	}
	else
		return variant;
}
int main()
{
	srand(time(0));
	setlocale(0, "rus");
	const int n = 10;
	int i;
	int arr[n];
	int variant;
	print_menu();
	variant = get_variant();
	if (variant == 1)
		for (i = 0; i < n; i++)
			cin >> arr[i];
		else
			if(variant == 2)
				{
					for ( i = 0; i < n; arr[i++] = rand() % 20 - 10);
				}

	cout << "Начальный массив" << endl;
	for ( i = 0; i < n; cout << arr[i++] << " ");
	cout << endl << endl;
	cout << "Среднее арефметическое " << sredar(i, arr) << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
