#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
	int gd=DETECT, gm;
	initgraph(int *gd, int *gm, (char)"");
	circle(120, 150, 200);
	getch();
	cleargraph();
	return 0;
}
