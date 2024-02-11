// #include <cstudio>
//#include <iostream>
#include <cmath>
#include <random>
#include <stdio.h>


using namespace std;

double function(double x) { // функция для интерполяции
    return pow(x,3);
}

int main()
{
    double a = -2, b = 2; // выбираем границы отрезка
    int N = 20; // выбираем число начального набора точек
    int M = 1000; // задаём количество точек для интерполяции
    double x[N], f[N]; // массив разбиения х_n и значения функции в них
   
    // автоматическая рандомизация
    srand( time(0) );
   
    // cout << RAND_MAX ;
    for (int i = 0; i < N; i++)  {
        x[i] = a + (b - a) * double(rand()) / (RAND_MAX); 
  
        f[i] = function( x[i]); // задаем массив значений
    }
    printf("x[i]");
    for (int i = 0; i < N; i++)  {
        printf("%f ", x[i]);
        }
	printf("\n");
	
    printf("f[i]");
    for (int i = 0; i < N; i++)  {
        printf("%f ", f[i]);
        }
	printf("\n");

    return 0;
}