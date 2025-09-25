// electric bill calculator
#include <stdio.h>
int main(void){
	float units,bill;
	printf("Enter The Units Consumed:");
	scanf("%f",&units);
	if (units < 101){
		bill = units*5;
		printf("Your bill is %0.2f,for %0.2f units",bill,units);
	}
	else if (units > 100 && units < 201){
		bill = (100*5)+((units-100)*7);
		printf("Your bill is %0.2f,for %0.2f units",bill,units);
	}
	else{
		bill = (100*5)+(100*7)+(units-200)*10;
		printf("Your bill is %0.2f,for %0.2f units",bill,units);
	}
	
}