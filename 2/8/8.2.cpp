#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

const int n=3;
  struct univer {
         int numroom; 
         int sroom; 
         char facultet[10];
         int students;
         }; 
univer mass[n];
  struct fac {
         char facu[10];
         };
fac mass1[n];
void fac(univer *b,int *a,int &k){
	for(int i=0;i<n;i++){
		bool fl=true;
		for(int j=0;j<n;j++)
			if((strcmp(b[a[i]].facultet,b[a[j]].facultet)==0&&a[j]!=a[i]))
			fl=false;
			if(fl)
			k++;
}
if(k<n)k++;
cout<<k<<"\n";
}
void vyvod(univer *b, int *a)
{
    cout << "Num\tS\tFac\n";
	for (int i=0;i<n;i++) {
        cout<<b[a[i]].numroom<<"\t"<<b[a[i]].sroom<<"\t"<<b[a[i]].facultet<<"\t"<<endl;
    }
}

main()
{ 
  setlocale(LC_ALL,"Rus");
  int a[n];
  int s=0,k=0,st=0, m=0;
 mass[0].numroom=1; mass[0].sroom=90; strcpy(mass[0].facultet,"АЭС"); mass[0].students=3;
 mass[1].numroom=2; mass[1].sroom=30; strcpy(mass[1].facultet,"МРМ"); mass[1].students=5;  
 mass[2].numroom=3; mass[2].sroom=70; strcpy(mass[2].facultet,"ИВТ"); mass[2].students=2;    
  for (int i=0;i<n;i++){
      a[i]=i;
      for (int j=0;j<n;j++){
          if (strcmp(mass[i].facultet,mass1[j].facu)==0) break; else {strcpy(mass1[s].facu,mass[i].facultet);s++;break;}
  }
}
   fac(mass,a,m);
   for (int i=0;i<m;i++){
      for (int j=0;j<n;j++){
          if (strcmp(mass[j].facultet,mass1[i].facu) == 0) {
             s+=mass[j].sroom;
             k++;
             st+=mass[j].students;  
      }
   }
   cout << "\n"<<mass1[i].facu << "\nКоличество комнат " << k << "\nКоличество студентов " << st << "\nСредняя площадь на одного студента " << s/st<<"\n";
   s=0; k=0; st=0;
}  
  vyvod(mass,a);                                                             
  getch();
}  
