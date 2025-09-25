// triangle type checker
#include <stdio.h>
int main(void)
{
	int s1,s2,s3;
	printf("Enter Length of Side 1:");
	scanf("%d",&s1);
	printf("Enter Length of Side 2:");
	scanf("%d",&s2);
	printf("Enter Length of Side 3:");
	scanf("%d",&s3);
	if ((s1+s2>s3) && (s1+s3>s2) && (s2+s3>s1)){
		printf("It is a Valid Triangle");
		if (s1 == s2 && s1 == s3){
			printf("\nThis is an Equilateral Triangle");
		}
		else if ((s1 == s2 && s1 != s3) || (s2 == s3 && s2 != s1)){
			printf("\nThis is an Isosceles Triangle");
		}			
		else if (s1 != s2 != s3){
			printf("\nThis is a Scalene Triangle");
		}
	}
	else{
		printf("\nNot a valid Triangle");}	
}