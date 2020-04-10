#include <stdio.h>
#include <conio.h>
void f() 
{
int n;
scanf("%d", &n);
if(n==0) return;
f();
if(n>0)
printf("%d ",n);
}
int main() 
{
f();
getch();
}
