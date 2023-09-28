//do while in C

#include<stdio.h>

int main(){
	int i=0, sum=0;
	do{
		printf("%d  ", i);
		sum=sum+i;
		i++;
		
	}
	while(i<=10);
	printf("\n %d",sum);
	
	
	return 0;
}
