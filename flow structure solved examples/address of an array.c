//address of an array
#include<stdio.h>

int main(){
	int i,x[i];
	
	for(i=0; i<4;i++){
		
		printf("x[%d] = %p\n", i,&x[i]);
	}
	printf("address of the array is %p",x);
	return 0;
}
