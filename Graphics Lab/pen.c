#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
int i,x0,cnt=0,y0,x,y,x1,y1,n=20;
float ang;
void main()
{
   int gd=DETECT,gm,errorcode;
   initgraph(&gd,&gm,"");
   errorcode=graphresult();
   if(errorcode!=grOk)
   {
    printf("GRAPHICS ERROR: %s\n",grapherrormsg(errorcode));
    printf("PRESS ANY KEY TO HALT");
    getch();
    exit(1);
   }
   x0=getmaxx()/2;
   y0=getmaxy()/2;
   line(x0,100,x0,300);
   circle(x0,320,20);
   while(!kbhit());
   cleardevice();
   line(x0,100,x0+200,230);
   x=x0+200;
   y=230;
   circle(x0+220,240,20);
   
ang=((3.14*5)/180);
   while(cnt<=5)
   {
   for(i=0;i<n;i++)
   {
   cleardevice();
   x1=x0+(x-x0)*cos(ang)-(y-100)*sin(ang);
   y1=100+(x-x0)*sin(ang)+(y-100)*cos(ang);
   line(x0,100,x1,y1);
   circle(x1,y1+20,20);
   x=x1;
   y=y1;
   delay(250);
   }
   n=n-5;
   ang=-ang;
   cnt++;
   }
   cleardevice();
   line(x0,100,x0,300);
   circle(x0,320,20);
   getch();
   }


