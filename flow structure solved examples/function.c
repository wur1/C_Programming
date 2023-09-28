#include<stdio.h>
int addnumbers(int , int);
int main(){
	int a, b;
	printf("please enter the numbers to be added:");
	scanf("%d %d", &a, &b);
	
	printf("the sum is %d", addnumber(a,b));
	
	return 0;
}
int addnumber(int a, int b){
	int result;
	result = a+b;
	return result;
}
