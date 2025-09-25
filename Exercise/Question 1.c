//Character Check
#include<stdio.h>
int main (void){
	char Character;
	printf("Enter any character:");
	scanf("%c",&Character);
	if (Character >= 'A' && Character <='Z'){
		printf("\nThis is an Upercase letter");
	}
	else if (Character >= 'a'&& Character <= 'z'){
		printf("\nThis is a lowercase letter");
	}
	else if (Character >= '0'&& Character<= '9'){
		printf("\nThis is a Digit");
	}
	else{
		printf("It is a Special Character");
	}
}