//address of variable
#include<stdio.h>
//using namespace std;
int main(){
	int var = 6, *p;
	*p=&var;
	// print the value
	//printf("variable: %d\n", a);
	//print the address of variable
	//printf("address %d ", &var);
	printf("%d", *p);

	return 0;
}
