#include <stdio.h>
#include <string.h>
#include <conio.h> 
int main()
{
char s1[9999],str[15][15],temp[15],*p,*n,a;
int i=0,j=0,k=0;
printf("¬ведите текст: ");
gets(s1);
p=strtok(s1," ");
while(p!=NULL)
{
 strncpy(str[i], p, 15); 
 p=strtok(NULL," ");
 i++;
}
for(j=0;j<i;j++)
    {  
        a=0;
        for(k=0;k<i-1;k++)
        {
		    n=strstr(str[k],str[k+1]);
            if(n!=NULL)
			a++;
        }
    }
printf("%s repeat  %d times \n",str[k],a);
    getch();
}
