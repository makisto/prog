#include <stdlib.h>
#include <graphics.h>
#include <math.h>
int main()
{
int x=-500,y=9,i;
initwindow(640,360);
setfillstyle ( 1, 12 );     
for (i=0;i<1000;i++){
lineto(x,y);
y=pow(((x+3)-320),2);
x=x+1;
}
moveto (0,25);
lineto (640,25);
floodfill (320, 10, 15); 
outtextxy (0,26,"f(x2)=25");
outtextxy ( 220, 5, "f(x1)=sqr(x+3)" );
getch();            
closegraph();       
return 0;
}
