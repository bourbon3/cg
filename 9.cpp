#include<graphics.h>
#include<iostream.h>
#include<math.h>
#include<conio.h>

int main()
{
int gd=DETECT,gm;
 float p0x,p0y,p1x,p1y,p2x,p2y,p3x,p3y;
float cx,cy,u;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cout<<"Enter the value of POx,P0y,P1x,P1y,P2x,P2y,P3x,P3y";
cin>>p0x>>p0y>>p1x>>p1y>>p2x>>p2y>>p3x>>p3y;

 for(u=0;u<1;u=u+0.005)
 {
cx=p0x*pow(1-u,3) + p1x*(3*u*pow(1-u,2)) + p2x*(3*u*u*(1-u)) + p3x*pow(u,3);
cy=p0y*pow(1-u,3) + p1y*(3*u*pow(1-u,2)) + p2y*(3*u*u*(1-u)) + p3y*pow(u,3);
putpixel(cx,cy,YELLOW);
}

getch();
closegraph();
return 0;
}
