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
  tov a[3]={{"������","����","���������",85,13},
  {"������","����","��������",45,4},
  {"�������","����","��������",13,19}};
  tf=fopen("file1.dat","wb"); 
  fwrite(a,sizeof(tov),3,tf);
  fclose(tf);
  while (1)
  { system("CLS");
    puts("         ����        ");
    puts("  1 - �������� �����");
    puts("  2 - �������� �������");
    puts("  3 - ���������� � ����");
    puts("  4 - ��������");
    puts("  0 - �����");
    c=getch();
    switch(c)
    { case '1':input(tf);break;
      case '2':print(tf);break;
      case '3':app(tf);break;
      case '4':del(tf);break;
      case '0':return 0;
      default : puts("�������� �����");
     }
  }
}
void input(FILE *tf)
{ 
  int n;
  tf=fopen("file1.dat","wb"); 
  system("CLS");
  std::cout<<"������� ���������� ����������:";
  scanf("%d",&n);
  int k=0;
  printf("\n ���� \n");
  do
  { if(n==0)break;
    printf("\n ���: "); scanf("%s",&t1.name);
    printf(" �������: "); scanf("%s",&t1.surname);
    printf(" ��������: "); scanf("%s",&t1.fathername);
    printf(" ���������� �����: "); scanf("%d",&t1.c);
    printf(" ����� ���: "); scanf("%d",&t1.kol);
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
  printf("���������:");
  while (!feof(tf))
  { 
    printf("\n  %3d \n���: %10s \n�������: %6s \n��������: %11s \n�����:  %4d \n���: %6d"
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
  printf("\n  ����  \n");
    do
  { printf("\n ���: "); scanf("%s",&t1.name);
    printf(" �������: "); scanf("%s",&t1.surname);
    printf(" ��������: "); scanf("%s",&t1.fathername);
    printf(" ���������� �����: "); scanf("%d",&t1.c);
    printf(" ����� ���: "); scanf("%d",&t1.kol);
    fwrite(&t1,sizeof(tov),1,tf); 
    printf("\n ���������?  Y/N  ");
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

