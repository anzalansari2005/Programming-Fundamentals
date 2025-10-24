//Department Select
#include<stdio.h>
int main(void){
	int dept,subdept;
	printf("Enter Department(1 for CS 2 for EE):");
	scanf("%d",&dept);
	switch (dept){
		case 1:
			printf("You Chose CS");
			printf("\nChoose a subdept(3 for AI 4 for CY):");
			scanf("%d",&subdept);
			switch(subdept){
				case 3:
					printf("\nYou chose artificial intelligence!");
					break;
				case 4:
					printf("\nYou chose Cyber Security");
					break;
			}
			break;
		case 2:
			printf("\nYou have choosen electrical engineering");
			break;
		default:
			printf("\nInvalid Input");
			break;
		
	}
}