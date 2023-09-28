//daily temperature of two cities for seven days
#include<stdio.h>
const int city=2, day=7;
int main(){
	int  temp[city][day], i,j;
	//enter daily temperature data of the city
	for(i=0; i<city;i++){
		printf("please enter the data of city %d\n",i+1);
		for(j=0; j<day;j++){
			printf("temp on day %d, city%d: ",i+1, j+1 );
			scanf("%d", &temp[i][j]);
		}
		printf("\n");
	}
	//displaying the temperature data
	for(i=0; i<city;i++){
		printf("the daily data of temperature city %d ", i+1);
		printf("is as following\n\n");
		for(j=0; j<day;j++){
			//printf("temp on day %d, city%d",i+1, j+1 );
			printf("%d ", temp[i][j]);
		}
		printf("\n\n");
	}
	
	return 0;
}
