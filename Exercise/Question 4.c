//Quadratic Equation
#include<stdio.h>
#include<math.h>
int main(void){
	int a,b,c;
	printf("enter value for a:");
	scanf("%d",&a);
	printf("enter value for b:");
	scanf("%d",&b);
	printf("enter value for c:");
	scanf("%d",&c);
	float r1= (-b+sqrt((b*b)-4*a*c))/(2*a);
	float r2= (-b-sqrt((b*b)-4*a*c))/(2*a);
	printf("The roots of the equation are: %f and %f",r1,r2);
}