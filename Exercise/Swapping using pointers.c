/*Write a program to implement the exchange or swap the values of 3 variables{a,b,c}.*/
#include<stdio.h>

void swapped(int *aPtr, int *bPtr, int *cPtr)
{
	int temp;
	temp = *bPtr;
	*bPtr = *aPtr;
	*aPtr = *cPtr;
	*cPtr = temp;	
}
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	printf("a:%d\nb:%d\nc:%d\n", a,b,c);
	swapped(&a,&b,&c); //& needed here so function receives the original variable and not the copied values.
	printf("Swapped:\n");
	printf("a:%d\nb:%d\nc:%d\n",a,b,c);	
	return 0;
}
