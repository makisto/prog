#include <stdio.h>
#include <string.h>
#include <conio.h>
main()
{
 char s1[50],s2[5],s3[15], *p; int i;
printf("������� ���������\n");
gets(s2);
for (i=0;i<10;i++) 
{
	printf("������� �����\n");
    gets(s1);
    p = strstr( s1, s2);
if ( p != NULL )
      printf("\n����� �������� ��������� � ����� � %s\n", s1);
else 
     printf("\n��� �������� ��������� � ����� %s\n", s1);
}
getch();
}
