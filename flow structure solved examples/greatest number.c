#include<stdio.h>
int main()
{
	int a,b,c;
	printf("please enter the value of a , b and c \n");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b&&a>c){
		printf("the greatest number is %d:",a);
	}
	else if(b>a&&b>c){
		printf( "the greatest number is %d:",b);
	}
	else
	{
		printf("the greatest number is %d", c);
	}
	
	return 0;
}
