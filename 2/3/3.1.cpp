#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
setlocale(LC_ALL,"Rus");
srand(time(NULL));
int i,n,m=0,k=0,*b,*c,*d,e=0,f=0;
cout<<"Введите размерность\n"; 
cin>>n;
b=(int*)malloc(n*sizeof(int));
if(b==NULL) 
{  
cout<<"Не удалось выделить память";
return 1;
}
for(i=0;i<n;i++)
{
b[i]=rand()%101-50;
if(b[i]>0) 
m++;
if(b[i]<0) 
k++;
}
cout<<"Исходный массив:";
for(i=0;i<n;i++)
cout<<" "<<b[i];
cout<<"\nПоложительные числа:"<<m<<"\nОтрицательные числа:"<<k;
c=(int*)malloc(m*sizeof(int));
if(c==NULL) 
{  
cout<<"Не удалось выделить память";
return 1;
}
for(i=0;e<m;i++)
{
if(b[i]>0) 
{
c[e]=b[i]; 
e++;
}
}
d=(int*)malloc(k*sizeof(int));
if(d==NULL) 
{  
cout<<"Не удалось выделить память";
return 1;
}
for(i=0;f<k;i++)
{
if(b[i]<0) 
{
d[f]=b[i]; 
f++;
}
}
cout<<"\nМассив положительных чисел:";
for(i=0;i<m;i++)
cout<<" "<<c[i];
cout<<"\nМассив отрицательных чисел:";
for(i=0;i<k;i++)
cout<<" "<<d[i];
delete b;
b=NULL;
delete c;
c=NULL;
delete d;
d=NULL;
getch();
}
