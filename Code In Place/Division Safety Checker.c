#include <stdio.h>
int main(void)
{
	int numerator,denominator;
	printf("Enter Numerator: ");
	scanf("%d",&numerator);
	printf("Enter Denominator: ");
	scanf("%d",&denominator);
	if (denominator == 0){
		printf("Error,Cannot use 0 as denominator");
	}
	else{
		printf("The division results to:%0.2f",(float)numerator/denominator);
	}
}