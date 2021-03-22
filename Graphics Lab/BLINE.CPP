#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
int dx,dy,x,y,p,x1,y1,x2,y2;
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c://tc//bgi");
printf("Enter the start points: ");
scanf("%d %d",&x1,&y1);
printf("Enter the end points: ");
scanf("%d %d",&x2,&y2);

dx = (x2 - x1);
dy = (y2 - y1);

p = 2 * dy - dx;

x = x1;
y = y1;

 putpixel(x,y,15);

while(x <= x2)
{
if(p < 0)
{
x=x+1;
y=y;
p = p + 2 * (dy);
}
else
{
x=x+1;
y=y+1;
p = p + 2 * (dy - dx);
}
putpixel(x,y,WHITE);
}
getch();
closegraph();

}