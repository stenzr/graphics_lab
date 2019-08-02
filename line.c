#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gmode;
    initgraph(&gd,&gmode, "C:\\TURBOC3\\BGI");

    line(20, 30, 50, 100);

    getch();

    return 0;


}
