#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
 
using namespace std;
 
int main()
{
setlocale(LC_ALL,"Rus");
srand(time(NULL));
int n;
cout<<"Размерность:";
cin>>n;
double *a;
double **b;
a=new double[n];
b=new double*[n];
if(a==NULL) 
{  
cout<<"Не удалось выделить память";
return 1;
}
for (int i=0;i<n;i++) {
*(a+i)=(float)rand()*n/RAND_MAX+(-n/2);
b[i]=a+i;
}
cout<<"\nИсходный массив:";
for (int i=0;i<n;i++)
printf("%.2f ", *(a+i));
cout<<"\nИсходный массив:";

for (int i=0;i<n;i++)
printf("%d ", *(b+i));
for (int i=0;i<n-1;i++)
for (int j=i+1;j<n;j++)
if(*b[i]>*b[j])
{
double *temp=b[i];
*(b+i)=*(b+j);
*(b+j)=temp;
}
cout<<"\nОтсортированный массив:";
for (int i=0;i<n;i++)
printf("%.2f ", *b[i]);
cout<<"\nОтсортированный массив:";
for (int i=0;i<n;i++)
printf("%.2f ", *(a+i));
delete a;
a=NULL;
getch();
}
