#include <conio.h>
#include <iostream>
float Taylor(float,int);
main()
{
setlocale(LC_ALL, "Russian");
int n;
float x,z;
printf("¬ведите число\n");
scanf("%f", &x);
printf("¬ведите степень\n");
scanf("%d", &n);
z=Taylor(x,n);
printf("„исло в степени n равно %.2f\n", z);
getch();
}
float Taylor(float a,int b)
{
float n=a;
if(b==0&&n<0)
return -1;
if (b==0) 
return 1;
if(b>0)
{
for(int i=1;i<b;i++)
a*=n;
return a;
}
if(b<0)
{
for(int i=-1;i>b;i--)
a*=n;
if(b%2==0&&n<0)
a=-(1/a);
else
a=1/a;
return a;
}
}




