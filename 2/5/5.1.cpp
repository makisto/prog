#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <conio.h>

using namespace std;

main(){
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int *a,m;
	cout<<"Количество элементов:";
	cin>>m;
	a=new int[m];
	for(int i=0;i<m;i++)
	{
	a[i]=rand()%m;
	cout<<a[i]<<" ";
}
cout<<"\n";
int k;
m:cout<<"Введите k"<<"\n";
cin>>k;
if(k>=m)goto m;
int **b;
b=new int*[m];
for(int i=0;i<m;i++)
b[i]=new int[k];
	if (b==NULL ) 
{   printf("Не удалось выделить память");
    return 1; 
}
int z=0;
int v=(m/k);
if(v%2!=0)v++;
for(int i=0;i<v;i++){
		for(int j=0;j<k;j++){
			if (z<m) {b[i][j]=a[z];z++;} 
            else
			b[i][j]=0;
			cout<<b[i][j]<<"\t";
		}
	cout<<"\n";
	}
delete(a);
for(int i=0;i<m;i++)
delete(b[i]);
delete(b);
getch();
}
