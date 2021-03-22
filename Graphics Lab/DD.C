
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#define round(val) (int)(val+0.5)
void main()
{
void dda(int,int,int,int);
int x1,x2,y1,y2;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("enter the coordinates:");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
dda(x1,y1,x2,y2);
getch();
}
void dda(int x1,int y1,int x2,int y2)
{
int dx,dy,steps;
float xinc,yinc;
int x=x1,y=y1,i;
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
steps=dx;
else
steps=dy;
xinc=dx/steps;
yinc=dy/steps;

putpixel(round(x),round(y),3);
for(i=0;i<steps;i++)
{
x=x+xinc;
y=y+yinc;
//delay(100);
putpixel(round(x),round(y),3);
}
getch();
}