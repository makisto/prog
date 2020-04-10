#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

const int n=3;
  struct school {
         int numschool; 
         int vypusk; 
         int postup;
         }; 
school mass[n];
void sortingname(int *a,school *b,int n)
{	
int min;
    for (int i=0;i<n-1;i++) {
    min=i;
    for(int j=i+1;j<n;j++)
    {
    	if((b[a[j]].postup*100/b[a[j]].vypusk)>(b[a[min]].postup*100/b[a[min]].vypusk))
    	min=j;
	}
	int temp=a[i];      
	a[i]=a[min];
	a[min]=temp;
}
}
void procent(school *b,int *a,int *c,int n){
     for(int i=0;i<n;i++)
     c[i]=(b[a[i]].postup*100/b[a[i]].vypusk);
     int min;
    for (int i=0;i<n-1;i++) {
    min=i;
    for(int j=i+1;j<n;j++)
    {
    	if(c[j]>c[min])
    	min=j;
	}
	int temp=c[i];      
	c[i]=c[min];
	c[min]=temp;
}    
}
void vyvod(school *b,int *a,int *c)
{
    cout << "Num\tVyp\tPost\t%\n";
	for (int i=0;i<n;i++) {
        cout<<b[a[i]].numschool<<"\t"<<b[a[i]].vypusk<<"\t"<<b[a[i]].postup<<"\t"<<c[i]<<endl;
    }
}
main()
{ 
  setlocale(LC_ALL,"Rus");
  int postup[n];
  int procent1[n];
  for(int i=0;i<n;i++){
  postup[i]=i;
  cout<<"Номер школы:";cin>>mass[i].numschool;
  cout<<"Количество выпускников:";cin>>mass[i].vypusk;
  cout<<"Количество поступивших:";cin>>mass[i].postup; 
}   
      sortingname(postup,mass,n);
      procent(mass,postup,procent1,n);
      vyvod(mass,postup,procent1);
  getch();
}  
