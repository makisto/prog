#include <graphics.h>
#include <ctime>
const int N=500;
void RGZ(int x,int y,int color1,int color2)
{
setcolor(color1);
setfillstyle ( 1, color2 ); 
moveto(x,y);
lineto(x,y+50); 
moveto(x-25,y+25);
lineto(x+25,y+25);   
moveto(x-12.5,y+12.5);
lineto(x+20,y+45);
moveto(x+12.5,y+12.5);
lineto(x-20,y+45);
}
main()
{
   int i,a[N],b[N],c[N],d[N],e[N],f[N];
   srand(time(NULL));
   initwindow (640, 320);
   int x=320; int y=160;
   for (i=0;i<=N;i++) 
{
    a[i]=20+rand()%550;
    b[i]=20+rand()%240;
    c[i]=1+rand()%15;  
	d[i]=20+rand()%550;
    e[i]=20+rand()%240;  
    f[i]=1+rand()%15; 
}
   while (1) 
  {  
    for(i=0;i<=N;i++)
	{
    RGZ (a[i],b[i],c[i],1);
    RGZ (d[i],e[i],f[i],1);
    delay(500); 
    RGZ (a[i],b[i],0,0);
	RGZ (d[i],e[i],0,0); 
    }
  }
closegraph(); 
}
