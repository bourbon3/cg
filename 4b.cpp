#include<iostream>
#include<graphics.h>
using namespace std;
 
void floodFill(int x,int y,int interiorColor,int fillColor)
{
	if(getpixel(x,y) == interiorColor)
	{
		putpixel(x,y,fillColor);
		floodFill(x-1,y,interiorColor,fillColor);
		floodFill(x+1,y,interiorColor,fillColor);
		floodFill(x,y-1,interiorColor,fillColor);
		floodFill(x,y+1,interiorColor,fillColor);
		floodFill(x-1,y+1,interiorColor,fillColor);	
		floodFill(x+1,y+1,interiorColor,fillColor);
		floodFill(x+1,y-1,interiorColor,fillColor);	
		floodFill(x-1,y-1,interiorColor,fillColor);		
	}
}
 
int main()
{
	int gm,gd=DETECT,radius;
	int x,y;
	
	initgraph(&gd,&gm,NULL);
	rectangle(100,100,250,250);
	floodFill(110,110,0,15);

	getch();
	closegraph();
	
	return 0;
}
