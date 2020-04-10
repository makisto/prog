#include <iostream>
#include <stdlib.h>
#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
using namespace std;
void draw(int x, int y, int color1)
{setcolor(color1);
moveto(320+x,180+y);
lineto(260+x,180+y);
lineto(260+x,160+y);
lineto(300+x,160+y);
lineto(300+x,110+y);
lineto(300+x,115+y);
lineto(270+x,115+y);
lineto(270+x,150+y);
lineto(330+x,150+y);
lineto(330+x,115+y);
lineto(300+x,115+y);
moveto(300+x,160+y);
lineto(345+x,160+y);
lineto(320+x,180+y);
}
int main()

{int x,y,code;
haf: x=0;y=0; system("cls");
printf ("                    ------------------------------------------------- \n");
printf ("                    |1.Free movement of the object                  |\n");
printf ("                    ------------------------------------------------- \n");
printf ("                    |2.The movement of the object with the keyboard | \n");
printf ("                    ------------------------------------------------- \n");
printf ("                    |3.Exit                                         |\n");
printf ("                    ------------------------------------------------- \n");
int u;
cin>>u;
switch(u){
case 1:
	initwindow(400,400);
start:	while(x<180) {
		if ( kbhit() ) 
	if ( getch() == 27 ) 
	{closegraph();goto haf;};
		draw(x-100,y+25,15);
		delay(20);
		draw(x-100,y+25,0);
		x++; y++; 
	}
	while(x>-180) {
		if ( kbhit() ) 
	if ( getch() == 27 ) 
	{closegraph();goto haf;};
		draw(x-100,y+25,15);
		delay(20);
		draw(x-100,y+25,0);
		x--; y--; 
	}
		while(x<0) {
			if ( kbhit() ) 
	if ( getch() == 27 ) 
	{closegraph();goto haf;};
		draw(x-100,y+25,15);
		delay(20);
		draw(x-100,y+25,0);
		x++; y++;
	}
		while(x<180) {
			if ( kbhit() ) 
	if ( getch() == 27 ) 
	{closegraph();goto haf;};
		draw(x-100,y+25,15);
		delay(20);
		draw(x-100,y+25,0);
		x++; y--; 
	}
		while(x>-180) {
			if ( kbhit() ) 
	if ( getch() == 27 ) 
	{closegraph();goto haf;};
		draw(x-100,y+25,15);
		delay(20);
		draw(x-100,y+25,0);
		x--; y++; 
	}
		while(x<0) {
			if ( kbhit() ) 
	if ( getch() == 27 ) 
	{closegraph();goto haf;};
		draw(x-100,y+25,15);
		delay(20);
		draw(x-100,y+25,0);
		x++; y--; 
}
	goto start;
break;
case 2:initwindow(400,400);
	while ( 1 )
{
draw (x-100,y+25,15);
code = getch();
if ( code == 27 ) break;
draw ( x-100, y+25, 0 );
switch ( code )
{
case 75: x --; break;
case 77: x ++; break;
case 72: y --; break;
case 80: y ++; 
}
}
closegraph();
break;
case 3:
exit(0);
break;
default:
printf ("Wrong choise");}
goto haf;
}
