// lab8(v).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    int const N = 11;


    int Arr[N];


    int n, count_of_digits, sum, k;
    int s = 0;
    int m = 0;
    number = count_of_digits = sum = 0;
    int i = 0;

    cout << "Введите число" << endl;
    cin >> number;
    k = number;
    while (number < 2147483647) {



        while (number > 0) {
            Arr[i] = number % 10;
            number /= 10;
            i++;
            s++;
        }


        for ( i = 0; i < s; i++) {
            sum = sum + Arr[i];
        }



        /* string s = to_string(k);
         string s_reverse(s);
         reverse(s_reverse.begin(), s_reverse.end());*/

        for (int i = 0; i < s; i++)
        {
            m += Arr[i] * pow(10, s - 1 - i);
        }

        cout << "Сумма = " << sum << endl;
        cout << "Количество = " << count_of_digits << endl;
        /* cout << "Reverse = " << s_reverse << endl;*/
        cout << "Обратное = " << m << endl;

        return 0;
    }



    
}



