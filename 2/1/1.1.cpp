#include <conio.h>
#include <math.h>
#include <iostream>
double cosx(double);
main()
{
setlocale(LC_ALL, "Russian");
int x;
double y,z;
printf("Введите значение\n");
scanf("%d", &x);
y=cos(x);
z=cosx(x);
printf("Стандартное значение косинуса равно %.4f\n", y);
printf("Значение косинуса по ряду Тейлора равно %.4f\n", z);
getch();
}
double cosx(double x)
{
double n=1;
double sum=0,eps=0.0001;
int i=1;
do
{
sum+=n;
n*=-1*x*x/((2*i-1)*(2*i));
i++;
}
while(fabs(n)>eps);
return sum;
}

