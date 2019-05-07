
#include<graphics.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
int gd=DETECT,gm;
float xc,yc,xe,ye,step,x,y,xi,yi,k;

cout<<"Enter values of xs and xe"<<endl;
cin>>xc;
cin>>xe;
cout<<"Enter values of ys and ye"<<endl;
cin>>yc;
cin>>ye;
initgraph(&gd,&gm,NULL);
float dx=xe-xc;
float dy=ye-yc;
if(abs(dx)>=abs(dy))
{
	step=abs(dx);
}
else
{
	step=abs(dy);
}
xi=dx/step;
yi=dy/step;
x=xc;
y=yc;
for(k=1;k<=step;k++)
{
	x=x+xi;
	y=y+yi;
	putpixel(x,y,GREEN);
}

getch();
closegraph();
return 0;
}



