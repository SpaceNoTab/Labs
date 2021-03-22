#include<stdio.h>
#include<graphics.h>
#include<conio.h>
 
int main(){
   int gd = DETECT,gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");
   /* Initialize center of circle with center of screen */

 

   /* Draw circle on screen */
   circle(20,30,10);
 
   getch();
   closegraph();
   return 0;
}
