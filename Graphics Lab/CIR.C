#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()

{
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"C://TC//bgi");
circle(100,100,10);


setcolor(12);
circle(200,300,50);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(200,300,12);

/*putpixel(100,50,111);
printf("\nEnter the coordinates:");
scanf("%d%d",&x,&y);
putpixel(x,y,123);*/
getch();
}
