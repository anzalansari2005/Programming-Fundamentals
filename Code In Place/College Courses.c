//college program and courses
#include<stdio.h>
int main(void){
	int dept,year;
	printf("Enter Department(1 for CS 2 for EE):");
	scanf("%d",&dept);
	switch (dept){
		case 1:
			printf("You Chose CS");
			printf("\nWhich Year?(3 for First 4 for Second):");
			scanf("%d",&year);
			switch(year){
				case 3:
					printf("\nYou are a First Year Student!");
					printf("\nYour Courses include:ICP,Islamic Studies,Programming Fundamentals");
					break;
				case 4:
					printf("\nYou are a Second Year Student!");
					printf("\nYour Courses include:Calculus,Applied Physics,Logic Circuit Building");
					break;
			}
			break;
		case 2:
			printf("\nYou have choosen electrical engineering");
			printf("\nWhich Year?(3 for First 4 for Second:s)");
			scanf("%d",&year);
			switch(year){
				case 3:
					printf("\nYou are a First Year Student!");
					printf("\nYour Courses include:Calculus 1,Physics 2,Chemistry");
					break;
				case 4:
					printf("\nYou are a Second Year Student!");
					printf("\nYour Courses include:Circuit Theory II,Electromagnetic Field Theory,Differential Equations");
					break;
			
			break;
		default:
			printf("\nInvalid Input");
			break;
		}			
	}
}