#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>

void myline (float x1, float y1, float x2, float y2) {

    float dx,dy,flag1,flag2,m,c;
    int i,j;
    dx=x2-x1;
    dy=y2-y1;


    if(dx==0){
        printf("Divide by zero error");
        goto l;
    }

    m=dy/dx;
    c=y1-(m*x1);


    if(dx>dy)
    flag1=1;
    if(dy>dx)
    flag2=1;

    if(m==1){
        for(i=x1,j=y1;i<=x2,j<=y2;i++,j++)
        putpixel(i,j,255);
    }

    if(m>1){
        if(flag1==1){
            for(i=x1;i<=x2;i++){
                j=(m*i)+c;
                delay(10);
                putpixel(i,j,100);
        }
    }
    if(flag2==1){
        for(j=y1;j<=y2;j++){
            i=(j-c)/m;
            delay(10);
            putpixel(i,j,100);
        }
    }
 }


    if(m<0){
        if(flag1==1){
        for(i=x2;i>=x1;i--){
            j=(m*i)+c;
            delay(10);
            putpixel(i,j,100);
        }
    }
    if(flag2==1){
        for(j=y2;j>=y1;j--){
        i=(j-c)/m;
        delay(10);
        putpixel(i,j,100);
        }
    }
 }

   l:
       getch();

}


int main()
{
    int gd = DETECT, gmode;
    initgraph(&gd,&gmode, "C:\\TURBOC3\\BGI");

    myline(getmaxx()/2+200, getmaxy()/2, getmaxx()/2-200, getmaxy()-100);

    return 0;


}





