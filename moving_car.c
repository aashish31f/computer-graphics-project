#include <graphics.h>
#include <dos.h>
#include <conio.h>
 
main()
{
   int i, j = 0, gd = DETECT, gm;
 
   initgraph(&gd,&gm,"C:\\TC\\BGI");
 
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   outtextxy(25,240,"Press any key to view the moving car");
 
   getch();
   setviewport(0,0,639,440,1);
 
   
 
   getch();
   closegraph();
   return 0;
}
