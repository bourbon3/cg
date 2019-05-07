#include<iostream>
#include<graphics.h>
using namespace std;

	int bitCode(int xmin, int ymin,int xmax,int ymax,int x,int y)
	{
		int a[4] = {0,0,0,0};
		if(y > ymax)
		{
			a[0] = 1;
		}
		else 
		{
			a[0] = 0;
		}
		if(ymin > y)
		{
			a[1] = 1;
		}
		else
		{
			a[1] = 0;
		}
		if(x > xmax)
		{
			a[2] = 1;
		}
		else 
		{
			a[2] = 0;
		}
		if(xmin > x)
		{
			a[3] = 1;
		}
		else
		{
			a[3] = 0;
		}

		return a;
	}

int main()
{
	int gd=DETECT,gm;
	int xmin, ymin, xmax, ymax;
	int x1, y1, x2, y2, b[4];
	initgraph(&gd,&gm,NULL);

	xmin=50;
	ymin=50;
	xmax=300;
	ymax=300;

	x1=80;
	y1=80;
	x2=140;
	y2=140;
	//cout<<"Enter the coordinates for the window (w1-w4): ";
	//cin>>w1>>w2>>w3>>w4;

	//cout<<"Enter the coordinates for the line (x1,y1,x2,y2): ";
	//cin>>x1>>x2>>x3>>x4;

	rectangle(xmin, ymin, xmax, ymax);
	line(x1, y1, x2, y2);
	b = bitCode(xmin, ymin, xmax, ymax, x1, y1);
	cout<<"BitCode: "<<b;

	getch();
	closegraph();
	return 0;
}