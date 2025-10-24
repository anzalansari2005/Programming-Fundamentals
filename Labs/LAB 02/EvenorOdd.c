#include <stdio.h>
int main(void)
{
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   if(num % 2 == 0){
    	printf("This is an Even number");
   }
   else{
   		printf("This is an Odd number");
  }  
}