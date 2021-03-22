#include<stdio.h>
#include <graphics.h>
#include <conio.h>

main()
{
   int gd = DETECT, gm;


   initgraph(&gd,&gm, "C:\\TC\\BGI");
   setcolor(2);
   line(100,100,200,100);

  line(100,100,100,200);
   line(200,100,200,200);
   line(100,200,200,200);
   line(100,100,150,50);
   line(200,100,150,50);
   line(130,200,130,150);
   line(170,200,170,150);
   line(130,150,170,150);

   getch();
   closegraph();
   return 0;
}