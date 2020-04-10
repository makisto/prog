#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

main(){ int m=10,n,j,i;
int **matr;
matr=new int *[m];
for (i=0; i<m; i++){
	n=i+1;
	matr[i]=new int[n]; 
}	
for (i=0;i<m;i++){
	if (i==0) n=10; else n=i+1;
	for (j=0;j<n;j++){
		if (i==0) matr[i][j]=j; else matr[i][j]=i*j;
		if (j==0) matr[i][j]=i;
		cout << matr[i][j] <<"\t";
	}
	cout << "\n";
}
for(int i=0;i<m;i++)
delete(matr[m]);
delete(matr);
getch();
}
