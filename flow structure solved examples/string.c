#include<stdio.h>
int main(){
	char name[30];
	printf("enter name!\n");
	fgets(name, sizeof(name), stdin);
	printf("name is ");
	puts(name);
	
	return 0;
}
