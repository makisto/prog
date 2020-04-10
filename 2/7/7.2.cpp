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
if(a[j]>a[j+1]) 
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
int search1(int N, int ch, int *a, int &C){
	int L=0, R=N,m;
    C=0; 
    bool s=false;
	while (L<R){
		m=(L+R)/2;
		C++;
		if (a[m]<ch) L=m+1; else
		R=m;
	}
	C++;
	if (a[R]==ch) {s=true;return 1;} else {s=false;return 0;}
}
int search2(int N, int ch, int *a, int &C){
    C=1;bool t=false;	
    for (int i=0; i<N; i++){
        if (a[i]==ch) {t=true;return 1;}
        else C++;
        }
    if (t==false) return 0;
}
main()
{
       setlocale(LC_ALL, "Russian");
       srand(time(NULL));
       int A[100],n,C;
       for(int i=0;i<100;i++)
       A[i]=rand()%100;
       BubbleSort(A,100);
       PrintMas(A,100);
       cout<<"Введите ключ поиска:";
       cin>>n;
       cout<<"\n";
       if(search1(100,n,A,C))
       cout<<"Сравнения бинарным поиском:"<<C<<"\n";
       else 
       cout<<"Элемента нет";
       cout<<"\n";
       if(search2(100,n,A,C))
       cout<<"Сравнения перебором:"<<C<<"\n";
       else 
       cout<<"Элемента нет";
       getch();
}
       
       
