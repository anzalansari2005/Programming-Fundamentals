#include <stdio.h>
int main(void)
{
	float Ctemp;
	printf("Enter Temperature in Celsius:");
	scanf("%f",&Ctemp);
	float Ftemp = (Ctemp*9/5)+32;
	printf("The temperature in fahrenheit is: %0.2f",Ftemp);
}
/*when entering 100 Degrees Celcius as input output is 212
when entering 0 output is 32
when entering -40 output is -40 */