#include <stdio.h>
#include <string.h>
#include <conio.h> 
#include <iostream>
int main()
{
setlocale(LC_ALL,"Russian");
char s1[9999],str[15][15],temp[50],*p,c[3];
c[0]=',';c[1]=' ';c[2]='.';
int i=0;
printf("Введите фамилии:");
gets(s1);
int k;
printf("Введите номер разделителя(0-2):");
scanf("%d",&k);
p=strtok(s1,&c[0]);
while(p!=NULL)
{
 strncpy(str[i], p, 50); 
 p=strtok(NULL,&c[0]);
 i++;
}
for (int j=0;j<i;j++)
    {
        for (int k=0;k<i-1;k++)
        {
            if(strcmp(str[k],str[k+1])>0)
            {
                strcpy(temp,str[k]);
                strcpy(str[k],str[k+1]);
                strcpy(str[k+1],temp);
            }
        }
    }
for(int j=0;j<i;j++)
{
   printf("%s%c",str[j],c[k]);
   if(j==(i-1))printf("%s",str[j]);
}
    getch();
}
