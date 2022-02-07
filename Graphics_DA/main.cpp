#include<graphics.h>
#include<conio.h>
main()
{
   int gd = DETECT,gm,left=100,top=100,right=500,bottom=700,x= 300,y=150,radius=50;

   initgraph(&gd, &gm, "");

   rectangle(left, top, right, bottom);
   rectangle(left+50, top+50, right-50, bottom-50);
   
   
   
   for(int i=0;i<200;i++)
   {
   	setcolor(i%16);
   	line(left,100+(i*3),left+50,100+(i*3));
   	line(right-50,100+(i*3),right,100+(i*3));
   	line(100+(i*2),100,100+(i*2),150);
   }
   
   for(int i=0;i<50;i++)
   {
   	setcolor(i%16);
   	line(450-(6*i),150,150,151+(10*i));
   	line(150+(6*i),650,450,651-(10*i));
   	setcolor(10+(i%3));
   	circle(300,400,115-(2*i));
   }
   
   for(int i=0;i<10;i++)
   {
   	setcolor(10+(i%3));
   	circle(125,675,25-(2*i));
   	circle(475,675,25-(2*i));
   }
   
   setcolor(8);
   outtextxy(left + 100, bottom-25, "Mohit Suhasaria  19BCE2167");

   getch();
   closegraph();
   return 0;
}
