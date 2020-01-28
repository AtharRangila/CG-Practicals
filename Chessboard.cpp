

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


    for (int i = 0; i <= steps; i++) 
    {
	putpixel (X,Y,WHITE);
	X += Xinc;
	Y += Yinc;
     }

}

void flood(int x,int y,int fillColor, int Color)
{
    if(getpixel(x,y)==Color)
    {
	putpixel(x,y,fillColor);
	delay(3);
	flood(x+1,y,fillColor,Color);
	flood(x-1,y,fillColor,Color);
	flood(x,y+1,fillColor,Color);
	flood(x,y-1,fillColor,Color);
    }
}

int main(){

	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");


	Dalg(10,10,130,10);
	Dalg(10,40,130,40);
	Dalg(10, 70, 130,70);
	Dalg(10, 100, 130, 100);
	Dalg(10, 130, 130, 130);

	Dalg(10,10,10,130);
	Dalg(40,10,40,130);
	Dalg(70, 10, 70,130);
	Dalg(100, 10, 100, 130);
	Dalg(130, 10, 130, 130);


	flood(11,11,4,0);
	flood(11,99,4,0);
	flood(62,62,4,0);

	flood(99,99,4,0);
	flood(75,15,4,0);
	flood(11+30,99+30,4,0);
	flood(99+30,99+30,4,0);
	flood(75+30,15+30,4,0);

	getch();
	closegraph();

	return 0;
}
