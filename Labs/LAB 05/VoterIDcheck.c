#include<stdio.h>
int main(void)
{
    int age;
    int hasID;
    printf("Enter your age: ");
    scanf("%d",&age );
    if(age>=18){
        printf("Do you have an ID(1 for yes 0 for no): ");
        scanf("%d",&hasID);
        if(age>=18 && hasID==1){
            printf("You are eligible for voting");
        }
		else if(age>=18 && hasID==0){
            printf("You meet the age requirment but cannot vote without an ID");
        }
    }
	else
         printf("You are not eligible for voting");
}