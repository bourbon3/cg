#include<iostream>
#include<graphics.h>
using namespace std;
void drawCircle(int x, int y, int xc, int yc);
int main()
{
	int gd = DETECT, gm;
	int r, xc, yc, x, y, d;
	initgraph(&gd, &gm, NULL);
	
	cout<<"Enter the center co-ordinates: \n";
	cin>>xc>>yc;

	cout<<"Enter the radius of circle: \n";
	cin>>r;

	d = 3 - 2*r;
	x=0; y = r;
	drawCircle(x,y,xc,yc);
	while(x < y)
	{	
		if(d <= 0)
		{
			d = d + (4*x) + 6;
			drawCircle(x=x+1,y,xc,yc);
		}
		else
		{
			d = d + (4*(x-y)) + 10;
			drawCircle(x=x+1,y=y-1,xc,yc);
		}
	}
	

	getch();
	closegraph();

}

void drawCircle(int x,int y,int xc,int yc)
{
	putpixel(x+xc,y+yc,YELLOW);
	putpixel(-x+xc,y+yc,YELLOW);
	putpixel(x+xc, -y+yc,YELLOW);
	putpixel(-x+xc, -y+yc, YELLOW);
	putpixel(y+xc, x+yc, YELLOW);
	putpixel(y+xc, -x+yc, YELLOW);
	putpixel(-y+xc, x+yc, YELLOW);
	putpixel(-y+xc, -x+yc, YELLOW);
}
