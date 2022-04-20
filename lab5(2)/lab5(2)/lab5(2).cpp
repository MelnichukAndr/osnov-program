#include "Head.h"

#define ARRAY

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int size;

#ifdef ARRAY
    cout << "������� ����������� ������� > ";
    cin >> size;
   

    int* arr = new int[size * size];

    fill_arr(arr, size);
    cout << "���������� ������\n";
    print_arr(arr, size);
    cout << "\n";



    delete[]arr;

#else
    int size2;


    cout << "������� ����������  > ";
    cin >> size2;

    int** m ;

    alloc_mat(m, size2);

    fill_mat(m, size2);
    cout << "�������\n";
    print_mat(m, size2);


    release_mat(m, size2);
#endif

}
