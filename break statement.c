//break statement in C
#include<stdio.h>

int main(){
	int i, n;
	double num, sum=0;
	printf("enter number of integers whose average is required:\n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%lf", &num);
		if(num<0.0)
		{
			break;
		}
		
		sum= sum+num;
		
	}
	
	printf("the sum is %.2lf ", sum);
	printf("the average is %2lf ", sum/n);
	
	return 0;
	
}
