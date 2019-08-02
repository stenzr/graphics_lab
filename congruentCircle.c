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
    delay(1);
    for(i=1;i<=50;i++)
    {

        setcolor(YELLOW);
        arc(x,y,0,360,i);
    }
    for(i;i<=100;i++)
    {

        setcolor(GREEN);
        arc(x,y,0,360,i);
    }
    for(i;i<=150;i++)
    {

        setcolor(BLUE);
        arc(x,y,0,360,i);
    }
    for(i;i<=200;i++)
    {

        setcolor(RED);
        arc(x,y,0,360,i);
    }



    getch();
}
