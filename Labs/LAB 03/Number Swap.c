//Number Swap
#include <stdio.h>
int main(void){
	int a,b,c;
	printf("Enter value for a:");
	scanf("%d",&a);
	printf("Enter value for b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	
	
	printf("Value for a is %d\nValue for b is %d",a,b);
	
}