
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gmode,a;
    int x,y,i;
    initgraph(&gd,&gmode, "C:\\TURBOC3\\BGI");
    x = getmaxx()/2 + 1;
    y = getmaxy()/2 + 1;

    for(i=0; i<=200; i++)
    {
        setcolor(YELLOW);
        arc(x,y,0,180,i);
    }

    for(i=0; i<=20000; i+=50)
    {

        line( x, y, x+i, -2);
        line( x, y, x-i, -2);


    }


    getch();
}
