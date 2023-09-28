#include<stdio.h>

int main(){
	int a, b;
	a=34;
	b= 5;
	
	printf(" the sum of a and b is %d \n" , a+b);
	printf(" the difference of a and b is %d \n" , a-b);
	printf(" the product of a and b is %d \n" , a*b);
	printf(" the quotient of a and b is %d \n" , a/b);
	printf(" the remainder of a/b is %d \n" , a%b);
	
	//INCREMENT AND DECREMENT OPERATORS IN C
	
	printf("the next number comming after a is %d \n " , ++a);
	printf("the next number comming before a is %d \n " , --a);
	
	// RELATIONAL OPERATORS
	int x = 5, y = 10, z = 5;
	printf("%d == %d is %d \n", x, y, x == y);
	printf("%d == %d is %d \n", x,z, x==z);
	printf("%d >= %d is %d \n", x, y, x >= y);
	printf("%d >= %d is %d \n", x,z, x>=z);
	printf("%d > %d is %d \n", x, y, x > y);
	printf("%d > %d is %d \n", x,z, x>z);
	printf("%d < %d is %d \n", x, y, x < y);
	printf("%d < %d is %d \n", x,z, x<z);

	// sizeof OPERATOR
	
	int k;
	float p;
	char talha;
	double r;
	
	printf("size of k is %d \n", sizeof(k));
	printf("size of talha is %d \n", sizeof(talha));
	printf("size of johny bhaii is %d \n ", sizeof(r));

	return 0;
}
