// lab8(b).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr_size;
    cout << "Введите размер масива " << endl;
    cin >> arr_size;

    int arr[100]{};
    int answer;

    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = i + 1;

        cout << arr[i] << setw(3);
    }

    cout << endl << endl;

    while (true) {

        cout << "\nЧто вы желаете сделать с масивом?" << endl;
        cout << "Вставить елемент(1)" << endl;
        cout << "Удалить элемент(2)" << endl;
        cout << "Выйти(0)" << endl;

        cin >> answer;

        if (answer == 0) {

            cout << "\nДля выхода нажмите любую кнопку" << endl << endl;
            break;
        }

        int new_arr, new_el, new_size;
        int size_arr2;
        int arr2[100]{};
        int el_add = 0;
        if (answer == 1) {

            cout << "Введите кол-во элементов которое нужно вставить " << endl;
            cin >> size_arr2;

            for (int k = 0; k < size_arr2; k++)
            {
                arr2[k] =rand()%10-5;

                cout << arr2[k] << setw(3);
            }
            cout  << endl;
            cout << "Выберете куда нужно вставить элементы" << endl;
            cin >> el_add;

            int new_arr[100];
            

            for (int i = 0; i < 100; i++)
            {
                new_arr[i] = arr[i];
            }
            arr_size += size_arr2;

            el_add--;
            int end_el = el_add + size_arr2; 
            int j = 0;
            int k = 0;
            for (int i = 0 ; i < 100; i++)
                
            {
                if (i >= el_add && i < end_el)
                {
                    
                    arr[i] = arr2[k];
                    k++;
                }
                else
                {
                    arr[i] = new_arr[j];
                    j++;
                }
            }


            cout << endl << "Новый масив" << endl;

            for (int i = 0; i < arr_size;i++)
            {
                cout << setw(3) << arr[i];

            }

            cout << endl << endl;
        }

        int amount_el, el, i;

        if (answer == 2) 
        {

            cout << "\nВведите сколько нужно удалит элементов\n";
            cin >> amount_el;
            

            cout << "Введите с какого элемента нужно удалять  " << amount_el << " \n";
            cin >> el;
           
          
                    el -= 1;
                    for (i = el; i < el + amount_el; i++)
                    {
                        arr[i] = 0;
                    }
                    for (i = 0; i < arr_size; i++)
                    {
                        if (arr[i] != 0)
                        {
                            cout << arr[i] << setw(3);
                        }
                    }
                    cout << "\n\n";
            
        }
    }
}
