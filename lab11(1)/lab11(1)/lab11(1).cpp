#include <iostream>
using namespace std;
#pragma warning(default:4716)
#define n 10


double sredar(int i, int arr[])
{
	static int S;
	static int k;
	static int sred;
	if (i > 0)
		sredar(i - 1, arr);
		
	if ((arr[i] < 0) && (i<n))
	{
		S += arr[i];
		k++;
		sred = S / k;
	}
	else if(i == n)
		cout << sred;

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

	cout << "Начальный массив" << endl;
	for (i = 0; i < n; cout << arr[i++] << " ");
	cout << endl << endl;
	cout << "Среднее арефметическое " << endl << endl ;
	sredar(i, arr);
	cout << endl << endl << endl;
	return 0;
}