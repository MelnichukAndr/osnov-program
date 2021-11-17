// lab8(a).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <iomanip>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");

    int i;
    const int N = 10;
    int pl[N]{};
    int ans;

    for (int k = 0; k < 10; ) 
    {
        cout << "Вы курите?" << endl << "да-1/нет-0" << endl;

        cin >> ans;

            if (ans == 1)
            {
                for (int i = 0; i < 5; i++)
                {
                    if (pl[i] == 0)
                    {
                        pl[i] = 1;
                        cout << "Номер вашего места: " << i + 1 << endl << endl;
                        k++;
                        break;
                    }

                    if (i == 4 && pl[i] == 1) {
                        cout << "К сожалению, места в этом отделе заняты" << endl;
                    }
                }
            }
            else
            {
                if (ans == 0)
                {
                    for (int i = 5; i < 10; i++)
                    {

                        if (pl[i] == 0)
                        {
                            pl[i] = 1;
                            cout << "Номер вашего места: " << i + 1 << endl;;
                            k++;
                            break;
                        }

                        if (i == 9 && pl[i] == 1)
                        {
                            cout << "К сожалению, места в этом отделе заняты" << endl;
                        }
                    }
                }
                else
                    cout << "Вы ввели некоректный ответ" << endl;
            }
                
    }
    cout << endl << "Все места заняты." << endl;
}