// RGZ.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <chrono>

#define N 10//Элементов в массиве

using namespace std;
void even_odd_sorting(int arr[], int n);
void merge_sorting(int arr[], int start, int end);
void ordered_array(int arr[], int n);
void reverse_array(int arr[], int n);
void disordered_array(int arr[], int n);
void dur_array(double dur_arr[], int M);
int main()
{
	
	int const M = 700; // Количество циклов
	setlocale(0, "rus");

	int arr[N];
	int reverse_arr[N];
	int disordered_arr[N];
	int disordered_arr_2[N];

	int temp;
	//Упорядоченый массив
	ordered_array(arr, N);
	//Вывод упорядоченого массива
	cout << "Упорядоченный массив :";
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << arr[i];
	}

	//Вызов первой функции
	even_odd_sorting(arr, N);
	cout << endl << "Отсортированый уподорядоченый массив (1 сотривка) :";
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << arr[i];
	}

	//Вызов второй функции

	merge_sorting(arr, 0 , (N-1));
	cout << endl << "Отсортированый уподорядоченый массив (2 сотривка) :";
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << arr[i];
	}
	ordered_array(arr, N);
	cout << endl << endl << endl;

	//Обратный массив
	cout << "Обратный массив :";

	reverse_array(reverse_arr, N);
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << reverse_arr[i];
	}

	//Вызов первой функции
	even_odd_sorting(reverse_arr, N);
	cout << endl << "Отсортированый обратно уподорядоченый массив (1 сотривка) :";
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << arr[i];
	}

	//Возврат в обратный массив

	cout << endl << endl;
	cout << "Проверка заходимого массива :";
	reverse_array(reverse_arr, N);
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << reverse_arr[i];
	}
	cout << endl;



	//Вызов второй функции

	merge_sorting(reverse_arr, 0, (N-1));
	cout << endl << "Отсортированый обратно уподорядоченый массив (2 сотривка) :";
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << reverse_arr[i];
	}
	reverse_array(reverse_arr, N);
	cout << endl << endl << endl;

	cout << "Неупорядоченный массив :";

	disordered_array(disordered_arr, N);
	//Печать неупорядоченого массива
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << disordered_arr[i];
	}
	//Копия неупорядоченого массива

	for (int i = 0; i < N; i++)
	{
		disordered_arr_2[i] = disordered_arr[i];
	}

	//Вызов первой функции
	even_odd_sorting(disordered_arr, N);
	cout << endl << "Отсортированый неуподорядоченый массив (1 сотривка) :";
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << disordered_arr[i];
	}
	//Печать для наглядности, что во вторую сортировку входит неупорядоченый массив
	cout << endl << endl;

	cout << "Проверка заходимого массива :";
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << disordered_arr_2[i];
	}
	cout << endl;
	//Вызов второй функции

	merge_sorting(disordered_arr_2, 0, (N-1));
	cout << endl << "Отсортированый неуподорядоченый массив (2 сотривка) :";
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << disordered_arr_2[i];
	}
	cout << endl;
	disordered_array(disordered_arr, N);

	//Подсчет времени//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	double dur_arr[M];
	double aver_dur = 0;
	cout << endl;

	cout << "Упорядоченный массив" << endl; //1

	ordered_array(arr, N);
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << arr[i];
	}

	for (int i = 0; i < M; i++)
	{
		auto start = std::chrono::high_resolution_clock::now();

		even_odd_sorting(arr, N);									//первая/вторая сортировка     (какой массив в качестве параметра/ N)

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();
	}
	dur_array(dur_arr, M);

	for (int i = 0; i < M; i++)
	{
		//std::cout << "Duration " << i << " = " << dur_arr[i] << "s" << endl;
		if (i >= 100 && i < 600)aver_dur += dur_arr[i];
	}

	cout << "\t";
	printf("Duration 1.1 = %.8lf\n", aver_dur / 500);

	aver_dur = 0; // Обнуляем среднее значение
	ordered_array(arr, N); //Перезадаем массив

	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << arr[i];
	}

	for (int i = 0; i < M; i++)
	{
		auto start = std::chrono::high_resolution_clock::now();


		merge_sorting(arr,1, N);									//первая/вторая сортировка     (какой массив в качестве параметра/ N)

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();
	}

	dur_array(dur_arr, M); //Сортировка по убыванию подсчитаных значений времени

	for (int i = 0; i < M; i++)
	{
		//std::cout << "Duration " << i << " = " << dur_arr[i] << "s" << endl;
		if (i >= 100 && i < 600) aver_dur += dur_arr[i];
	}

	cout << "\t";
	printf("Duration 1.2 = %.8lf\n", aver_dur / 500);

	aver_dur = 0; //Обнуляем среднее значение
	cout << endl << endl;


	cout << "Обратно упорядоченный массив" << endl;   //2

	reverse_array(reverse_arr, N);
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << reverse_arr[i];
	}

	for (int i = 0; i < M; i++)
	{
		auto start = std::chrono::high_resolution_clock::now();

		even_odd_sorting(reverse_arr, N);									//первая/вторая сортировка     (какой массив в качестве параметра/ N)

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();
	}

	dur_array(dur_arr, M); //Сортировка по убыванию подсчитаных значений времени

	for (int i = 0; i < M; i++)
	{
		//std::cout << "Duration " << i << " = " << dur_arr[i] << "s" << endl;
		if (i >= 100 && i < 600) aver_dur += dur_arr[i];
	}

	cout << "\t";
	printf("Duration 2.1 = %.8lf\n", aver_dur / 500);

	aver_dur = 0; //Обнуляем среднее значение

	reverse_array(reverse_arr, N); //Перезадаем массив
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << reverse_arr[i];
	}

	for (int i = 0; i < M; i++)
	{
		auto start = std::chrono::high_resolution_clock::now();


		merge_sorting(reverse_arr, 1 , N);									//первая/вторая сортировка     (какой массив в качестве параметра/ N)

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();
	}

	dur_array(dur_arr, M); //Сортировка по убыванию подсчитаных значений времени

	for (int i = 0; i < M; i++)
	{
		//std::cout << "Duration " << i << " = " << dur_arr[i] << "s" << endl;
		if (i >= 100 && i < 600) aver_dur += dur_arr[i];
	}

	cout << "\t";
	printf("Duration 2.2 = %.8lf\n", aver_dur / 500);

	aver_dur = 0; //Обнуляем среднее значение
	cout << endl << endl;


	cout << "Неупорядоченный массив" << endl; //3

	disordered_array(disordered_arr, N);

	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << disordered_arr[i];
	}

	for (int i = 0; i < N; i++)  //Копия неупорядоченого массива
	{
		disordered_arr_2[i] = disordered_arr[i];
	}

	for (int i = 0; i < M; i++)
	{
		auto start = std::chrono::high_resolution_clock::now();

		even_odd_sorting(disordered_arr, N);									//первая/вторая сортировка     (какой массив в качестве параметра/ N)

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();
	}
	dur_array(dur_arr, M); //Сортировка по убыванию подсчитаных значений времени

	for (int i = 0; i < M; i++)
	{
		//std::cout << "Duration " << i << " = " << dur_arr[i] << "s" << endl;
		if (i >= 100 && i < 600) aver_dur += dur_arr[i];
	}

	cout << "\t";
	printf("Duration 3.1 = %.8lf\n", aver_dur / 500);

	aver_dur = 0; //Обнуляем среднее значение

	for (int i = 0; i < N; i++) //Копия массива с которым мы заходим в функцию
	{
		cout << setw(4) << disordered_arr_2[i];
	}

	for (int i = 0; i < M; i++)
	{
		auto start = std::chrono::high_resolution_clock::now();


		merge_sorting(disordered_arr_2, 1 , N);									//первая/вторая сортировка     (какой массив в качестве параметра/ N)

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();
	}
	dur_array(dur_arr, M);  //Сортировка по убыванию подсчитаных значений времени

	for (int i = 0; i < M; i++)
	{
		//std::cout << "Duration " << i << " = " << dur_arr[i] << "s" << endl;
		if (i >= 100 && i < 600) aver_dur += dur_arr[i];
	}

	cout << "\t";
	printf("Duration 3.2 = %.8lf\n", aver_dur / 500);

	cout << endl << endl;
}






//Функция задающая упорядоченый массив
void ordered_array(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
}
//Функция задающая обратно упорядоченый массив
void reverse_array(int arr[], int n)
{
	int i;
	int k = n;
	for (int i = 0; i < n; i++, --k)
	{
		arr[i] = k;
	}
}
//Функция задающая неупорядоченый массив
void disordered_array(int arr[], int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < n; i++)
	{
		swap(arr[i], arr[rand() % n]);

	}
}
//Четно-нечетная сортировка
void even_odd_sorting(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int i1 = (i % 2) ? 0 : 1; i1 + 1 < n; i1 += 2) // (i % 2) ? 0 : 1 возвращает 1 если i четное, 0 - если i не четное
		{
			if (arr[i1] > arr[i1 + 1])
			{
				int temp = arr[i1];
				arr[i1] = arr[i1 + 1];
				arr[i1 + 1] = temp;
				/*swap(arr[i1], arr[i1 + 1]);*/
			}
		}
	}
}
//Сортировка слиянием

void merge_sorting(int arr[], int start, int end)
{
	if (end == start)
		return;
	if ((end - start) == 1) {
		if (arr[end] < arr[start])
		{
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
		}
		return;
	}



	

	int mid = (end + start) / 2;
	merge_sorting(arr, start,mid);
	merge_sorting(arr,mid+ 1, end);
	
	int buf[N];
	int xl = start;
	int xr = mid + 1;
	int cur = 0;
	while ((end - start) + 1 != cur) {
		if (xl > mid)
			buf[cur++] = arr[xr++];
		else if (xr > end)
			buf[cur++] = arr[xl++];
		else if (arr[xl] > arr[xr])
			buf[cur++] = arr[xr++];
		else buf[cur++] = arr[xl++];

	}
	for (int i = 0; i < cur; i++)
		arr[i + start] = buf[i];

	


}
//Сортировка по убыванию подсчитаных значений времени
void dur_array(double dur_arr[], int M)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = i + 1; j < M; j++)
		{
			if (dur_arr[i] < dur_arr[j])
			{
				int temp = dur_arr[i];
				dur_arr[i] = dur_arr[j];
				dur_arr[j] = temp;
				/*swap(dur_arr[i], dur_arr[j]);*/
			}
		}
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
