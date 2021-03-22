#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
void main()
{
int gdriver=DETECT, gmode;
float x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,tx,ty,xk,yk,r1,r;
int n;
initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
printf("Enter co-ordinates: ");
scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
line(x1,y1,x2,y2);
do
{
printf("1.Translation\n 2.Rotation\n 3.Scaling\n");
scanf("%d",&n);
switch(n)
{
case 1:
printf("Enter translation factor:");
scanf("%f%f",&tx,&ty);
x3=x1+tx;
y3=y1+ty;
x4=x2+tx;
y4=y2+ty;
setcolor(RED);
line(x3,y3,x4,y4);
break;
case 2:
printf("Enter rotation angle:");
scanf("%f",&r);
r1=(3.14*r)/180;
x3=x1+((x2-x1)*cos(r1))-((y2-y1)*sin(r1));
y3=y1+((x2-x1)*sin(r1))+((y2-y1)*cos(r1));
setcolor(RED);
line(x1,y1,x3,y3);
break;
case 3:
printf("Enter scaling factor:");
scanf("%f%f",&xk,&yk);
x5=x1*xk;
y5=y1*yk;
x6=x2*xk;
y6=y2*yk;
setcolor(RED);
line(x5,y5,x6,y6);
break;
}
}while(n!=0);
getch();
closegraph();
}

