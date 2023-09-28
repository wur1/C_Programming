//sum of first N numbers
#include<stdio.h>

int main(){
	int count, num, sum=0;
	printf("enter the value of first n numbers: \n");
	scanf("%d", &num);
	for(count=1; count<=num; count++)
	{
		sum= sum+count;
	}
	printf("%d", sum);
	
	return 0;
}
