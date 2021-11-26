// lab10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iomanip>
#include <iostream>
#include "windows.h"
#include <math.h>
using namespace std;





int Array(int OM[], int M, int N) {
    int DM[10][10];
    int temp;
   
    cout << endl << "Двумерный из одномерного:" << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            DM[i][j] = OM[i*N+j];
            cout  << DM[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Умножаем каждый эл. столбца на эл. гл.дл. своего столбца : " << endl;
  /*  for (int i = 0; i < M; i++)
    {
        temp = DM[i][i];
        for (int j = 0; j < N; j++)
        {
            DM[i][j] *= temp;
            cout << setw(3) << DM[i][j];
        }
        cout << endl;
    }*/

    for (int i = 0; i < M; i++)
    {
        
        for (int j = 0; j < N; j++)
        {
            temp = DM[j][j];
            if(i>j)
                DM[i][j] = DM[i][j]*sqrt(temp);
            else
                DM[i][j] *= temp;
                cout << setw(3) << DM[i][j];
        }
        cout << endl;
    }

   //for (int j = 0; j < N; j++)
   // {
   //     temp = DM[j][j];
   //     for (int i = 0; i < M; i++)
   //     {
   //         DM[i][j] *= temp;
   //      /*   cout << setw(3) << DM[i][j];*/
   //     }
   //    
   //     
   // }
    /* for (int i = 0; i < M; i++)
    {
        temp = DM[j][j];
        for (int j = 0; j < N; j++)
        {
           
            DM[i][j] *= temp;
            cout << setw(3) << DM[i][j];
        }
        cout << endl;
    }*/
  
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            OM[i * N + j] = DM[i][j];
        }
    }
    return M;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int OM[100];
    srand(time(0));
    int M;
    int N;
    cout << "Введите кол-во строк -> ";
    cin >> M;
    cout << "Введите кол-во столбцов ->";
    cin >> N;
    do {
        if ((M < 0 || N < 0) || (M != N)) {
            cout << "Матрица должна быть квадратная и размеры больше 0" << endl;
            cout << "Введите кол-во строк -> ";
            cin >> M;
            cout << "Введите кол-во столбцов ->";
            cin >> N;
        }
        else
            break;
    } while (true);
    cout << "Начальный массив:" << endl;
    for (int i = 0; i < M * N; i++)
    {
        OM[i] = rand() % 10;
        cout << setw(3) << OM[i];
    }
    int x = Array(OM, M, N);
    cout << "Преобразовываем в одномерный:" << endl;
    for (int i = 0; i < M * N; i++)
    {
        cout << setw(3)<< OM[i];
    }
    cout << endl;
    cout << "Количество столбцов в матрице: " << x << endl << endl;
}

