#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <math.h>

using namespace std;

extern int N;
void swap(float &x, float &y) {
     int t=x; x=y; y=t;
}
void FillRand(float *x)
{
for(int i=0;i<N;i++)
x[i]=(float)rand()*(N-0)/RAND_MAX + 0; 
}
void sort(float *x) 
{
  int i, k;
  do {
      k=0;
    for(i=1; i<N; i++)
      if(x[i]<x[i-1]) { swap(x[i], x[i-1]); k=1;}
  } while(k);
}
void selection(float *x)
{
int min, temp; 
for (int i=0; i<N-1;i++) 
{
min=i; 
for(int j=i+1;j<N;j++) 
{
if(x[j]<x[min]) 
min=j;    
}
swap(x[i],x[min]);
}
}
void QuickSort(float *x,int l, int n)
{
  float a=x[(l+n)/2];
  int i=l;
  int j=n;
  while(i<=j){
  while(x[i]<a)i++;
  while(x[j]>a)j--;
  if(i<=j){
  	swap(x[i],x[j]);
  	i++;
  	j--;
  } 
}
  if(l<j)
  QuickSort(x,l,j);
  if(i<n)
  QuickSort(x,i,n);
}
void InsertSort(float *x)
{int i,j,t;
	for(i=1;i<N;i++){
		t=x[i];
		j=i;
while((j>0)&&(x[j-1]>t)){
	x[j]=x[j-1];
	j--;
}
x[j]=t;	
}
}
void ShakerSort(float *x)
{
int Left, Right, k,j;
Left=0;
Right=N-1;
k=N;
do
{
for (j=Right;j>=Left+1;j--)
{
if (x[j]<x[j-1]) 
{
swap(x[j],x[j-1]);
k=j;
}
}
Left=k;
for (j=Left;j<=Right-1;j++)
{
if (x[j]>x[j+1]) 
{
swap(x[j],x[j+1]);
k=j;
}
}
Right=k;
}
while(Left<Right);
}
void ShellSort(float *x)
{
	int m=log10(N)/log10(2)-1;
	int H[m];
	H[0]=1;
	int z=1;
	for(int i=1;i<m;i++)
	H[i]=2*H[i-1]+1;
int k=H[m-1];
while(k>0){
	z++;
	for(int i=0;i<N;i++){
		float t=x[i];
		int j=i;
		while(j>=k&&x[j-k]>t){
			x[j]=x[j-k];
			j=j-k;
		}
		x[j]=t;
	}
	if(z>m)
	break;
	k=H[m-z];
}
}
void HeapBuild(float *x, int l, int n)
{
  float a=x[l];
  int i=l;
  while(true){
  int j=2*i; 
  if(j>n)
  break;
  if(j<n&&x[j+1]>=x[j])
  j++;
    if (a>=x[j])
	break; 
	else
    x[i]=x[j];
    i=j;
	}
	x[i]=a;
}
void HeapSort(float *x) 
{
  int l=N/2;
  while(l>=0){
    HeapBuild(x,l,N);
    l--;
}
int R=N-1;
   while(R>0)
  {
    swap(x[0],x[R]);
    R--;
    HeapBuild(x, 0, R);
  }
}
int add(int &a,int &b) { 
   return(b - a); 
}
