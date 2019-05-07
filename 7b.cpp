#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class transformation 
{
public:
	int gd=DETECT, gm;
	float x1, y1, x2, y2;
	float xf1, yf1, xf2, yf2;
	int tx,ty;

	float sx,sy;
	float xf4,yf4;
	float angle=0,ang;

	int translation()
	{
	initgraph(&gd,&gm,NULL);
	cout<<"\n********TRANSFORMATION********";
	cout<<"Enter the coordinates of the line x1,y1,x2,y2";
	cin>>x1>>y1>>x2>>y2;
	cout<<"Enter transformation factor tx and ty:\n";
        cin>>tx>>ty;

	xf1 = x1 + tx;
	yf1 = y1 + ty;
	xf2 = x2 + tx;
	yf2 = y2 + ty;

	setcolor(4);
        line(x1,y1,x2,y2);
        setcolor(2);
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
        setcolor(4);
        rectangle(x1,y1,x2,y2);
        xf1=x1*sx;
        yf1=y1*sy;
        xf2=x2*sx;
        yf2=y2*sy;
        setcolor(2);
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
        setcolor(4);

        line(x1,y1,x2,y2);
        xf4=x2-(((x2-x1)*cos(angle))-((y2-y1)+sin(angle)));
        yf4=y2-(((x2-x1)*sin(angle))+((y2-y1)*cos(angle)));
        setcolor(2);		//Green
        line(x2,y2,xf4,yf4);
        getch();
        closegraph();
        return 0;
    }
};

int main()
{
	int ch;
	//int gd=DETECT, gm;
	//initgraph(&gm, &gd, NULL);

	transformation obj;
	do{
	cout<<"\t\t 2D-TRANSFORMATION TECHNIQUES \n"; 
	cout<<"\nMENU\n1.Translation\n2.Rotation\n3.Scaling\n4.Exit\n";
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
			cout<<"Invalid choice Please try again :)";
			break;
	    }

	}while(ch != 4);

	getch();
	closegraph();
	return 0;
}
