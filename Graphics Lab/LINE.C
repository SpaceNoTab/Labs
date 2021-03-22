#include <graphics.h>
#include <conio.h>
 
main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:/TC/BGI");


   //draw a line

   /*
   line() function description
   parameter left to right
   x1: 100
   y1: 100
   x2: 200
   y2: 100
   */
   line(100,100,200,100);
   

   getch();
   closegraph();
   return 0;
}
