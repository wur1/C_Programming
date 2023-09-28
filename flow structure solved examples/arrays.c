#include<stdio.h>

int main(){
	int array[5], i, sum=0,n;
	float average;
	printf("please enter the number of elements!\n");
	scanf("%d", &n);
	printf("please enter the elements!\n");
	
	//take elements of the array from user
	for(i=0; i<n;i++){
	scanf("%d", &array[i]);
	
	}
	//add the elements
	for(i=0; i<n;i++){
		sum=sum+array[i];
	}
	//display the sum
	printf("the sum is \n%d", sum);
	//calculate the average 
	average =sum/n;
	// display average 
	printf("average = %.2lf\n", average);
	
	return 0;
}
