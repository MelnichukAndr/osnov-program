// lab11(v.15).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



double sredar(int arr[],int i, int n);

int main()
{
	setlocale(0, "rus");
	const int n = 10;
	int i;
	int arr[n];
	for ( i = 0; i < n; arr[i++] = rand() % 20 - 10);
	
	cout<<"Начальный массив"<<endl;
	for ( i = 0; i < n;cout<<arr[i++]<<" ");
	cout << endl << endl;
	cout << "Среднее арефметическое " << sredar(arr, i, n) << endl;
	return 0;
}
double sredar(int arr[],int i,int n)
{
	static int k=0;
	static int S = 0;
	--i;
	if (arr[i] < 0)
	{
		k++;				
		S += arr[i];	
	}
	
	if (i == 0)
	{
		return (S + arr[i]) / k;
	}
	return sredar(arr, i, n);
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


