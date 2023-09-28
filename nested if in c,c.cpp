//nested if statements
#include<stdio.h>

int main(){
	int a, b;
	printf("enter the value of a and b: \n");
	scanf("%d %d",&a,&b);
	if(a>=b){
		if(a>b){
			printf("%d>%d",a,b);
		}
		else if(a==b)
		{
			printf("%d==%d",a,b);
		}
		else// will not work here
		{
			printf("%d < %d",a,b);
		}
	}
	
	return 0;
}
