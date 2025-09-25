//check if 4th and 7th bits are on if yes then turn them off in 8 bit number
#include <stdio.h>

int main(void) {
    int Num;
    printf("Enter a number: ");
    scanf("%d", &Num);
    if ((Num&72)==72) {
        printf("The 4th and 7th bits are on.\n");
        Num = (Num & ~72);
        printf("with 7th and 4th bits in off position: %d", Num);
    }
	 else {
        printf("The 4th and 7th bits are off.");
    }
}