#include<graphics.h>
#include<iostream>
using namespace std;

void boundaryFill(int x, int y, int fill_color, int boundary_color)
{
	if(getpixel(x, y) != boundary_color && getpixel(x, y) != 		fill_color)
	{
		putpixel(x, y, fill_color);
		boundaryFill(x + 1, y, fill_color, boundary_color); 
        	boundaryFill(x, y + 1, fill_color, boundary_color); 
        	boundaryFill(x - 1, y, fill_color, boundary_color); 
       		boundaryFill(x, y - 1, fill_color, boundary_color); 
       		boundaryFill(x - 1, y - 1, fill_color, boundary_color); 
        	boundaryFill(x - 1, y + 1, fill_color, boundary_color); 
        	boundaryFill(x + 1, y - 1, fill_color, boundary_color); 
        	boundaryFill(x + 1, y + 1, fill_color, boundary_color); 

	}
}
int main() 
{ 
	    int gd = DETECT, gm; 
	    initgraph(&gd, &gm, NULL); 
	    rectangle(100, 100, 350, 350); 
	    boundaryFill(105, 105, 15, 15); 
		delay(5000);

		getch();
		closegraph();		
		return 0;
}
