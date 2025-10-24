#include<stdio.h>
int main(void){
	int units;
	float final,bill,tax;
	printf("enter units consumed in GB:");
	scanf("%d",&units);
	if(units >= 0 && units <=100){
		bill = units*2;
		tax = bill*0.1;
		final = bill+tax;
		printf("Pay: %f",final);
	}
	else if(units > 100 && units<=200){
		bill = 100*2+(units-100)*1.5;
		tax = bill*0.1;
		final = bill+tax;
		printf("Pay: %f",final);
	}
	else if(units > 200 && units < 400){
		bill = 100*2+100*1.5+(units-200)*1;
		tax = bill*0.1;
		final = bill+tax;
		printf("Pay: %f",final);
	}
	else if (units < 0){
		printf("invalid input");
	}
	else {
		bill = 100*2+100*1.5+200*1+(units-400)*0.5;
		tax = bill*0.1;
		final = bill+tax;
		printf("Pay: %f",final);
	}
}
