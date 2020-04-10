#include <iostream>
#include <conio.h>
void Massiv(int A[],int n, int i)
{   
if(i==n) 
return; 
if(A[i]<0)  
printf ("%d ", A[i]);
Massiv(A,n,i+1);
if(A[i]>0)  
printf ("%d ", A[i]);
}          
int main()
{
srand(time(NULL));
int N;
scanf("%d", &N);
int a[N],i;    
for (i=0;i<N;i++)
{
a[i]=rand()%100-50;
printf("%d ",a[i]);
}
printf("\n");
Massiv(a,N,0);
getch(); 
}  
