#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

int main()
{
	int gd=DETECT,gm;
	int x=500,y=500;
	initgraph(&gd,&gm,"..\\bgi");
	while(!kbhit())
	{
		cleardevice();
		setcolor(YELLOW);
		if(y==0)
		{
			y=500;
			x=500;
		}
		else
		{
			y--;
			x--;
			//setcolor(RED);
			line(x-50,y,x,y-70);
			//setcolor(RED);
			line(x,y-70,x+50,y);
			//setcolor(YELLOW);
			line(x+50,y,x,y+70);
			//setcolor(BLUE);
			line(x,y+70,x-50,y);
            line(x-50,y,x+50,y);

			//setcolor(YELLOW);
			line(x,y-70,x,y+70);
			//line(x,y+70,x+10,y+140);
			//line(x,y+70,x-10,y+140);
			setcolor(BROWN);
			line(x,y,x+130,y+500);
		}
		delay(20);
	}
	closegraph();

}
