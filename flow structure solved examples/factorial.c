#include<stdio.h>
int main(){
	int n , i=1, fact=1;
	printf("please enter the value of number whose value is to be found!");
	scanf("%d", &n);
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("factorial = %d", fact);
	return 0;
}
