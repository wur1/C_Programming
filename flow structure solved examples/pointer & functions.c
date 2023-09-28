//pointer and functions call by address
#include<stdio.h>
//function prototype
void swap(int*, int*);
int main(){
	int num1 = 10, num2 = 20;
	swap(&num1, &num2);   //function call
	printf("num1 = %d", num1);
	printf("\nnum2 = %d", num2);
	return 0;
}
//function definition
void swap(int *n1, int *n2){
	int temp;
	temp = *n1;
	*n1=*n2;
	*n2=temp;
	
}
