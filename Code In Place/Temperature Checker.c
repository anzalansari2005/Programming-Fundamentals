#include<stdio.h>
int main(void){
	float temp;
	printf("Enter Temperature in celsius:");
	scanf("%f",&temp);
	if (temp>=30){
		printf("Weather is Hot");
	}
}