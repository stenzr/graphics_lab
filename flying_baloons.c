#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gmode;
    initgraph(&gd,&gmode, "C:\\TURBOC3\\BGI");


 //putpixel(int x, int y, int color)
    int x,y;
    x = getmaxx();
    y = getmaxy();

    //for (int i = y/2-300; i <= y/2; i--) {
        for(int j = 1; j<=180; j+=20) {

            delay(1000);
            cleardevice();
            delay(20);

            setcolor(WHITE);
            line(x/2-200,y/2+200-j,x/2-200,y/2+50-j);
            setcolor(RED);
            setfillstyle(1, 4);
            ellipse(x/2-200, y/2+80-j,0, 360, 50, 80);
            floodfill(x/2-200, y/2+80-j, 4);



            setcolor(WHITE);
            line(x/2,y/2+190-j,x/2,y/2+50-j);
            setcolor(BLUE);
            setfillstyle(1, 1);
            ellipse(x/2, y/2+50-j, 0, 360, 50, 80);
            floodfill(x/2, y/2+50-j, 1);





            setcolor(WHITE);
            line(x/2+200,y/2+180-j,x/2+200,y/2+50-j);
            setcolor(GREEN);
            setfillstyle(1, 2);
            ellipse(x/2+200, y/2-j, 0, 360, 50, 80);
            floodfill(x/2+200, y/2-j, 2);


                    }

        getch();
    return 0;

}

