#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>

void Dalg(int X0, int Y0, int X1, int Y1)
{
    int dx = X1 - X0;
    int dy = Y1 - Y0;

    int len = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float Xinc = dx / (float) len;
    float Yinc = dy / (float) len;

    float X = X0;
    float Y = Y0;

    for (int i = 0; i <= len; i++)
    {
	putpixel (X,Y,WHITE);
	X += Xinc;
	Y += Yinc;
     }
}

int main(){

	int gd = DETECT, gm;
	initgraph(&gd, &gm,"c:\\turboc3\\bgi ");
	
	Dalg(102, 150, 198, 150);
	delay(300);
	Dalg(102, 150, 150, 236);


	getch();
	closegraph();
	
	return 0;
}

	
