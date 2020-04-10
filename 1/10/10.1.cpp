#include <stdio.h>
#include <string.h>
#include <conio.h>
main()
{
 char s1[50],s2[5],s3[15], *p; int i;
printf("Введите приставку\n");
gets(s2);
for (i=0;i<10;i++) 
{
	printf("Введите слово\n");
    gets(s1);
    p = strstr( s1, s2);
if ( p != NULL )
      printf("\nНашли заданную приставку в слове в %s\n", s1);
else 
     printf("\nНет заданной приставки в слове %s\n", s1);
}
getch();
}
