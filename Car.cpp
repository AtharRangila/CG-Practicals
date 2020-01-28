
#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>

int main()
{

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	int road_height = 350, road_len = 700, offset = 50, tire_offset = 0;

	for(int i = 0; i <= 375; i++)
	{

		setcolor(102);
		line(0, road_height+tire_offset, road_len, road_height+tire_offset);
		setcolor(5);
		rectangle(50+i, 200+offset, 250+i, 300);
		line(75+i, 200+offset, 100+i, 150+offset); //left slant
		line(100+i, 150+offset, 200+i, 150+offset);//top
		line(200+i, 150+offset, 225+i, 200+offset);//right slant

		circle(100+i ,325+tire_offset ,25);
		circle(200+i ,325+tire_offset ,25);

		delay(10);

		cleardevice();

	}




	getch();
	closegraph();

	return 0;
}
