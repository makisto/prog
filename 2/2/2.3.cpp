#include <iostream>
#include <conio.h>
int n;
void Double(int a)
{
if(a>=n)
Double(a/n);
printf("%d",a%n);
}
int main()
{
setlocale(LC_ALL, "Russian");
int a;
printf("������� �����-",a);
scanf("%d", &a);
printf("������� ���������-",n);
scanf("%d", &n);
Double(a);
getch();
}
