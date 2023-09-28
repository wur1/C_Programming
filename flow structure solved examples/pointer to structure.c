#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int marks;
	int aggregate;
}S;
int main(){
	struct student S, *ptr;
	ptr=&S;
	ptr->marks=1080;
	ptr->aggregate=96;
	
	strcpy(S.name,"john powell");
	printf("%s\n",S.name);
	printf("\nmarks = %d\n",ptr->marks);
	printf("\naggregate = %d\n",ptr->aggregate);
	
	return 0;
}
