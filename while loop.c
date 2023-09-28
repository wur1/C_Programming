//while loop in C

#include<stdio.h>
int main(){
	int i=0, sum=0;
	while(i<=10)   //condition
	{
		printf("%d ", i);
		sum=sum+i;  //adding the intigers
		i++;       //updating condition
	}
	printf("%\n%d\n", sum);
	return 0;
}
