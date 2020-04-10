#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void BubbleSort(int *a, int c)
{
int i,j,temp;
for(i=0;i<c-1;i++) 
{
for(j=0;j<c-i-1;j++) 
{
if(a[j]<a[j+1]) 
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
void PrintMas(int *a,int b)
{
int i;
for(i=0;i<b;i++)
cout<<" "<<a[i];
cout<<endl;
}
main(){
       setlocale(LC_ALL, "Russian");
       srand(time(NULL));
       int A[100],B[1000];
       for(int i=0;i<100;i++)
       A[i]=rand()%100;
       for(int i=0;i<1000;i++)
       B[i]=rand()%1000;
       cout<<"Исходный массив 100:";
       PrintMas(A,100);
       cout<<"\n";
       cout<<"Отсортированный массив 100:";
       BubbleSort(A,100);
       PrintMas(A,100);
       cout<<"\n";
       cout<<"Исходный массив 1000:";
       PrintMas(B,1000);
       cout<<"\n";
       BubbleSort(B,1000);
       cout<<"Отсортированный массив 1000:";
       PrintMas(B,1000);
       cout<<"\n";
getch();
}
