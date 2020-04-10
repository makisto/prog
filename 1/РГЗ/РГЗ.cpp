#include <graphics.h>
#include <conio.h>
#include <ctime>
void RGZ(int x,int y,int color1,int color2)
{
setcolor(color1);
setfillstyle(1,color2); 
circle(x,y,50);
circle(x-20,y-12.5,12.5);
circle(x+20,y-12.5,12.5);
circle(x-60,y-12.5,12.5);
circle(x+60,y-12.5,12.5);
moveto(x,y-25);
lineto(x,y+20);
arc(x,y+20,180,7,12.5);
}
main(int n)
{
m:system("cls");	
    printf("                   _________________________________________ \n");
	printf("                  |                 Меню                    |\n");
	printf("                  |_________________________________________|\n");
	printf("                  |1.       Свободное движение объекта      |\n");
	printf("                  |_________________________________________|\n");
	printf("                  |2. Движение объекта с помощью клавиатуры |\n");
	printf("                  |_________________________________________|\n");
	printf("                  |3.               Выход                   |\n");
	printf("                  |_________________________________________|\n");
scanf("%d",&n);
  if (n==1)
{
srand(time(NULL));
initwindow(640,320);
int x=320;int y=160;
int dx=2;
int dy=1;
while (1) 
  {
    if ( kbhit() ) 
       if ( getch() == 27 )  
            break; 
    RGZ (x,y,15,4); 
    delay (20); 
    RGZ (x,y,0,0); 
    x+=dx;
    y+=dy;
    if(x+79>640)
    dx--;
    if(x-75<0)
    dx++;
    if(y+65>320)
    dy--;
    if(y-50<0)
    dy++;
  }
  closegraph(); 
  goto m;
}
if (n==2)
{
initwindow(640,320);
int x=320;int y=160;
while (1) 
{
  RGZ (x,y,15,0); 
  int code=getch(); 
  if (code==27) break; 
  RGZ (x,y,0,0); 
  switch (code) 
  { 
    case 75:  x-=10; break; 
    case 77:  x+=10; break; 
    case 72:  y-=10; break; 
    case 80:  y+=10; 
  }
}
closegraph(); 
goto m;
}
if (n==3)
return 0;
else
printf("Wrong number!Try again\n");
goto m;
}
