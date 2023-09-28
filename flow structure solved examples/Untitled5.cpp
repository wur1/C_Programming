#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(){
	int gd=DETECT, gm,i;
	for(i=0; i<100, i++){
		circle(319, 219-i,20+i);
		circle(319, 219+i, 20+i);
		circle(299-i, 239, 20+i);
		circle(339+i, 239, 20+i);
		delay(100);
	}
	return 0;
}
