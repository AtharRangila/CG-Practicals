#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>
void Dalg(int X0, int Y0, int X1, int Y1) 
{ 
    int dx = X1 - X0; 
    int dy = Y1 - Y0; 
  
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy); 
  
    float Xinc = dx / (float) steps; 
    float Yinc = dy / (float) steps; 
  
    float X = X0; 
    float Y = Y0; 

	
	delay(200);
    for (int i = 0; i <= steps; i++)
    {   setcolor(4);
	putpixel (X,Y,6);
	X += Xinc;
	Y += Yinc;
     }

}
int main()
{

int gd= DETECT, gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
Dalg(10,10,110,10);
Dalg(10,70,110,70);
Dalg(10,10,10,70);
Dalg(110,10,110,70);
Dalg(10,40,60,10);
Dalg(60,10,110,40);
Dalg(10,40,60,70);
Dalg(60,70,110,40);
Dalg(35,25,35,55);
Dalg(85,25,85,55);

Dalg(35,25,85,25);

Dalg(35,55,85,55);
getch();
closegraph();
return 0;
}
