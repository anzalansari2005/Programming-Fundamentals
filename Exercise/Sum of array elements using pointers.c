//Write a program that calculates the sum of all the elements in array using pointers.
#include<stdio.h>

int main()
{
	int num[5];
	printf("Enter 4 numbers:");
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &num[i]);
	}
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum+= *(&num[i]);
	}
	printf("Sum: %d", sum);
}
