#include "func.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>

using namespace std;

float n[50000];
int N=sizeof(n)/sizeof(int);
int main() {
 setlocale(LC_ALL,"Rus");
 srand(time(NULL));
 FillRand(n);
 int start_time =  clock();
 selection(n);
 int end_time = clock();
 cout << "Метод Прямого Выбора = " << add(start_time,end_time)/1000.0 << endl;
 //for(int i=0; i<N; i++) cout<<n[i]<<" ";
 FillRand(n);
 start_time =  clock();
 sort(n);
 end_time = clock();
 cout << "Метод Пузырька = " << add(start_time,end_time)/1000.0 << endl;
  //for(int i=0; i<N; i++) cout<<n[i]<<" ";
 FillRand(n);
 start_time =  clock();
 QuickSort(n,0,N-1);
 end_time = clock();
 cout << "Метод Хоара = " << add(start_time,end_time)/1000.0 << endl;
  //for(int i=0; i<N; i++) cout<<n[i]<<" ";
 FillRand(n);
 start_time =  clock();
 InsertSort(n);
 end_time = clock();
 cout << "Метод Прямого Включения = " << add(start_time,end_time)/1000.0 << endl;
  //for(int i=0; i<N; i++) cout<<n[i]<<" ";
 FillRand(n);
 start_time =  clock();
 ShakerSort(n);
 end_time = clock();
 cout << "Метод Шейкера = " << add(start_time,end_time)/1000.0 << endl;
  //for(int i=0; i<N; i++) cout<<n[i]<<" ";
 FillRand(n);
 start_time =  clock();
 ShellSort(n);
 end_time = clock();
 cout << "Метод Шелла = " << add(start_time,end_time)/1000.0 << endl;
  //for(int i=0; i<N; i++) cout<<n[i]<<" ";
  FillRand(n);
 start_time =  clock();
 HeapSort(n);
 end_time = clock();
 cout << "Метод Вильямса-Флойда = " << add(start_time,end_time)/1000.0 << endl;
  //for(int i=0; i<N; i++) cout<<n[i]<<" ";
getch();
}
