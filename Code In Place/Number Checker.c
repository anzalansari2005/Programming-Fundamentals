#include<stdio.h>
int main(void){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if (num%2 == 0){
		printf("Number is even");		
	}
	else{
		printf("Number is odd");
	}
}