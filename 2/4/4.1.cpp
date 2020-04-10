#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
#include <iostream>

using namespace std;

const int n=5; 
typedef int rown[n]; 

int main()
{
    setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int i,j,m,max;
	rown *B,*C; 
	cout<<"ׁעמכבצû:";
	cin>>m;
	B=new rown[m]; 
	C=new rown[m-1]; 
	for (i=0; i<m; i++)
	{ 
		for (j=0; j<n; j++)
		{
		B[i][j]=rand()%100;
		cout<<B[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\n";
	max=B[0][0];
	int x=0,y=0;
	for (i=0; i<m; i++)
	{ 
		for (j=0; j<n; j++)
		{
			if (B[i][j]>=max)
			{ 
			max=B[i][j];
			x=i;
			y=j;
			}
		}
	}
	cout<<"\n";
	cout<<max;
	cout<<"\n";
	int q=0,w=0;
	for (i=0; i<m; i++)
	{ 
		if (i==x) i++;
		for (j=0; j<n; j++)
		{
		if (j==y) j++;
		C[q][w]=B[i][j];
		w++;
		}
		q++;
		w=0;
	}
	for (i=0; i<m-1; i++)
	{ 
		for (j=0; j<n-1; j++)
		{
		cout<<C[i][j]<<"\t";
		}
		cout<<"\n";
	}
	delete B; 
	delete C; 
getch();
}
