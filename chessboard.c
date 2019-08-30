#include<stdio.h>
#include<dos.h>
#include<graphics.h>

int main(){

        int gdriver = DETECT,gmode;
        int i,j,x=50,y=50,c=0;
        initgraph(&gdriver,&gmode, "C:\\Turboc3\\BGI");


        for(i=0;i<8;i++){
            for(j=1;j<=8;j++){
            if(c==0){
            setcolor(BLUE);
            setfillstyle(SOLID_FILL,WHITE);
            rectangle(x,y,x+50,y+50);
            floodfill(x+1,y+1,BLUE);
            c=1;
        }

        else{
            setcolor(BLUE);
            setfillstyle(SOLID_FILL,BLACK);
            rectangle(x,y,x+50,y+50);
            floodfill(x+1,y+1,BLUE);
            c=0;
        }

        x+=50;
    }
        if(c==0)
            c=1;

        else
            c=0;

        delay(1000);
        x=50;
        y=50+y;
    }

    getch();
    closegraph();
}

