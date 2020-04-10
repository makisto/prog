#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void sum(int **arr,int &m){
for (int i=0;i<m;i++)
{
	int sum=0;
	for (int j=1;j<arr[i][0];j++)
         sum+=arr[i][j]; 
         cout<<sum<<endl;
}
}

main(){ 
setlocale(LC_ALL,"Russian");
srand(time(NULL));
int m,n;
cout<<"¬ведите количество строк:";
cin>>m;
int **matr;
matr=new int *[m];
for (int i=0; i<m; i++){		
	n=rand()%10+1;
    matr[i]=new int[n];
    matr[i][0]=n;
}
for (int i=0;i<m;i++){
	for (int j=0;j<matr[i][0];j++){
		if (j!=0) matr[i][j]=rand()%10;
		cout << matr[i][j] <<"\t";
	}
	cout << "\n";
}
cout << "\n";
sum(matr,m);
getch();
}
