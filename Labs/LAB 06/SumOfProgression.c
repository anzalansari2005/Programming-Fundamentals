#include<stdio.h>
int main (void){
	float den = 4;
	float sum = 1;
	while(den<=400) {
	sum = sum+ (1/den);
	den = den + 4;
	}
	printf ("%f",sum);
}