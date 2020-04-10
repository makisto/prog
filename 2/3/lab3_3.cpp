#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void Erat(bool B[], int N){
	int i, P;
	for (P=2; P<=N; P++) 
    B[P]=true;
	P=2;
	while (P*P<=N){	
		i=P*P;
		if (B[P])
		while (i<=N){
			B[i]=false;
			i=i+P;
			}
		P=P+1;
	}
	cout<<"Простые числа: ";
	for (P=2; P<=N; P++)
		if (B[P]==true) 
        cout<<" "<<P;
}
int main(){
	setlocale(LC_ALL,"Rus");
	int N;
	cout<<"N = "; 
    cin>>N;
	bool *B=new bool[N];
	Erat(B, N);
	delete B; 
    B=NULL;
	getch();
}
