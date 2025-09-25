// blood donation eligible 
#include <stdio.h>
int main(void){
	int age,weight;
	printf("enter age:");
	scanf("%d",&age);
	printf("enter weight:");
	scanf("%d",&weight);
	if (age>=18){
		if (weight>=50){
		printf("Eligible");
		}
		else{
			printf("Not eligible underweight");
		}
	}
	else{
		printf("Not Eligibile Underage");
	}	
	
}
