#include<stdio.h>		/*preprocessor directive*/
int main(){				/*main function, all instructions are executed here*/
	int age;			
	printf("what is your age\n");
	scanf("&d", age);
	if(age<60){			
		printf("you are young enough to work");
		
	}
	else if(age<18){
		printf("you are too young to work");
	}
	else
	printf("you are not capable to work");
	return 0;
}
