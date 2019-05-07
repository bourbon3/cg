#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class trans
{
public:
    int gd=DETECT,gm;
    float x1,y1,x2,y2;
    int tx,ty;
    float sx,sy;
    float xf1,yf1,xf2,yf2;
    float xf4,yf4;
    int ch;
    char con;
    float angle=0,ang;
    int translation()
    {
        cout<<"\n\t\tTRANSLATION\n";
        cout<<"Enter coordinates of line x1 ,y1 ,x2 ,y2: \n";
        cin>>x1>>y1>>x2>>y2;
        cout<<"Enter transformation factor tx and ty:\n";
        cin>>tx>>ty;
        xf1=x1+tx;
        yf1=y1+ty;
        xf2=x2+tx;
        yf2=y2+ty;
        initgraph(&gd,&gm,NULL);
        setcolor(YELLOW);
        line(x1,y1,x2,y2);
        setcolor(WHITE);
        line(xf1,yf1,xf2,yf2);
        getch();
        closegraph();
        return 0;
    }
    int scaling()
    {
        cout<<"\n\t\t SCALING OF A LINE \n";
        cout<<"Enter coordinates of rectangle x1 ,y1 ,x2 ,y2: \n";
        cin>>x1>>y1>>x2>>y2;
        cout<<"Enter the scaling factor:\n";
        cin>>sx>>sy;
        initgraph(&gd,&gm,NULL);
        setcolor(YELLOW);
        rectangle(x1,y1,x2,y2);
        xf1=x1*sx;
        yf1=y1*sy;
        xf2=x2*sx;
        yf2=y2*sy;
        setcolor(WHITE);
        rectangle(xf1,yf1,xf2,yf2);
        getch();
        closegraph();
	return 0;
    }
    int rotation()
    {
        cout<<"\n\t\tROTATION\n";
        cout<<"Enter coordinates of line x1 ,y1: \n";
        cin>>x1>>y1;
        cout<<"Enter coordinates of line x2, y2: \n";
        cin>>x2>>y2;
        cout<<"Enter the angle: \n";
        cin>>ang;
        angle=(ang*3.14)/180;
        initgraph(&gd,&gm,NULL);
        setcolor(YELLOW);
        line(x1,y1,x2,y2);
        xf4=x2-(((x2-x1)*cos(angle))-((y2-y1)+sin(angle)));
        yf4=y2-(((x2-x1)*sin(angle))+((y2-y1)*cos(angle)));
        setcolor(WHITE);
        line(x2,y2,xf4,yf4);
        getch();
        closegraph();
        return 0;
    }
};
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2;
    int tx,ty;
    int angle;
    float Sx,Sy;
    float xf1,yf1,xf2,yf2;
    int ch;
    char con;
    trans obj;
    cout<<"\t\t\n";
    cout<<"\t\t 2D-TRANSFORMATION TECHNIQUES \n";
    menu:
    cout<<"\nMENU\n";
    cout<<"1.Translation\n";
    cout<<"2.Rotation\n";
    cout<<"3.Scaling\n";
    cout<<"Enter your choice\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        obj.translation();
        break;
        case 2:
        obj.rotation();
        break;
        case 3:
        obj.scaling();
        break;
        default:
        cout<<"Invalid choice.\nDo you want to continue(y/n)?";
        cin>>con;
        if(con=='y')
        goto menu;
        else
        break;
    }
    return 0;
}
