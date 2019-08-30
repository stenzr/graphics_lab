#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main(){

     int gd = DETECT, gm;
     int i, x, y, flag=0;
     initgraph(&gd, &gm, "C:\\TC\\BGI");

     x = 40;
     y = 30;


    while (!kbhit()) {
            for(int i=0; i<1000; i++){
          if(y >= getmaxy()-30 || y <= 30)
             flag = !flag;
             setcolor(YELLOW);
             setfillstyle(SOLID_FILL, YELLOW);
             if(i%50 == 0)
                rectangle(x+i, y+i, x+i+10, y+i+10);
             else
             circle(x+i, y+i, 60);
             floodfill(x+i, y+i, YELLOW);

     delay(50);


         cleardevice();
         if(flag){
             y = y + 5;
         } else {
             y = y - 5;
         }
            }
    }

    getch();
    closegraph();
    return 0;
}
