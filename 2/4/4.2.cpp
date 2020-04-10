#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

main(){ int m,n,i,j,k;
	int **A,**B;
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	cout << "¬ведите m и n\n";
	cin >> m; cin >> n;
	A=new int *[m];
	for (i=0; i<m; i++)
		A[i]=new int[n]; 
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			A[i][j]=rand()%(m*n);
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";
	B=new int *[m+1];
	for (i=0; i<m+1; i++) {        
		B[i]=new int[n+1];
		for (j=0;j<n+1;j++)
        B[i][j]=0;
      }
		
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			B[i][j]=A[i][j];
			B[i][n]+=A[i][j];
			B[m][j]+=A[i][j];
			B[m][n]+=A[i][j];
		}
	}
	for (i=0;i<m+1;i++){
		for (j=0;j<n+1;j++){
			cout << B[i][j] << "\t";
		}
		cout << "\n";
	}

getch();
}
