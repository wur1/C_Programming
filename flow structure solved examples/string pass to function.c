#include<stdio.h>
void displaystring(char str[]);
int main(){
	char str[50];
	printf("enter the string:\n");
	fgets(str, sizeof(str), stdin);
	displaystring(str);
	
	return 0;
}
void displaystring(char str[]){
	printf("string output:");
	puts(str);
}
