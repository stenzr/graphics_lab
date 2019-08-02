#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gmode;
    int x,y,i;
    initgraph(&gd,&gmode, "C:\\TURBOC3\\BGI");
    x = getmaxx()/2;
    y = getmaxy()/2;
    for(i=10;i<=200;i++)
    {
        delay(100);
        setcolor(i/10);

        arc(x,y,0,180,i-10);
        //line(x,y,100,i+10);
    }
    getch();
}
