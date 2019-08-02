#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gmode,i,j;
    initgraph(&gd,&gmode, "C:\\TURBOC3\\BGI");




     setcolor(YELLOW);
    for(j=0;j<=getmaxx();j++)
    {   delay(10);
         line(0+j,0,getmaxx(),getmaxy());
    }

     setcolor(RED);
    for(j=0;j<=getmaxx();j++)
    {   delay(10);
         line(0,0+j,getmaxx(),getmaxy());
    }


for(i=0;i<=400;i++)
{
    delay(10);
    setcolor(RED);
    rectangle(100+i, 50, 500, 120);
    setcolor(WHITE);
    rectangle(100+i, 122, 500, 190);
    setcolor(GREEN);
    rectangle(100+i, 192, 500, 260);
    setcolor(BLUE);
    circle(300,160,30);

    setcolor(BROWN);
    for(j=0;j<=3;j++)
    {
         line(100+j,450,100+j,50);
    }



}


    getch();


    //return 0;


}
