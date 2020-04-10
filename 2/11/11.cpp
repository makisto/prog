#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

struct tov {
char name[10];
char surname[15];
char fathername[20]; 
int c; 
int kol;
}t1,a[3];
void input(FILE *); 
void print(FILE *);
void app(FILE *); 
void del(FILE *);
main()
{ 
  setlocale(LC_ALL, "Rus");
  char c;
  FILE *tf;
  tov a[3]={{"Петров","Иван","Сергеевич",85,13},
  {"Иванов","Иван","Петрович",45,4},
  {"Сидоров","Петр","Иванович",13,19}};
  tf=fopen("file1.dat","wb"); 
  fwrite(a,sizeof(tov),3,tf);
  fclose(tf);
  while (1)
  { system("CLS");
    puts("         МЕНЮ        ");
    puts("  1 - Создание файла");
    puts("  2 - Просмотр записей");
    puts("  3 - Добавление в файл");
    puts("  4 - Удаление");
    puts("  0 - Выход");
    c=getch();
    switch(c)
    { case '1':input(tf);break;
      case '2':print(tf);break;
      case '3':app(tf);break;
      case '4':del(tf);break;
      case '0':return 0;
      default : puts("Неверный режим");
     }
  }
}
void input(FILE *tf)
{ 
  int n;
  tf=fopen("file1.dat","wb"); 
  system("CLS");
  std::cout<<"Введите количество пассажиров:";
  scanf("%d",&n);
  int k=0;
  printf("\n Ввод \n");
  do
  { if(n==0)break;
    printf("\n Имя: "); scanf("%s",&t1.name);
    printf(" Фамилия: "); scanf("%s",&t1.surname);
    printf(" Отчество: "); scanf("%s",&t1.fathername);
    printf(" Занимаемые места: "); scanf("%d",&t1.c);
    printf(" Общий вес: "); scanf("%d",&t1.kol);
    fwrite(&t1,sizeof(tov),1,tf); 
    k++;
  }
  while (k!=n);
  fclose(tf);
}
void print(FILE *tf)
{ int i;
  system("CLS");
  tf=fopen("file1.dat","rb"); 
  i=1;
  fread(&t1,sizeof(tov),1,tf); 
  printf("ПАССАЖИРЫ:");
  while (!feof(tf))
  { 
    printf("\n  %3d \nИмя: %10s \nФамилия: %6s \nОтчество: %11s \nМеста:  %4d \nВес: %6d"
	,i,t1.name,t1.surname,t1.fathername,t1.c,t1.kol);
    fread(&t1,sizeof(tov),1,tf);
    i++;
  }
  fclose(tf);
  getch();
}
void app(FILE *tf)
{ char ch;
  tf=fopen("file1.dat","ab"); 
  system("CLS");
  printf("\n  Ввод  \n");
    do
  { printf("\n Имя: "); scanf("%s",&t1.name);
    printf(" Фамилия: "); scanf("%s",&t1.surname);
    printf(" Отчество: "); scanf("%s",&t1.fathername);
    printf(" Занимаемые места: "); scanf("%d",&t1.c);
    printf(" Общий вес: "); scanf("%d",&t1.kol);
    fwrite(&t1,sizeof(tov),1,tf); 
    printf("\n Закончить?  Y/N  ");
    ch=getch();
  }
  while (ch != 'y');
  fclose(tf);
}
void del(FILE *tf)
{
	FILE *td;
	tf=fopen("file1.dat","rb"); 
	td=fopen("file2.dat","wb");
	while (fread(&t1,sizeof(tov),1,tf))
	{
		if(t1.kol>10)
        {
			fwrite(&t1,sizeof(tov),1,td);
		}
	}
	fclose(tf);	
	fclose(td);
	remove("file1.dat");
  	rename("file2.dat","file1.dat");
}

