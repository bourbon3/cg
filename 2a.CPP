//#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<iostream>
#include<xcb/xcbext.h>
using namespace std;
//#include<dos>

int main()
{
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	float x,y,x1,y1,x2,y2,dx,dy,step;

	cout<<"Enter the value for x1 and y1: ";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 an y2:  ";
	cin>>x2>>y2;

	dx=abs(x2-x1);
	dy=abs(y2-y1);

	if(dx>=dy)
		step=dx;
	else
		step=dy;
	dx=dx/step;
	dy=dy/step;

	x=x1;
	y=y1;

	i=1;
	while(i<=step)
	{
		putpixel(x,y,GREEN);
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(100);
	}

	getch();
	closegraph();
	return 0;
}
