#include<graphics.h>
#include<math.h>
#include<stdio.h>
#include<conio.h>
void main()
{
   int xc,yc,r=50;
   int n=4,i;
   int gd=DETECT,gm;
   float rad=M_PI/n,rad2;
   xc=639/2;
   yc=479/2;
   initgraph(&gd,&gm,"C://TC//bgi");
   while(!kbhit())
   {
      circle(xc,yc,r);
      rad2=rad;
      for(i=0;i<n;i++)
      {
	 line(xc+r*sin(rad2),yc-r*cos(rad2),xc-r*sin(rad2),yc+r*cos(rad2));
	 rad2=rad2+M_PI/n;
      }
      rad=rad+M_PI/100;
      line(200,yc+r,450,yc+r);
      delay(5);
      clearviewport();
   }
   getch();
}


