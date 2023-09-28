#include<iostream>
#include<graphics.h>
int main(){
	int gd =DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	setfillstyle(SOLID_FILL, BLUE);
	circle(259, 250, 20);
	getch();
	closegraph();
	return 0;
}
