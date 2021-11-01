

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

   
    srand(time(0));
    int num = rand() % 100 ;

    int j = 0;
    int num2 = 0;
    printf("Отгадайте число от 1 до 100 \n");
    while (num2 != num)
    {
        ++j;
        printf("введите ваше число = ");
        scanf("%d", &num2);
        if (num > num2)
            printf("число больше вашего\n");
        else if (num < num2)
            printf("число меньше вашего\n");
    }
    printf("вы угадали число за "" %d "" попыток\n", j);
    printf("\n\n\n\n\n");

    
    return 0;
}
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <stdio.h>
//#include <conio.h>
//using namespace std;
//
//int main() {
//
//	setlocale(LC_ALL, "RUS");
//
//
//	double a = 0.0;
//	double k = 0.0;
//	int n = rand() % 100 + 1;
//
//	
//		system("cls");
//			while (n != a)
//			{
//				printf("введите ваше число = %1d\n", a);
//				if (n > a)
//					printf("число больше вашего\n");
//				else
//					printf("число меньше вашего\n");
//				k=k+1;
//			}
//
//			printf("вы угадали число за %1d", k); printf("попыток");
//			printf("\n\n\n\n\n");
//			
//			
//	
//	return 0;
//}
