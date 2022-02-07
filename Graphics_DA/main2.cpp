#include<graphics.h>
#include<conio.h>
main()
{
   int gd = DETECT,gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");
   
       setcolor(GREEN);

        line(0 , 300, 210, 300);
        line(50, 300, 75 , 270);
        line(75, 270, 150 , 270);
        line(150, 270, 165 , 300);
        line(0 , 300, 0 , 330);
        line(210 , 300, 210, 330);
        
        circle(25 , 330, 15);
        circle(25 , 330, 2);
        circle(65 , 330, 15);
        circle(65 , 330, 2);
        circle(105 , 330, 15);
        circle(105 , 330, 2);
        circle(145 , 330, 15);
        circle(145 , 330, 2);
        circle(185 , 330, 15);
        circle(185 , 330, 2);
        line(0 , 330, 50 , 330);
        line(80 , 330, 130 , 330);
        line(210 , 330, 160 , 330);
        setlinestyle(0, 0, 5); 
        line(160,290,210,260);
	setcolor(8);
   outtextxy(0, 200, "Mohit Suhasaria  19BCE2167");

   getch();
   closegraph();
   return 0;
} 
