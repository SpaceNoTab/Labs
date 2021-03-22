#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
int gd=DETECT,gm,xc,yc,r,i;
float b,x,y;
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("Enter the center of the circle: \n");
scanf("%d%d",&xc,&yc);
printf("\nEnter the radius: \n");
scanf("%d",&r);
for(i=0;i<=360;i++)
{
b=(i*3.14)/180;
x=r*cos(b);
y=r*sin(b);
putpixel(xc+x,yc+y,7);
}getch();
return(0);
}
