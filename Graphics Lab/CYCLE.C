#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
void main()
{
 int xc,j,yc,a,b,r=50;
 int n=4,i;
 int gd=DETECT,gm;
 float rad=M_PI/n,rad2;
 xc=639/2;
 yc=479/2;
 a=xc+150;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 while(!kbhit())
 {
  for(j=0;j<xc;j++)
  {
   circle(xc+j,yc,r);
   circle(a+j,yc,r);
   line(xc+j,yc,xc+50+j,yc-70);
   line(a+j,yc,a-50+j,yc-70);
   line(xc+50+j,yc-70,a-50+j,yc-70);
   line(a-50+j,yc-70,a-50+j,yc-80);

 line(a-50-20+j,yc-90,a-30+j,yc-75);
   rad2=rad;
   for(i=0;i<n;i++)
   {
    line(xc+j+r*sin(rad2),yc-r*cos(rad2),xc+j-r*sin(rad2),yc+r*cos(rad2));
    line(a+j+r*sin(rad2),yc-r*cos(rad2),a+j-r*sin(rad2),yc+r*cos(rad2));
    rad2=rad2+M_PI/n;
   }
   rad=rad+M_PI/100;
   line(200,yc+r,639,yc+r);
   delay(100);
   clearviewport();
  }


 }
 getch();
}
