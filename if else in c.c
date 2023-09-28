#include<stdio.h>

int main(){
	int a;
	printf("please enter the value of a:\n");
	scanf("%d", &a);
	if(a<0){
		printf("you entered a negative number:\n");
		a= -a;
	}
	else{
		a=a;
	}
	printf("%d",a);
	
	return 0;
}
