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

void dispCircle(int xc_,int yc_, int x, int y) {
         
    putpixel(xc_+x, yc_+y, WHITE);
    putpixel(xc_-x, yc_+y, WHITE);
    putpixel(xc_+x, yc_-y, WHITE);
    putpixel(xc_-x, yc_-y, WHITE);
    putpixel(xc_+y, yc_+x, WHITE);
    putpixel(xc_-y, yc_+x, WHITE);
    putpixel(xc_+y, yc_-x, WHITE);
    putpixel(xc_-y, yc_-x, WHITE);
}

void Bres(int _x, int _y, int _r){

	int x = 0, y = _r;
	int d = 3 - 2 * _r;

	dispCircle(_x, _y, x, y);

	while(y >= x)
	{
		x++;
		
		if(d > 0){
			y--;
			d = d + 4 * (x - y) + 10;
		}

		else{
			d = d + 4 * x + 6;			
		}

		dispCircle(_x, _y, x, y);
	}
}

int main(){

	int gd = DETECT, gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	
	Bres(100, 100, 70); 
	Bres(70, 80, 10);
	Bres(130, 80, 10);

	Dalg(70 ,130, 130 ,130);
	Dalg(70 ,140, 130 ,140);
	Dalg(70 ,130, 70 ,140);
	Dalg(130 ,140, 130 ,130);
	getch();
	closegraph();

	return 0;
  }
