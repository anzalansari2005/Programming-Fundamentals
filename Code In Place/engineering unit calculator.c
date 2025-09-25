//engineering unit calculator
#include<stdio.h>;
int main(void)
{
	int Watts; //declares the variable "Watts" which we will be our input
	printf("Enter Power in Watts:");//prompting the user to give an input
	scanf("%d",&Watts);//allows to user to input with a cursor
	int Kilowatts = Watts/1000;//declaration of kilowatts after the input so it takes the value that has been input by the user
	printf("The Power in Kilowatts is: %d KW",Kilowatts);//output statement
	
}