//C program to check wether a number is less/greater than or equal to other
#include<stdio.h>

int main(){
	double a, b;
	printf("enter the value of a and b: \n");
	scanf("%lf %lf", &a,&b);
	
	//CHECK IF BOTH THE NUMBERS ARE EQUALL
	if(a==b){
		printf("%result: %lf==%lf", a,b);
	}
	//CHECK IF a IS LESS THAN b
	else if(a<b){
		printf("result: %lf<%lf", a, b);
	}
	
	//CHECK IF a IS GREATER THAN b
	
	else if(a>b){
		printf("result: %lf>%lf", a,b);
	}
	
	return 0;
}
