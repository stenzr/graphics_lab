#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gmode;
    int x,y,i;
    initgraph(&gd,&gmode, "C:\\TURBOC3\\BGI");
    x = getmaxx()/2 + 1;
    y = getmaxy()/2 + 1;

    setcolor(YELLOW);
    //skeleton croses
    line( x-200, y, x+200, y);
    line( x-120, y-120, x+120, y+120);
    line( x-120, y+120, x+120, y-120);

    //petal completion
     line( x-220, y+100, x-120, y+120);
     line( x-220, y-100, x-120, y-120);
     line( x+220, y-100, x+120, y-120);
     line( x+220, y+100, x+120, y+120);

     line( x-220, y+100, x-200, y);
     line( x+220, y+100, x+200, y);
     line( x+220, y-100, x+200, y);
     line( x-220, y-100, x-200, y);

     //upper&lower petals
     line( x, y-200, x-120, y-120);
     line( x, y+200, x-120, y+120);
     line( x, y-200, x+120, y-120);
     line( x, y+200, x+120, y+120);

     getch();
}

