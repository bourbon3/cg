#include<iostream>
#include<graphics.h>
using namespace std;
void drawCircle(int xc, int yc, int radius)
{
	int x = radius;
	int y = 0;
	int d = 0;

	while(x >= y)
	{
		putpixel(xc + x, yc + y, 15);
		putpixel(xc + y, yc + x, 15);
		putpixel(xc - y, yc + x, 15);
		putpixel(xc - x, yc + y, 15);
		putpixel(xc - x, yc - y, 15);
		putpixel(xc - y, yc - x, 15);
		putpixel(xc + y, yc - x, 15);
		putpixel(xc + x, yc - y, 15);
		delay(100);
	

	if( d <= 0)
	{
		y += 1;
		d += 2*y + 1;	
	}

	if( d > 0)
	{
		x = x- 1;
		d = d - 2*x + 1;
	}
	}
}

int main()
{
	int gd = DETECT, gm;
	int x, y, r, xc, yc;
	initgraph(&gd, &gm, NULL);
	
	cout<<"Enter the radius of the circle: ";
	cin>>r;

	cout<<"Enter the co-ordinates of the center x and y: ";
	cin>>x>>y;
	drawCircle(x,y,r);
	

	getch();
	closegraph();
	return 0;
}
