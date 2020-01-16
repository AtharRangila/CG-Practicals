#include<iostream>
#include<graphics.h>
#include<math.h>

int main()
{

int gd= DETECT, gm;
initgraph(&gd,&gm,NULL);
line(10,10,110,10);
delay(200);
line(10,70,110,70);
delay(200);
line(10,10,10,70);
delay(200);
line(110,10,110,70);
delay(200);
line(10,40,60,10);
delay(200);
line(60,10,110,40);
delay(200);
line(10,40,60,70);
delay(200);
line(60,70,110,40);
delay(200);
line(35,25,35,55);
delay(200);
line(85,25,85,55);
delay(200);
line(35,25,85,25);
delay(200);
line(35,55,85,55);
getch();
closegraph();
return 0;
}
