#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main(){
    int gdriver = DETECT,gmode;
    int i,x=0,y,xc,yc;
    float d;

    initgraph(&gdriver,&gmode, "C:\\Turboc3\\BGI");

    int r=100;
    d=1-r;
    y=r;
    do{
        if(d<0.0)
    {

    x++;
    d+=2*x+1;
    }

    else{

    x++;
    y--;
    d+=2*x-2*y+10;
    }

    xc=getmaxx()/2; yc=getmaxy()/2;
    delay(10);
    putpixel(xc+x,yc+y,WHITE);
    delay(10);
    putpixel(xc-y,yc-x,WHITE);
    delay(10);
    putpixel(xc+y,yc-x,WHITE);
    delay(10);
    putpixel(xc-y,yc+x,WHITE);
    delay(10);
    putpixel(xc+y,yc+x,WHITE);
    delay(10);
    putpixel(xc-x,yc-y,WHITE);
    delay(10);
    putpixel(xc+x,yc-y,WHITE);
    delay(10);
    putpixel(xc-x,yc+y,WHITE);


    }
    while(x<y);
    getch();
}


