#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int rec(int n, int k)
{
    if(n==k)
        return 1;
    if(k==1)
        return n;
    return rec(n-1, k-1)+rec(n-1, k);
}
int Kids(int n,int m, double &pm, double &pd)
{
    if(n>m){
	float p=0.45;
	float q=1-p;
	pm=(rec(n,m)*pow(p,m)*pow(q,n-m));
	pd=(rec(n,m)*pow(q,m)*pow(p,n-m));
	return 1;}
	else return 0;
}
main()
{
	setlocale(LC_ALL,"Russian");
	int n,m;
	double pm,pd;
	m:cout<<"Количество детей:";
	cin>>n;
	cout<<"Количество мальчиков и девочек(m):";
	cin>>m;
	if(Kids(n,m,pm,pd))
	{printf("Вероятность появления m девочек-%f\nВероятность появления m мальчиков-%f",pm,pd);}
	else
	{cout<<"Неверные данные"<<"\n";}
getch();
}
