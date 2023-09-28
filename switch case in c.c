// switch case in C
// simple calculator
#include<stdio.h>

int main(){
	char expression;
	double n1, n2;
	
	printf("please enter the operation (+, -, *, /): \n");
	scanf("%c", &expression);
	printf("please enter the numbers: \n\n");
	scanf("%lf %lf",&n1,&n2);
	
	switch(expression){
		
		case '+':
			{
				printf("%lf + %lf = %.2lf", n1,n2, n1+n2);
				break;
			}
		case '-':
			{
				printf("%lf - %lf = %.2lf", n1,n2, n1-n2);
				break;
			}
		case '*':
			{
				printf("%lf * %lf = %.2lf", n1,n2,n1*n2);
				break;
			}
		case '/':
			{
				printf("%lf / %lf = %.2lf", n1,n2,n1/n2);
				break;
			}
			
	}
	
	return 0;
}
