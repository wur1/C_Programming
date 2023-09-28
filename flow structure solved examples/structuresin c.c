#include<stdio.h>
#include<string.h>
struct person{
	char name[50];
	char department[50];
	int reg_no;
	int roll_no;
}person1;
int main(){
	//person, P1;
	strcpy(person1.name, "ahmed khan");
	strcpy(person1.department, "Electronics");
	person1.reg_no=4;
	person1.reg_no=;
	printf("name of person is %s\n", person1.name);
	printf("department %s\n", person1.department);
	printf("city no of person %d\n",person1.roll_no);
	printf("salary of person %d\n", person1.reg_no);
	
	return 0;
}
