#include<stdio.h>
int main(){
	int i, n, reverse, remainder;
	printf("please enter the number to be reversed!");
	scanf("%d", &n);
	for(i=0; i<4; i++)
	{
		remainder= n%10;
		reverse= reverse*10+remainder;
		n=n/10;
	}
	printf("reverse = %d", reverse);
	
	return 0;
}
