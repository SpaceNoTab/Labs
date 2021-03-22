
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()

{
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"C://TC//bgi");
putpixel(100,50,111);
printf("\nEnter the coordinates:");
scanf("%d%d",&x,&y);
putpixel(x,y,123);
getch();
}
