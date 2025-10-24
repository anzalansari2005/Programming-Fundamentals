#include <stdio.h>
int main(void)
{
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   if(num>0){
    	printf("Positive number");
   }
   else if(num<0){
		printf("negative number");
   }
  else{
    	printf("Zero");
   }
}